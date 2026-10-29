#include <stdio.h>
#include "sqlite3.c"

// Define o limite da chave de busca para 5 (5 caracteres + '\0')
#define CHAVE_MAX 6

int main() {
    sqlite3 *db;
    sqlite3_stmt *stmt;
    int rc;

    // 1. Abre a conexão com o banco de dados (substitua pelo caminho do seu arquivo)
    rc = sqlite3_open("meusLivros.db", &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Erro ao abrir o banco: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    // ==========================================
    // ÁREA DE CHAMADA DE DADOS (CHAVE DE ATÉ 5 CHARS)
    // ==========================================
    
    char chave_busca[CHAVE_MAX];
    printf("Digite a chave do livro (até 5 caracteres): \n
            │ 1: A1B2C │ 2: K9X2R │ 3: 7M1P5 │ 4: B8W4Q │ 5: Z3N6L │\n");
    if (fgets(chave_busca, CHAVE_MAX, stdin) != NULL) {
        // Remove possível '\n' no final
        size_t len = strlen(chave_busca);
        if (len > 0 && chave_busca[len-1] == '\n') chave_busca[len-1] = '\0';
    } else {
        fprintf(stderr, "Erro ao ler a chave.\n");
        sqlite3_close(db);
        return 1;
    }
    // ==========================================

    // 2. Prepara a query SQL usando "placeholder" (?) para evitar SQL Injection
    const char *sql = "SELECT resultado FROM tabela WHERE chave = ?;";
    
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Erro ao preparar a query: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // 3. Vincula a chave de busca ao placeholder '?'
    // SQLITE_STATIC indica que a string não será liberada antes da execução da query
    sqlite3_bind_text(stmt, 1, chave_busca, -1, SQLITE_STATIC);

    // 4. Executa a busca e processa o resultado
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW) {
        // Se encontrou o registro, extrai o texto da primeira coluna (índice 0)
        const unsigned char *resultado = sqlite3_column_text(stmt, 0);
        printf("Informacao encontrada: %s\n", resultado);
    } else if (rc == SQLITE_DONE) {
        printf("Nenhum registro encontrado para a chave: %s\n", chave_busca);
    } else {
        fprintf(stderr, "Erro na execução da busca: %s\n", sqlite3_errmsg(db));
    }

    // 5. Libera a memória do statement e fecha o banco
    sqlite3_finalize(stmt);
    sqlite3_close(db);

    return 0;
}
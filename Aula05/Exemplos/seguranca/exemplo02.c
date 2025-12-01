/*
 * exemplo02.c
 * Versão corrigida (segura) do exemplo de leitura de string.
 * Objetivos didáticos:
 * - evitar buffer overflow ao ler entrada do usuário
 * - validar o comprimento da entrada
 * - demonstrar remoção de newline e alocação correta
 *
 * Estratégia:
 * 1) Ler em um buffer temporário com fgets, que limita a leitura.
 * 2) Detectar se a entrada foi truncada (sem newline no buffer) e limpar o restante da linha.
 * 3) Alocar dinamicamente o tamanho exato necessário e copiar a string validada.
 * 4) Tratar retornos de erro de forma apropriada.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TEMP_SIZE 10

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char temp[TEMP_SIZE];

    printf("Digite uma string: ");

    if (fgets(temp, sizeof temp, stdin) == NULL) {
        fprintf(stderr, "Erro na leitura ou EOF\n");
        return 1;
    }

    /*
     * Se fgets leu TEMP_SIZE-1 chars e o último caractere não é '\n',
     * significa que a entrada foi maior que o buffer e foi truncada.
     * Precisamos descartar o resto da linha para não afetar leituras futuras.
     */
    size_t len = strlen(temp);
    if (len > 0 && temp[len - 1] == '\n') {
        /* Remove newline final */
        temp[len - 1] = '\0';
        len -= 1;
    } else if (len == sizeof temp - 1) {
        /* Entrada possivelmente truncada; limpar stdin até newline/EOF */
        int c;
        int truncated = 0;
        while ((c = getchar()) != '\n' && c != EOF) {
            truncated = 1;
        }
        if (truncated) {
            fprintf(stderr, "Aviso: entrada muito longa — truncada para %zu caracteres\n", sizeof temp - 1);
        }
    }

    /* Aloca exatamente o necessário (len + 1 para '\0') */
    char *buffer = malloc(len + 1);
    if (buffer == NULL) {
        fprintf(stderr, "Erro: sem memória\n");
        return 1;
    }

    memcpy(buffer, temp, len + 1);

    printf("Você digitou: %s\n", buffer);

    free(buffer);
    return 0;
}

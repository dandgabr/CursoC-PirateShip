/*
 * Exemplo de uso de fgets(3) para ler uma linha da entrada padrão.
 *
 * Objetivo:
 * - Mostrar como usar fgets para ler uma string segura (com limite de
 *   tamanho) e remover o caractere de nova linha '\n' se presente.
 *
 * Comportamento importante do fgets:
 * - fgets lê no máximo (n-1) caracteres e adiciona o terminador '\0'.
 * - Se a linha fornecida pelo usuário for maior que o buffer, o restante
 *   da linha permanecerá no buffer de entrada (stdin) e a string ficará
 *   truncada.
 * - fgets retorna NULL em caso de erro ou quando EOF é alcançado antes de
 *   qualquer caractere ser lido.
 *
 * Compilação:
 *   gcc -Wall -Wextra -O2 fgets.c -o fgets_example
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Buffer onde a linha será armazenada. Ajuste o tamanho conforme a necessidade. */
    char line[64];

    /* Prompt simples para o usuário */
    printf("Digite algo: ");

    /*
     * fgets lê até sizeof(line) - 1 caracteres ou até encontrar '\n'.
     * Retorna ponteiro para 'line' em caso de sucesso ou NULL em caso de
     * erro/EOF.
     */
    if (fgets(line, (int)sizeof(line), stdin))
    {
        /*
         * Remover o '\n' final (se houver).
         * strcspn retorna o índice do primeiro caractere que está em "\n"
         * ou o tamanho da string caso não encontre '\n'. Substituímos por
         * '\0' para truncar a string no local correto.
         */
        line[strcspn(line, "\n")] = '\0';

        /* Exibir o que foi lido (entre aspas simples para visualizar espaços vazios) */
        printf("Você digitou: '%s'\n", line);
    }
    else
    {
        /* Tratamento simples para distinguir EOF de erro */
        if (feof(stdin))
        {
            /* Entrada finalizada (por exemplo, Ctrl+D/Ctrl+Z) */
            puts("Nenhum dado lido: EOF alcançado.");
        }
        else
        {
            /* Erro ao ler (poderia usar perror para mais detalhes) */
            perror("fgets");
        }
    }

    return 0;
}

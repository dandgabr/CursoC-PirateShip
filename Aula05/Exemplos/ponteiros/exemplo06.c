/*
 * exemplo06.c
 * Exemplo didático de uso de ponteiros para percorrer uma string
 * Mostra como usar um ponteiro `char *` para iterar caractere a caractere
 * e imprimir uma string sem usar índices explicítos.
 *
 * Conceitos abordados:
 * - Arrays de char (strings em C)
 * - Ponteiros para char e aritmética de ponteiros
 * - Uso de `setlocale` para configurar localidade (ex.: acentuação)
 *
 * Compilação (exemplo, no PowerShell):
 *   gcc.exe -g exemplo06.c -o exemplo06.exe
 * Execução:
 *   .\Aula05\Exemplos\exemplo06.exe
 */

#include <stdio.h>
#include <locale.h>

/*
 * main: ponto de entrada do programa
 * Retorna 0 em caso de sucesso.
 */
int main(void) {
    /* Configura a localidade para permitir saída com acentos (ex.: "Olá") */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Uma string literal copiada para um array modificável `texto` */
    char texto[] = "Olá, mundo!";

    /* Ponteiro para percorrer a string; inicia apontando para o primeiro caractere */
    char *ptr = texto;

    /* Percorre a string até encontrar o terminador nulo '\0' */
    while (*ptr != '\0') {
        /* Imprime o caractere atual apontado por ptr */
        printf("%c", *ptr);
        /* Avança o ponteiro para o próximo caractere */
        ptr++;
    }

    /* Imprime quebra de linha ao final */
    printf("\n");

    return 0;
}

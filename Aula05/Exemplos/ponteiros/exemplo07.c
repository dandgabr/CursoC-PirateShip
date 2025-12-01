/*
 * exemplo07.c
 * CursoC-PirateShip - Aula05 / Exemplos
 * Objetivo: demonstrar uso de um array de strings e iteração com for
 * Autor: (preencha seu nome)
 * Data: 01/12/2025
 *
 * Este exemplo cria um array contendo nomes (literais de string)
 * e imprime cada elemento com seu índice. Também mostra a chamada
 * a `setlocale` para ajustar a localidade (útil para acentuação).
 */

#include <stdio.h>
#include <locale.h>

int main(void) {
    /* Ajusta a localidade para Português do Brasil com codificação UTF-8.
       Alguns ambientes dependem dessa configuração para imprimir acentos.
       Se não houver suporte ao locale no sistema, a chamada é inócua. */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Array de ponteiros para strings constantes (literais de string).
       Usamos `const char *` porque literais não devem ser modificados. */
    const char *nomes[] = {"Ana", "Bruno", "Carlos"};

    /* Calcula o total de elementos do array de forma segura.
       Isso evita usar um valor mágico (3) e facilita alterações futuras. */
    int total = sizeof(nomes) / sizeof(nomes[0]);

    /* Percorre o array e imprime cada nome com seu índice. */
    for (int i = 0; i < total; i++) {
        printf("Nome %d: %s\n", i, nomes[i]);
    }

    return 0;
}

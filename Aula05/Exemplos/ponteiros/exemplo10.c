#include <stdio.h>   // funções de entrada/saída (printf, etc.)
#include <stdlib.h>  // alocação dinâmica (malloc, free), EXIT_SUCCESS
#include <locale.h>  // configuração de localidade (setlocale)

/*
 * Exemplo 10 - alocação dinâmica de um inteiro, uso e liberação.
 * O objetivo é demonstrar malloc, verificação de ponteiro, uso do valor
 * e liberação com free, além de evitar dangling pointer atribuindo NULL.
 */

int main() {
    /*
     * Ajusta a localidade para português do Brasil com UTF-8.
     * Isso afeta funções que podem formatar texto ou datas de acordo
     * com a localidade. Em programas simples como este geralmente não
     * é obrigatório, mas é útil quando se quer garantir acentuação.
     */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
     * Aloca dinamicamente memória suficiente para um `int`.
     * - `malloc(sizeof(int))` retorna um `void*` apontando para um bloco
     *   de memória ou `NULL` se não houver memória suficiente.
     * - O cast para `(int*)` torna explícito que trabalharemos com um
     *   ponteiro para inteiro. Em C moderno o cast não é obrigatório,
     *   mas é comum ver em exemplos didáticos.
     */
    int *ptr = (int*)malloc(sizeof(int));

    /* Verifica se a alocação foi bem sucedida */
    if(ptr != NULL) {
        /* Armazena o valor 100 na posição de memória apontada por ptr */
        *ptr = 100;

        /* Imprime o valor armazenado. Desreferenciamos ptr para obter o int */
        printf("Valor: %d\n", *ptr);

        /* Libera o bloco de memória previamente alocado */
        free(ptr);

        /* Evita que ptr aponte para memória liberada (dangling pointer)
         * atribuindo NULL. Boa prática depois de `free`.
         */
        ptr = NULL;
    }

    /* Retorna 0 indicando término bem sucedido */
    return 0;
}
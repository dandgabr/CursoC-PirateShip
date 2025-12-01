/*
 * Exemplo: uso de array de ponteiros em C
 * - array de ponteiros para strings (const char *)
 * - array de ponteiros para int com alocação dinâmica
 * Mostra criação, acesso e liberação de memória.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Array de ponteiros para strings (estático) */
    const char *nomes[] = {"Alice", "Bruno", "Carla", "Daniel"};
    size_t n_nomes = sizeof(nomes) / sizeof(nomes[0]);

    printf("Array de ponteiros para strings:\n");
    for (size_t i = 0; i < n_nomes; ++i) {
        printf("  [%zu] %s\n", i, nomes[i]);
    }

    /* Array de ponteiros para int (cada elemento apontará para um int alocado) */
    int *numeros[5];
    for (int i = 0; i < 5; ++i) {
        numeros[i] = malloc(sizeof(int));
        if (numeros[i] == NULL) {
            perror("malloc");
            /* liberar o que já foi alocado antes de sair */
            for (int j = 0; j < i; ++j) free(numeros[j]);
            return 1;
        }
        *numeros[i] = (i + 1) * 10; /* exemplo de atribuição */
    }

    printf("\nArray de ponteiros para int (alocados dinamicamente):\n");
    for (int i = 0; i < 5; ++i) {
        printf("  numeros[%d] -> %d\n", i, *numeros[i]);
    }

    /* liberar memória alocada */
    for (int i = 0; i < 5; ++i) free(numeros[i]);

    /* Exemplo adicional: ponteiro para o primeiro elemento do array de strings */
    const char **p = nomes; /* p aponta para um elemento do tipo const char * */
    printf("\nUsando um ponteiro para o array: p[1] = %s\n", p[1]);

    return 0;
}

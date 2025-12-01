/*
 * exemplo04.c
 * Versão corrigida do exemplo didático que evita use-after-free.
 *
 * Estratégia adotada nesta correção:
 *  - Sempre evitar acessar memória após `free()`.
 *  - Se for necessário indicar que o ponteiro não deve ser usado, definir o
 *    ponteiro para `NULL` imediatamente após `free()` e sempre checar antes de
 *    desreferenciar.
 *  - Alternativa simples: não liberar a memória enquanto for necessária, ou
 *    usar variáveis no stack quando apropriado (sem necessidade de malloc/free).
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Aloca um inteiro no heap */
    int *ptr = malloc(sizeof *ptr);
    if (ptr == NULL) {
        perror("malloc");
        return EXIT_FAILURE;
    }

    *ptr = 42;
    printf("Valor: %d\n", *ptr);

    /*
     * Libera a memória quando não for mais necessária.
     * Em seguida, define o ponteiro como NULL para evitar usos acidentais.
     */
    free(ptr);
    ptr = NULL; /* evita use-after-free */

    /*
     * Uso seguro: verificar se o ponteiro é NULL antes de desreferenciar.
     * Neste exemplo, o ponteiro já foi definido para NULL, então não haverá
     * acesso inválido à memória liberada.
     */
    if (ptr != NULL) {
        printf("Valor após free: %d\n", *ptr);
    } else {
        printf("Ponteiro é NULL — acesso evitado após free\n");
    }

    return EXIT_SUCCESS;
}

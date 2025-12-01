#include <stdio.h>
#include <locale.h>

/*
 * exemplo10.c
 * -------------------------
 * Versão corrigida do exemplo09.c: evita acesso fora dos limites
 * verificando o índice antes de acessar o array.
 *
 * Este arquivo mostra uma abordagem simples e segura para evitar
 * out-of-bounds: obter o tamanho do array e validar o índice.
 */

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[5] = {1, 2, 3, 4, 5};

    /* Acessos válidos */
    printf("Acesso válido: %d\n", array[0]);
    printf("Acesso válido: %d\n", array[4]);

    /* Índice que em exemplo anterior provocava out-of-bounds */
    int idx = 10;

    /* Calcula o número de elementos do array */
    size_t array_len = sizeof(array) / sizeof(array[0]);

    /* Verificação de limites antes de acessar o array */
    if (idx >= 0 && (size_t)idx < array_len) {
        printf("Acesso (corrigido): %d\n", array[idx]);
    } else {
        printf("Acesso inválido detectado: índice %d fora dos limites (0..%zu)\n", idx, array_len - 1);
    }

    return 0;
}

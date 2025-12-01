/*
 * exemplo03.c
 * Exemplo didático de vulnerabilidade: uso de memória após liberação (use-after-free)
 *
 * Descrição:
 *  - Aloca um inteiro no heap, escreve um valor e libera a memória com `free()`.
 *  - Em seguida tenta ler o valor novamente após a liberação — isto é um uso-after-free.
 *
 * Por que é vulnerável:
 *  - Após `free(ptr)` a região de memória apontada por `ptr` torna-se inválida.
 *  - Acessar essa região causa comportamento indefinido (undefined behavior).
 *  - Em programas reais isso pode causar crashes, corrupção de memória e até
 *    ser explorado para execução arbitrária por um atacante.
 *
 * Como detectar:
 *  - Ferramentas como Valgrind, AddressSanitizer, ASAN, ou analisadores estáticos
 *    detectam usos após free e outros erros de memória.
 *
 * Observação: Este arquivo deve permanecer como exemplo didático do código vulnerável.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Aloca um inteiro no heap */
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        perror("malloc");
        return 1;
    }

    *ptr = 42;
    printf("Valor: %d\n", *ptr);

    /* Libera a memória alocada */
    free(ptr); // Libera a memória

    /*
     * ❌ VULNERÁVEL: acessar após free -> USE-AFTER-FREE
     * Mesmo que este printf "funcione" em alguns sistemas, o ponteiro aponta
     * para memória liberada — comportamento indefinido. Não faça isso em código
     * de produção.
     */
    printf("Valor após free: %d\n", *ptr);

    return 0;
}

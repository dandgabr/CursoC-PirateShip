/*
 * exemplo12.c
 * Versão corrigida do exemplo de "stack overflow".
 *
 * Correções aplicadas (para fins didáticos):
 * - Substitui recursão profunda por um laço iterativo para evitar
 *   muitos frames de pilha.
 * - Usa alocação dinâmica (heap) para grandes buffers em vez de
 *   variáveis locais grandes, evitando consumo excessivo da pilha.
 *
 * Observação: esta versão mantém a intenção do exemplo (processar
 * um grande número de iterações e demonstrar uso de um buffer grande),
 * mas faz isso de forma segura.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * recursaoSegura:
 * - n: número de iterações a executar (equivalente à profundidade da recursão original)
 *
 * Implementação segura:
 * - Aloca o buffer grande no heap usando malloc() e libera com free().
 * - Substitui chamadas recursivas por um laço for.
 */
void recursaoSegura(int n) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Tamanho do buffer (mesmo tamanho do exemplo original) */
    const size_t ELEMENTOS = 10000;

    /* Aloca no heap em vez de na pilha */
    int *buffer = (int *)malloc(ELEMENTOS * sizeof(int));
    if (buffer == NULL) {
        /* Em caso de falha de alocação, reporta e sai da função com segurança */
        perror("Falha ao alocar buffer");
        return;
    }

    /* Simula o trabalho que a recursão fazia — aqui, repetimos n vezes
     * sem criar novos frames de pilha. Mantemos operações simples no buffer
     * para demonstrar uso do espaço alocado.
     */
    for (int i = 0; i <= n; ++i) {
        /* Exemplo de uso: escrever um valor e ler de volta. */
        buffer[0] = i;

        /* Para não poluir a saída, mostramos apenas alguns marcos. */
        if (i % 25000 == 0) {
            printf("Iteracao: %d\n", i);
        }
    }

    /* Libera o buffer alocado no heap antes de retornar */
    free(buffer);
}

int main(void) {
    /* Chamamos a versão segura com o mesmo valor do exemplo original.
     * Isto não causa stack overflow, porque não usamos recursão profunda
     * nem alocamos grandes buffers na pilha.
     */
    recursaoSegura(100000);
    return 0;
}

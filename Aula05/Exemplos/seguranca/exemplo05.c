#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * exemplo05.c
 * Exemplo didático: vazamento de memória (memory leak).
 *
 * Observação importante: este arquivo permanece intencionalmente
 * vulnerável para fins pedagógicos — não corrija a falha aqui.
 * A versão corrigida está em `exemplo06.c`.
 *
 * O que o código demonstra:
 * - A função `alocaMemoria` aloca memória dinamicamente com
 *   `malloc` e não chama `free` antes de retornar.
 * - Se `alocaMemoria` for chamada repetidamente (por exemplo,
 *   dentro de um loop), cada chamada alocará memória nova no heap
 *   sem liberá-la, levando a um vazamento de memória.
 *
 * Por que isso é vulnerável / problemático:
 * - Vazamentos de memória aumentam o uso de RAM ao longo do tempo.
 * - Em programas de longa execução, serviços ou sistemas embarcados
 *   isso pode causar degradação de desempenho, swaps e até crashes.
 * - Em cenários de produção, vazamentos acumulados são difíceis de
 *   depurar se não houver monitoramento e ferramentas adequadas.
 *
 * Boas práticas (resumidas):
 * - Liberar (`free`) qualquer memória alocada quando ela não for mais
 *   necessária.
 * - Evitar chamadas repetidas a `setlocale` dentro de funções; configure
 *   o locale uma vez no início do `main` quando necessário.
 * - Checar retorno de `malloc` antes do uso.
 *
 * Instruções rápidas de compilação (MSYS2/GCC):
 *   gcc -std=c11 exemplo05.c -o exemplo05.exe
 *
 * Ferramentas para detectar vazamentos (Windows):
 * - Dr. Memory (https://drmemory.org) ou Visual Studio Diagnostics;
 * - Em WSL/Unix, usar Valgrind: `valgrind --leak-check=full ./exemplo05`
 */

void alocaMemoria() {
    /*
     * NOTA: chamamos `setlocale` aqui apenas para manter semelhança
     * com o exemplo original; em código real prefira configurar o
     * locale no início do programa, em `main`.
     */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Aloca 1000 inteiros no heap. */
    int *dados = (int*)malloc(1000 * sizeof(int));
    if (dados == NULL) {
        fprintf(stderr, "Falha ao alocar memoria\n");
        return;
    }

    /* ... usa dados ... */

    /*
     * VULNERÁVEL: não chamamos `free(dados)` aqui. A memória
     * alocada permanece no heap após a função retornar, causando
     * vazamento quando a função é chamada repetidamente.
     *
     * Mantemos o `free` comentado propositalmente para demonstração:
     */
    // free(dados); // ✅ Descomente para corrigir o vazamento localmente
}

int main() {
    for (int i = 0; i < 1000; i++) {
        alocaMemoria(); // Cada iteração causa um vazamento se `free` estiver comentado
    }
    printf("Programa terminou\n");
    return 0;
}
#include <stdio.h>
#include <locale.h>

/*
 * exemplo11.c
 * Exemplo intencional de "stack overflow" via recursão profunda
 * e grande alocação de variável local na pilha.
 *
 * Propósito: material didático (Aula05 - segurança). Este arquivo
 * mostra um padrão que provoca estouro de pilha (stack overflow).
 * NÃO CORRIGIR a lógica — o objetivo é demonstrar o problema.
 *
 * Observações importantes:
 * - A função `recursaoInfinita` aloca um array grande como variável
 *   local em cada chamada, consumindo rapidamente a memória da pilha.
 * - Em conjunto com um número de chamadas recursivas muito alto,
 *   isso tipicamente provoca o erro de stack overflow em tempo de execução.
 * - Tipos e tamanhos (ex.: tamanho de `int`) variam por plataforma,
 *   mas o padrão apresentado é suficiente para ilustrar o problema.
 */

void recursaoInfinita(int n) {
    /* Mantive a chamada a `setlocale` como no exemplo original. */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
     * Alocação grande na stack: `array` é uma variável local (no stack frame)
     * com 10000 elementos do tipo `int`. Em sistemas típicos (int=4 bytes)
     * isto significa ~40KB por chamada — multiplicado pelo número de chamadas
     * recursivas resulta em consumo elevado da pilha.
     */
    int array[10000]; // Aloca muita memória na stack

    /*
     * Chamada recursiva controlada por `n`. No uso deste exemplo `main`
     * invoca a função com um valor muito alto (100000), portanto a recursão
     * será profunda e provavelmente causará stack overflow antes de terminar.
     */
    if (n > 0) {
        recursaoInfinita(n - 1); // Chamada recursiva sem limite suficiente para este exemplo
    }

    /* Ao retornar de cada chamada, o array local é desalocado automaticamente
     * (por estar na pilha). Porém, se o overflow ocorrer, o programa pode
     * terminar abruptamente antes de alcançar esses retornos.
     */
}

int main() {
    /*
     * Chamada intencionalmente excessiva para demonstrar stack overflow.
     * Não alterar — é parte do exemplo didático.
     */
    recursaoInfinita(100000);
    return 0;
}
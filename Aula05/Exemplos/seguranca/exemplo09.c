#include <stdio.h>
#include <locale.h>

/*
 * exemplo09.c
 * -------------------------
 * Exemplo didático para demonstrar um acesso "out-of-bounds"
 * (fora dos limites) em um array em C. O objetivo deste arquivo
 * é apenas ilustrar o problema — NÃO corrigir o código — pois faz
 * parte de uma coleção de exemplos de segurança/erros comuns.
 *
 * Observações importantes:
 * - O acesso fora dos limites (array[10] quando o array tem 5
 *   elementos) resulta em comportamento indefinido (undefined
 *   behavior). O programa pode imprimir um valor aleatório,
 *   corromper memória, ou até mesmo causar uma falha (crash).
 * - Em diferentes compiladores, arquiteturas e flags de otimização
 *   o comportamento pode variar. Ferramentas como Valgrind/ASAN
 *   ajudam a detectar esses acessos em tempo de execução.
 * - Mantemos o código intencionalmente inseguro aqui para fins
 *   de demonstração e estudo.
 *
 * Compilar (exemplo):
 *   gcc -Wall -Wextra -o exemplo09 exemplo09.c
 *
 * Execução:
 *   ./exemplo09
 */

int main() {
    /* Ajuste de localidade para mensagens em português (opcional) */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
     * Declaramos um array com 5 inteiros indexados de 0 a 4.
     * A intenção aqui é demonstrar tanto acessos válidos quanto
     * um acesso inválido que extrapola o tamanho do array.
     */
    int array[5] = {1, 2, 3, 4, 5};
    
    /* Acessos válidos: índices dentro do intervalo [0, 4] */
    printf("Acesso válido: %d\n", array[0]); /* primeiro elemento */
    printf("Acesso válido: %d\n", array[4]); /* último elemento válido */
    
    /*
     * ❌ Acesso fora dos limites (vulnerabilidade intencional)
     * Este printf tenta acessar `array[10]`. Em C isto é
     * comportamento indefinido — mantemos isso propositalmente
     * para demonstração. NÃO altere para fins do exercício.
     *
     * Possíveis consequências:
     * - Impressão de lixo/valor imprevisível
     * - Corromper dados adjacentes na pilha
     * - Crash do programa
     */
    printf("Acesso inválido: %d\n", array[10]);
    
    return 0;
}
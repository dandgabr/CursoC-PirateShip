/*
 * Aula 01 — Precisão de ponto flutuante (IEEE 754)
 *
 * Objetivo:
 * - Demonstrar a soma de 0.1 e 0.2 usando 'float' e observar efeitos de arredondamento.
 *
 * Conceitos importantes:
 * - 'float' (32 bits) oferece ~7 dígitos decimais de precisão.
 * - 0.1 e 0.2 não são representáveis exatamente em binário; a soma pode resultar em algo como 0.3000000119.
 * - Em printf, argumentos 'float' são promovidos a 'double' (promoção de argumentos padrão).
 * - O especificador '%.10f' imprime 10 casas decimais.
 *
 * Como compilar (GCC):
 * - No VS Code, use a tarefa de build C/C++ para o arquivo ativo.
 * - Ou no terminal: gcc aula01.c -o aula01.exe
 *
 * Como executar:
 * - Windows: .\\aula01.exe (ou caminho absoluto)
 */
#include <stdio.h>

int main()
{
    /* Declara dois valores em ponto flutuante de precisão simples (32 bits).
     * Observação: 0.1 e 0.2 são aproximados em binário (IEEE 754). */
    float a = 0.1;
    float b = 0.2;

    // Soma; devido à representação binária, o resultado pode não ser exatamente 0.3
    a += b;

    // Imprime o valor com 10 casas decimais para evidenciar a diferença de representação
    printf("Valor de a: %.10f\n", a);
}

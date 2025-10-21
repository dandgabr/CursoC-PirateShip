/*
    Programa: Tabela da Tabuada (1 a 9)
    Descrição: Imprime uma tabela de multiplicação de 1×1 até 9×9, bem formatada com cabeçalho e alinhamento em colunas.
    Entrada:   Nenhuma (valores fixos de 1 a 9).
    Saída:     A tabela de multiplicação no console.

    Estratégia:
    - Usar dois laços (linhas e colunas) para gerar os produtos.
    - Imprimir um cabeçalho de colunas (1..9) e um separador visual.
    - Alinhar com largura fixa (%4d), garantindo colunas bem formatadas.

    Observações:
    - Complexidade: O(n^2) com n = 9, custo irrelevante para este tamanho.
    - Pode ser facilmente generalizado alterando os limites MIN e MAX.
*/

#include <stdio.h>
#include <locale.h> // Biblioteca para configuração regional

// Limites da tabuada
#define MIN 1
#define MAX 9

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configuração regional para suportar caracteres acentuados
    // Largura de campo para manter as colunas alinhadas (suporta 1..(MAX*MAX))
    const int W = 4; // usar com especificador de largura em printf (ex: %4d)

    // Título da tabela
    printf("Tabela de multiplicação de %d a %d\n\n", MIN, MAX);

    // Cabeçalho das colunas
    // Espaço inicial para alinhar com a coluna de rótulos de linha
    printf("%*s|", W, "");
    for (int col = MIN; col <= MAX; ++col)
    {
        printf("%*d", W, col);
    }
    printf("\n");

    // Separador visual (linha horizontal)
    // Primeiro bloco (rótulo + barra)
    for (int i = 0; i < W; ++i)
        putchar('-');
    putchar('+');
    // Blocos para cada coluna
    for (int col = MIN; col <= MAX; ++col)
    {
        for (int i = 0; i < W; ++i)
            putchar('-');
    }
    putchar('\n');

    // Linhas da tabela: para cada linha (fator da esquerda)
    for (int lin = MIN; lin <= MAX; ++lin)
    {
        // Rótulo da linha (o fator) seguido da barra vertical
        printf("%*d|", W, lin);

        // Colunas da linha: multiplicar 'lin' por cada 'col'
        for (int col = MIN; col <= MAX; ++col)
        {
            int produto = lin * col; // cálculo do produto
            printf("%*d", W, produto);
        }
        printf("\n");
    }

    // Finalização normal do programa
    return 0;
}
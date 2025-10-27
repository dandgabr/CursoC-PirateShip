/*
 * ============================================================================
 * Arquivo: exemplo09.c
 * Descrição: Demonstração do laço de repetição FOR em C
 * Autor: Curso C - PirateShip
 * Data: 27/10/2025
 * ============================================================================
 */

#include <stdio.h>
#include <locale.h>

/*
 * Função principal que demonstra o uso do laço FOR
 *
 * O laço FOR é composto de três partes:
 * 1. Inicialização: int i = 0 (executada uma vez no início)
 * 2. Condição: i < 10 (verificada antes de cada iteração)
 * 3. Incremento: i++ (executada após cada iteração)
 *
 * Retorna: 0 em caso de sucesso
 */
int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("=== Demonstração do Laço FOR ===\n\n");

    // Exemplo 1: Contagem progressiva
    printf("Exemplo 1 - Contagem de 0 a 9:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Iteração %d\n", i);
    }

    printf("\n");

    // Exemplo 2: Contagem regressiva
    printf("Exemplo 2 - Contagem regressiva de 5 a 1:\n");
    for (int i = 5; i >= 1; i--)
    {
        printf("Contagem: %d\n", i);
    }

    printf("\n");

    // Exemplo 3: Incremento de 2 em 2
    printf("Exemplo 3 - Números pares de 0 a 10:\n");
    for (int i = 0; i <= 10; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n\n");

    // Exemplo 4: Cálculo de soma
    printf("Exemplo 4 - Soma dos números de 1 a 5:\n");
    int soma = 0;
    for (int i = 1; i <= 5; i++)
    {
        soma += i;
        printf("i=%d, soma=%d\n", i, soma);
    }
    printf("Soma total: %d\n", soma);

    printf("\n=== Fim do programa ===\n");

    return 0; // Retorna 0 indicando execução bem-sucedida
}

/*
 * Saída esperada:
 * ================
 * === Demonstração do Laço FOR ===
 *
 * Exemplo 1 - Contagem de 0 a 9:
 * Iteração 0
 * Iteração 1
 * Iteração 2
 * ...
 * Iteração 9
 *
 * Exemplo 2 - Contagem regressiva de 5 a 1:
 * Contagem: 5
 * Contagem: 4
 * ...
 * Contagem: 1
 *
 * Exemplo 3 - Números pares de 0 a 10:
 * 0 2 4 6 8 10
 *
 * Exemplo 4 - Soma dos números de 1 a 5:
 * i=1, soma=1
 * i=2, soma=3
 * i=3, soma=6
 * i=4, soma=10
 * i=5, soma=15
 * Soma total: 15
 *
 * === Fim do programa ===
 */

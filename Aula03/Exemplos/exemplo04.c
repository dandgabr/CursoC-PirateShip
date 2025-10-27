/**
 * Exemplo 04 - Estrutura condicional if simples
 *
 * Este programa demonstra o uso da estrutura condicional if
 * para executar código condicionalmente com base em uma comparação.
 */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Declara e inicializa a variável x com o valor 123
    int x = 123;

    // Verifica se x é menor que 150
    // Se a condição for verdadeira, executa o printf
    if (x < 150)
        printf("O x é menor que 150.\n");

    return 0;
}
#include <stdio.h>
#include <locale.h>

/**
 * Função principal do programa
 * Demonstra o uso dos operadores de deslocamento à esquerda (<<)
 * e à direita (>>) em valores inteiros, exibindo os resultados.
 */

int main(void)
{
    // Configura a localidade para português do Brasil com suporte a UTF-8,
    // permitindo a correta exibição de caracteres acentuados na saída.
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 5; // Inicializa a variável 'a' com valor 5 (binário: 00000101)
    int b = 2; // Inicializa 'b' com valor 2, que será o número de posições de deslocamento

    // Desloca os bits de 'a' para a esquerda em 'b' posições
    // Equivale a multiplicar o valor de 'a' por 2 elevado a 'b' (5 * 2^2 = 20)
    int resultado_esquerda = a << b;

    // Desloca os bits de 'a' para a direita em 'b' posições
    // Equivale a dividir o valor de 'a' por 2 elevado a 'b', descartando o resto (5 / 2^2 = 1)
    int resultado_direita = a >> b;

    // Exibe o valor original de 'a'
    printf("Valor original de a: %d\n", a);

    // Exibe o resultado do deslocamento à esquerda
    printf("Resultado do deslocamento à esquerda (a << %d): %d\n", b, resultado_esquerda);

    // Exibe o resultado do deslocamento à direita
    printf("Resultado do deslocamento à direita (a >> %d): %d\n", b, resultado_direita);

    return 0; // Indica que o programa terminou com sucesso
}
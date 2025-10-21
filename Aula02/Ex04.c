/*
    Programa: Conversão de Fahrenheit para Celsius
    Descrição: Pergunta ao usuário uma temperatura em graus Fahrenheit (°F) e imprime a temperatura equivalente em graus Celsius (°C).
    Entrada:   Um número real (ex.: 32, 98.6) lido da entrada padrão.
    Saída:     Uma linha com a temperatura convertida para °C com duas casas decimais.

    Fórmula utilizada:
        °C = (°F - 32) × 5/9

    Observações:
    - Este programa espera ponto (.) como separador decimal ao digitar números reais.
    - Em caso de entrada inválida (não numérica), uma mensagem de erro é exibida e programa termina com código diferente de zero.
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variável para armazenar a temperatura em Fahrenheit digitada pelo usuário
    double fahrenheit;

    // Solicita o valor de entrada
    printf("Digite a temperatura em °F (use ponto como separador decimal): ");

    // Lê a entrada e valida se um número foi realmente informado
    if (scanf("%lf", &fahrenheit) != 1)
    {
        fprintf(stderr, "Entrada inválida. Digite um número (ex.: 98.6).\n");
        return 1; // encerra com código de erro genérico
    }

    // Aplica a fórmula de conversão: °C = (°F - 32) × 5/9
    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    // Exibe o resultado com duas casas decimais
    printf("Equivalente em °C: %.2f\n", celsius);

    // Encerramento bem-sucedido
    return 0;
}
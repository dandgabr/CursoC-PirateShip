/*
    Programa: Conversor de metros para dm, cm e mm
    Descrição: Pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.
    Entrada:   Número real (float) representando um comprimento em metros.
    Saída:     Três linhas com os valores convertidos: em decímetros, em centímetros e em milímetros, com duas casas decimais.
    Observação: Não há validação específica para valores negativos.
*/

#include <stdio.h>

int main()
{
    // Variável que armazena o valor em metros informado pelo usuário
    float metros;

    // Solicita ao usuário que digite um valor em metros
    printf("Digite um valor em metros: ");

    // Lê o valor digitado (formato float). Ex: 1.75 representa 1 metro e 75 cm
    scanf("%f", &metros);

    // Conversões básicas de unidades de comprimento
    // 1 metro = 10 decímetros
    printf("Valor em decímetros: %.2f dm\n", metros * 10);
    // 1 metro = 100 centímetros
    printf("Valor em centímetros: %.2f cm\n", metros * 100);
    // 1 metro = 1000 milímetros
    printf("Valor em milímetros: %.2f mm\n", metros * 1000);

    // Indica término bem-sucedido do programa
    return 0;
}
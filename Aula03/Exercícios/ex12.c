// Escreva um programa para declarar duas variáveis inteiras, inicializar com valores e depois calcular a soma e a subtração desses valores.Imprima os resultados.
// Amplie o exercício anterior para incluir operações de multiplicação e divisão entre os dois números, mostrando os resultados formatados.

#include <stdio.h>

int main() {
    // Passo 1: Declarar duas variáveis inteiras
    int num1, num2;
    
    // Passo 2: Inicializar as variáveis com valores
    num1 = 15;
    num2 = 7;
    
    // Passo 3: Calcular a soma
    int soma = num1 + num2;
    
    // Passo 4: Calcular a subtração
    int subtracao = num1 - num2;
    
    // Passo 5: Calcular a multiplicação
    int multiplicacao = num1 * num2;
    
    // Passo 6: Calcular a divisão (resultado inteiro)
    int divisao = num1 / num2;
    
    // Passo 7: Calcular a divisão com precisão decimal
    float divisao_decimal = (float)num1 / num2;
    
    // Passo 8: Imprimir os valores iniciais
    printf("Valores iniciais:\n");
    printf("Primeiro número: %d\n", num1);
    printf("Segundo número: %d\n", num2);
    printf("\n");
    
    // Passo 9: Imprimir os resultados das operações
    printf("Resultados das operações:\n");
    printf("Soma: %d + %d = %d\n", num1, num2, soma);
    printf("Subtração: %d - %d = %d\n", num1, num2, subtracao);
    printf("Multiplicação: %d × %d = %d\n", num1, num2, multiplicacao);
    printf("Divisão (inteira): %d ÷ %d = %d\n", num1, num2, divisao);
    printf("Divisão (decimal): %d ÷ %d = %.2f\n", num1, num2, divisao_decimal);
    
    return 0;
}
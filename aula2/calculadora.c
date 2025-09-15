/*
 * calculadora.c
 * Calculadora básica com operações aritméticas
 * Aula 2 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;
    
    printf("🧮 Calculadora Básica - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Entrada dos números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    // Realizando as operações
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    
    printf("\n=== Resultados ===\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, soma);
    printf("%.2f - %.2f = %.2f\n", num1, num2, subtracao);
    printf("%.2f × %.2f = %.2f\n", num1, num2, multiplicacao);
    
    // Verificação para divisão por zero
    if (num2 != 0) {
        divisao = num1 / num2;
        printf("%.2f ÷ %.2f = %.2f\n", num1, num2, divisao);
    } else {
        printf("%.2f ÷ %.2f = Erro! Divisão por zero.\n", num1, num2);
    }
    
    return 0;
}
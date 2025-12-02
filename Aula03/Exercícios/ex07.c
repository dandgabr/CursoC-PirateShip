// Escreva um programa que realize uma divisão usando operandos inteiros, mas obtenha o resultado em ponto flutuante, aplicando o cast para double em um dos operandos.

#include <stdio.h>

int main() {
    // Passo 1: Declarar variáveis inteiras para os operandos
    int dividendo = 10;
    int divisor = 3;
    
    // Passo 2: Declarar variável double para armazenar o resultado
    double resultado;
    
    // Passo 3: Realizar a divisão aplicando cast para double em um dos operandos
    // O cast converte o operando para double, forçando divisão em ponto flutuante
    resultado = (double)dividendo / divisor;
    
    // Passo 4: Exibir o resultado
    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Resultado da divisao: %.2f\n", resultado);
    
    // Passo 5: Demonstrar a diferença sem o cast
    printf("Sem cast (divisao inteira): %d\n", dividendo / divisor);
    
    return 0;
}
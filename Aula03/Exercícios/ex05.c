// Escreva um programa que inicialize dois números inteiros e declare uma terceira variável inteira que será a soma dos dois anteriores.Imprima o resultado.

#include <stdio.h>

int main() {
    // Passo 1: Inicializar dois números inteiros
    int numero1 = 15;
    int numero2 = 25;
    
    // Passo 2: Declarar uma terceira variável inteira para armazenar a soma
    int soma;
    
    // Passo 3: Calcular a soma dos dois números anteriores
    soma = numero1 + numero2;
    
    // Passo 4: Imprimir o resultado
    printf("Primeiro número: %d\n", numero1);
    printf("Segundo número: %d\n", numero2);
    printf("A soma é: %d\n", soma);
    
    return 0;
}
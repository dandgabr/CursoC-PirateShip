// Demonstre a diferença entre operadores de incremento/decremento prefixados e postfixados em um programa que imprime valores antes e depois dessas operações.

#include <stdio.h>

int main() {
    int a = 5, b = 5;
    
    printf("=== OPERADORES DE INCREMENTO ===\n");
    printf("Valor inicial: a = %d, b = %d\n", a, b);
    
    // Demonstrando incremento prefixado (++a)
    printf("\nIncrementο prefixado (++a):\n");
    printf("Antes: a = %d\n", a);
    printf("Durante a operação ++a: %d\n", ++a); // Incrementa ANTES de usar o valor
    printf("Depois: a = %d\n", a);
    
    // Demonstrando incremento postfixado (b++)
    printf("\nIncremento postfixado (b++):\n");
    printf("Antes: b = %d\n", b);
    printf("Durante a operação b++: %d\n", b++); // Usa o valor ANTES de incrementar
    printf("Depois: b = %d\n", b);
    
    // Resetando valores para demonstrar decremento
    a = 10;
    b = 10;
    
    printf("\n=== OPERADORES DE DECREMENTO ===\n");
    printf("Valor inicial: a = %d, b = %d\n", a, b);
    
    // Demonstrando decremento prefixado (--a)
    printf("\nDecremento prefixado (--a):\n");
    printf("Antes: a = %d\n", a);
    printf("Durante a operação --a: %d\n", --a); // Decrementa ANTES de usar o valor
    printf("Depois: a = %d\n", a);
    
    // Demonstrando decremento postfixado (b--)
    printf("\nDecremento postfixado (b--):\n");
    printf("Antes: b = %d\n", b);
    printf("Durante a operação b--: %d\n", b--); // Usa o valor ANTES de decrementar
    printf("Depois: b = %d\n", b);
    
    // Exemplo prático da diferença em expressões
    printf("\n=== EXEMPLO PRÁTICO ===\n");
    int x = 3, y = 3;
    int resultado1, resultado2;
    
    resultado1 = x++ * 2; // x é usado como 3, depois incrementado para 4
    resultado2 = ++y * 2; // y é incrementado para 4, depois usado na multiplicação
    
    printf("x++ * 2 = %d (x agora vale %d)\n", resultado1, x);
    printf("++y * 2 = %d (y agora vale %d)\n", resultado2, y);
    
    return 0;
}
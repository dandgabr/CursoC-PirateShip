/*
 * ponteiros_intro.c
 * Introdução aos ponteiros em C
 * Aula 5 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    printf("👉 Introdução aos Ponteiros - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: Ponteiros básicos
    printf("=== Ponteiros Básicos ===\n");
    int numero = 42;
    int *ptr = &numero;  // ptr aponta para o endereço de numero
    
    printf("Valor da variável numero: %d\n", numero);
    printf("Endereço da variável numero: %p\n", (void*)&numero);
    printf("Valor do ponteiro ptr: %p\n", (void*)ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Endereço do ponteiro ptr: %p\n\n", (void*)&ptr);
    
    // Exemplo 2: Modificando valor através do ponteiro
    printf("=== Modificação via Ponteiro ===\n");
    printf("Valor original: %d\n", numero);
    
    *ptr = 100;  // Modifica o valor de numero através do ponteiro
    printf("Após *ptr = 100: %d\n", numero);
    
    numero = 200;  // Modifica diretamente
    printf("Após numero = 200: %d\n", numero);
    printf("Valor apontado por ptr: %d\n\n", *ptr);
    
    // Exemplo 3: Ponteiros e arrays
    printf("=== Ponteiros e Arrays ===\n");
    int array[] = {10, 20, 30, 40, 50};
    int *array_ptr = array;  // array é equivalente a &array[0]
    
    printf("Elementos do array usando índices:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    printf("\nElementos do array usando ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(array_ptr + %d) = %d\n", i, *(array_ptr + i));
    }
    
    printf("\nNavegando com ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição %d: %d (endereço: %p)\n", 
               i, *array_ptr, (void*)array_ptr);
        array_ptr++;  // Move o ponteiro para o próximo elemento
    }
    
    // Exemplo 4: Ponteiros como parâmetros de função
    printf("\n=== Função com Ponteiros ===\n");
    int a = 10, b = 20;
    
    printf("Antes da troca: a = %d, b = %d\n", a, b);
    
    // Simular troca usando ponteiros (inline para simplicidade)
    int *ptr_a = &a;
    int *ptr_b = &b;
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    
    printf("Após a troca: a = %d, b = %d\n", a, b);
    
    // Exemplo 5: Aritmética de ponteiros
    printf("\n=== Aritmética de Ponteiros ===\n");
    int numeros[] = {100, 200, 300, 400, 500};
    int *p = numeros;
    
    printf("Endereço base: %p\n", (void*)p);
    
    for (int i = 0; i < 5; i++) {
        printf("p + %d = %p, valor = %d\n", 
               i, (void*)(p + i), *(p + i));
    }
    
    // Demonstrando que array[i] == *(array + i)
    printf("\nComprovando array[i] == *(array + i):\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d, *(numeros + %d) = %d\n", 
               i, numeros[i], i, *(numeros + i));
    }
    
    return 0;
}
// Implemente um programa que incremente e imprima uma variável inteira cinco vezes usando tanto um loop for quanto um while.

#include <stdio.h>

int main() {
    // Declarando uma variável inteira que será incrementada
    int numero = 0;
    
    printf("Usando loop FOR:\n");
    
    // Loop FOR: inicializa i=0, condição i<5, incrementa i a cada iteração
    for (int i = 0; i < 5; i++) {
        numero++;  // Incrementa a variável numero
        printf("Iteração %d: numero = %d\n", i + 1, numero);
    }
    
    printf("\nUsando loop WHILE:\n");
    
    // Reinicia a variável para demonstrar o while loop
    numero = 0;
    
    // Inicializa contador para o while
    int contador = 0;
    
    // Loop WHILE: executa enquanto contador for menor que 5
    while (contador < 5) {
        numero++;  // Incrementa a variável numero
        contador++;  // Incrementa o contador para evitar loop infinito
        printf("Iteração %d: numero = %d\n", contador, numero);
    }
    
    return 0;
}
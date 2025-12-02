// Faça um programa que declare uma variável inteira com valor 2 e use a instrução switch para mostrar mensagens diferentes para os valores 1, 2 e 3, e uma mensagem padrão para outros casos.

#include <stdio.h>

int main() {
    // Passo 1: Declarar uma variável inteira com valor 2
    int numero = 2;
    
    // Passo 2: Implementar a estrutura switch para verificar o valor da variável
    switch(numero) {
        // Passo 3: Caso para valor 1
        case 1:
            printf("O valor é 1\n");
            break; // Passo 4: break para evitar execução dos próximos casos
            
        // Passo 5: Caso para valor 2
        case 2:
            printf("O valor é 2\n");
            break; // Passo 6: break para evitar execução dos próximos casos
            
        // Passo 7: Caso para valor 3
        case 3:
            printf("O valor é 3\n");
            break; // Passo 8: break para evitar execução do caso padrão
            
        // Passo 9: Caso padrão para qualquer outro valor
        default:
            printf("O valor não é 1, 2 ou 3\n");
            break; // Passo 10: break opcional no default, mas é boa prática
    }
    
    return 0;
}
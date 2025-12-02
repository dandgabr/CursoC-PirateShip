// Escreva um código que checa se uma variável inteira está entre 50 e 100(exclusivo)usando operadores lógicos e relacionais, e imprime uma mensagem com base no resultado.

#include <stdio.h>

int main() {
    // Passo 1: Declarar a variável inteira
    int numero;
    
    // Passo 2: Solicitar entrada do usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // Passo 3: Verificar se o número está entre 50 e 100 (exclusivo)
    // Exclusivo significa que 50 e 100 não estão incluídos no intervalo
    // Então precisamos verificar se numero > 50 E numero < 100
    if (numero > 50 && numero < 100) {
        // Passo 4: Imprimir mensagem se está no intervalo
        printf("O numero %d esta entre 50 e 100 (exclusivo).\n", numero);
    } else {
        // Passo 5: Imprimir mensagem se não está no intervalo
        printf("O numero %d NAO esta entre 50 e 100 (exclusivo).\n", numero);
    }
    
    return 0;
}
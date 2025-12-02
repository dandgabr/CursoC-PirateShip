// Crie um programa que realize a divisão inteira entre dois números inteiros e imprima o resultado.

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dois números e o resultado
    int num1, num2, resultado;
    
    // Solicita ao usuário o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    // Solicita ao usuário o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // Verifica se o segundo número é diferente de zero (divisão por zero é inválida)
    if (num2 != 0) {
        // Realiza a divisão inteira entre os dois números
        resultado = num1 / num2;
        
        // Imprime o resultado da divisão inteira
        printf("A divisao inteira de %d por %d eh: %d\n", num1, num2, resultado);
    } else {
        // Informa ao usuário que não é possível dividir por zero
        printf("Erro: Nao eh possivel dividir por zero!\n");
    }
    
    return 0;
}
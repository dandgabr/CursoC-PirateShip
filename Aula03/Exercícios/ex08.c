// Desenvolva um programa que verifique se duas variáveis inteiras possuem valores iguais e imprima uma mensagem correspondente.

#include <stdio.h>

int main() {
    // Passo 1: Declarar duas variáveis inteiras
    int num1, num2;
    
    // Passo 2: Solicitar ao usuário que digite o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    // Passo 3: Solicitar ao usuário que digite o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Passo 4: Verificar se os valores são iguais usando estrutura condicional
    if (num1 == num2) {
        // Passo 5: Se forem iguais, imprimir mensagem correspondente
        printf("Os números %d e %d são iguais.\n", num1, num2);
    } else {
        // Passo 6: Se forem diferentes, imprimir mensagem correspondente
        printf("Os números %d e %d são diferentes.\n", num1, num2);
    }
    
    return 0;
}
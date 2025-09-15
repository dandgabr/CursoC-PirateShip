#include <stdio.h> // Biblioteca padrão de entrada e saída em C

int main()
{
    int a = 10, b = 3; // Declaração de duas variáveis inteiras: a=10 e b=3

    // Operações aritméticas básicas
    printf("a + b = %d\n", a + b);  // Soma: 10 + 3 = 13
    printf("a - b = %d\n", a - b);  // Subtração: 10 - 3 = 7
    printf("a * b = %d\n", a * b);  // Multiplicação: 10 * 3 = 30
    printf("a / b = %d\n", a / b);  // Divisão inteira: 10 / 3 = 3 (descarta os decimais)
    printf("a %% b = %d\n", a % b); // Módulo (resto da divisão): 10 % 3 = 1
    // Obs: "%%" é usado porque "%" sozinho é interpretado como especificador de formato.

    // Operadores de incremento e decremento
    a++; // Incrementa a em 1 -> a agora é 11
    printf("a++ -> %d\n", a);

    b--; // Decrementa b em 1 -> b agora é 2
    printf("b-- -> %d\n", b);

    return 0; // Retorno bem-sucedido do programa
}

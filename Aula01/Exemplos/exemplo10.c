#include <stdio.h>

int main()
{
    int a = 6; // 0110 em binário
    int b = 3; // 0011 em binário

    // AND bit a bit (&) -> retorna 1 apenas quando ambos os bits são 1
    printf("a & b = %d\n", a & b); // 0110 & 0011 = 0010 (2)

    // OR bit a bit (|) -> retorna 1 se pelo menos um dos bits for 1
    printf("a | b = %d\n", a | b); // 0110 | 0011 = 0111 (7)

    // XOR bit a bit (^) -> retorna 1 se os bits comparados forem diferentes
    printf("a ^ b = %d\n", a ^ b); // 0110 ^ 0011 = 0101 (5)

    // NOT bit a bit (~) -> inverte todos os bits de 'a'
    // em complemento de dois: ~6 = -7
    printf("~a = %d\n", ~a);

    // Shift à esquerda (<<) -> desloca os bits, preenchendo com 0 à direita
    printf("a << 1 = %d\n", a << 1); // 0110 << 1 = 1100 (12)

    // Shift à direita (>>) -> desloca os bits para a direita
    printf("a >> 1 = %d\n", a >> 1); // 0110 >> 1 = 0011 (3)

    return 0;
}
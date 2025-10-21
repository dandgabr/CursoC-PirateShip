/* Faça um programa que inverta o valor de 2 números*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a = 5;
    int b = 3;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Depois da troca: a = %d, b = %d\n", a, b);
}
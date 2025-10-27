#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 30;
    double d = x / y;                // Conversão implícita, mas ambos int: resultado 0.0
    printf("O resultado é %f\n", d); // Saída: O resultado é 0.000000
}
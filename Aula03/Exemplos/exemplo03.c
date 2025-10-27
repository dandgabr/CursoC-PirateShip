#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 30;
    double d = (double)x / y;        // Com cast, resultado será 0.333333
    printf("O resultado é %f\n", d); // Saída: O resultado é 0.333333
}
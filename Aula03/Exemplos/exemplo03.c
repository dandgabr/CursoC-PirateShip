#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int x = 10;
    int y = 30;
    double d = (double)x / y;          // Com cast, resultado será 0.333333
    printf("O resultado é %.2f\n", d); // Saída: O resultado é 0.333333
}
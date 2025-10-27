#include <stdio.h>
int main(void)
{
    char c = 'A';
    int x = (int)c;                  // Conversão explícita
    printf("O resultado é %d\n", x); // Saída: O resultado é 65
}
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char c = 'A';
    int x = (int)c;                  // Conversão explícita
    printf("O resultado é %d\n", x); // Saída: O resultado é 65
}
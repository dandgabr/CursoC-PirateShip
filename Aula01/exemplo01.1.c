#include <stdio.h>
#include <locale.h> // Biblioteca para configuração regional

#define PI 3.14159

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configuração regional para suportar caracteres acentuados
    printf("Olá, Mundo!\n");
    printf("Valor de PI: %.5f\n", PI);
    return 0;
};
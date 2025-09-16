#include <stdio.h>

#include <locale.h>

int imprimir(int *valor)
{
    printf("Endereço de var impresso de forma correta: %p\n", (void *)&valor);
    printf("Valor: %d\n", *valor);
    return *valor;
}

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 10;
    printf("Endereço de var impresso de forma correta: %p\n", (void *)&a);
    imprimir(&a);
    return 0;
}
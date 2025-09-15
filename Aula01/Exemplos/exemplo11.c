#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 5;

    printf("Valor inicial de a: %d\n", a);

    printf("Pré-incremento (++a): %d\n", ++a); // incrementa antes de usar (6)
    printf("Após pré-incremento, a = %d\n", a);

    printf("Pós-incremento (a++): %d\n", a++); // usa o valor (6) e incrementa depois
    printf("Após pós-incremento, a = %d\n", a);

    printf("Pré-decremento (--a): %d\n", --a); // decrementa antes de usar (6)
    printf("Após pré-decremento, a = %d\n", a);

    printf("Pós-decremento (a--): %d\n", a--); // usa o valor (6) e decrementa depois
    printf("Após pós-decremento, a = %d\n", a);

    return 0;
}
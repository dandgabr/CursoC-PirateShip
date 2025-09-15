#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 20;

    printf("Valor inicial: %d\n", a);

    a += 5; // equivalente a: a = a + 5
    printf("Após a += 5: %d\n", a);

    a -= 2; // equivalente a: a = a - 2
    printf("Após a -= 2: %d\n", a);

    a *= 3; // equivalente a: a = a * 3
    printf("Após a *= 3: %d\n", a);

    a /= 4; // equivalente a: a = a / 4
    printf("Após a /= 4: %d\n", a);

    a %= 3; // equivalente a: a = a % 3
    printf("Após a %%= 3: %d\n", a);

    return 0;
}
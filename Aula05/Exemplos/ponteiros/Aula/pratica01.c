#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero = 25;
    printf("Número: %d\n", numero);
    printf("Endereço de memória de numero: %p\n", (void*)&numero);
    return 0;
}
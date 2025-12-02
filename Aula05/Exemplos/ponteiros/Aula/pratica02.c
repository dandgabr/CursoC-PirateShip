#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int vetor[5] = {10, 20, 30, 40, 50};
    int *ptr = vetor;
    printf("Endereço inicial: %p\n", (void*)ptr);
    ptr++; // Avança para o próximo inteiro
    printf("Endereço após incremento: %p\n", (void*)ptr);
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero;
    printf("Valor inicial de numero (lixo de memória): %d\n", numero);
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Você digitou: %d\n", numero);
    numero = numero + 10;
    printf("Número após adicionar 10: %d\n", numero);
    return 0;
}

/*
 * aula02.c
 * Exemplo de uso de ponteiros em C
 * Demonstra como imprimir o endereço e valor de uma variável usando ponteiros
 * Autor: [Seu Nome]
 * Data: 21/10/2025
 */

#include <stdio.h>
#include <locale.h>

/*
 * Função: imprimir
 * ----------------
 * Recebe um ponteiro para inteiro e imprime o endereço e o valor apontado.
 *
 * valor: ponteiro para inteiro
 *
 * retorna: o valor inteiro apontado
 */
int imprimir(int *valor)
{
    // Imprime o endereço do ponteiro recebido
    printf("Endereço de var impresso de forma correta: %p\n", (void *)&valor);
    // Imprime o valor apontado pelo ponteiro
    printf("Valor: %d\n", *valor);
    return *valor;
}

/*
 * Função principal
 * Inicializa uma variável inteira, imprime seu endereço e valor usando ponteiro
 */
int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura a localização para português do Brasil
    int a = 10;                       // Declaração e inicialização da variável
    // Imprime o endereço da variável 'a'
    printf("Endereço de var impresso de forma correta: %p\n", (void *)&a);
    // Chama a função imprimir passando o endereço de 'a'
    imprimir(&a);
    return 0;
}
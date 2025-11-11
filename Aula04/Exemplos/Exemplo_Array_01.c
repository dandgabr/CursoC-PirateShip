/*
 * Exemplo_Array_01.c
 *
 * Demonstração de:
 *  - declaração e acesso a arrays em C
 */

#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* ------------------ Exemplo de array ------------------ */
    /* declaração e inicialização de um array de inteiros */
    int notas[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Exemplo: declaração de array e acesso aos elementos\n\n");

    /* acessar elementos individualmente */
    printf("nota[0] = %d\n", notas[0]);
    printf("nota[2] = %d\n\n", notas[2]);

    /* percorrer o array com um laço */
    printf("Percorrendo o array com for:\n");
    for (i = 0; i < 5; i++)
    {
        /* mostrar o índice, o valor e o endereço do elemento */
        printf("notas[%d] = %d (endereço: %p)\n", i, notas[i], (void *)&notas[i]);
    }

    printf("\nModificando um elemento: notas[2] = 99\n");
    notas[2] = 99; /* atribuição direta */
    printf("notas[2] agora = %d\n\n", notas[2]);

    /* demonstrar acesso via ponteiro (equivalente a &notas[0]) */
    int *p = notas;
    printf("Usando ponteiro: *(p+3) = %d (mesmo que notas[3])\n", *(p + 3));

    return 0;
}

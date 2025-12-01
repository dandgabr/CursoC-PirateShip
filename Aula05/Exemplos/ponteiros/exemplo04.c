#include <stdio.h>
#include <locale.h>

/*
 * exemplo04.c
 * Exemplo simples mostrando o uso de arrays e aritmética de ponteiros em C.
 * Comentários e explicações em português para fins didáticos.
 */

int main() {
    /* Ajusta localidade para permitir formatação/saída em português (se suportado). */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
     * Declaração de um array estático de 5 inteiros.
     * Os elementos são inicializados em sequência de 1 a 5.
     */
    int vetor[5] = {1, 2, 3, 4, 5};

    /*
     * Ponteiro para inteiro que recebe o endereço do primeiro elemento do array.
     * Em C, o nome do array (`vetor`) decai para o endereço do seu primeiro elemento.
     */
    int *ptr = vetor;

    /*
     * Percorre os elementos do array usando aritmética de ponteiros.
     * A expressão `*(ptr + i)` é equivalente a `vetor[i]`.
     * Este loop demonstra que podemos acessar elementos do array via ponteiro.
     */
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, *(ptr + i));
    }

    /* Retorna 0 para indicar que o programa terminou com sucesso. */
    return 0;
}
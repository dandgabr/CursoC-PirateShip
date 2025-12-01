/*
 * Demonstração: passagem por valor vs passagem por referência (ponteiros) em C.
 *
 * O programa cria uma variável inteira `a`, imprime seu endereço e valor,
 * chama duas funções para tentar incrementá-la — uma recebe o valor por cópia
 * e a outra recebe o endereço (ponteiro) para modificar o valor original.
 *
 * Objetivos / aprendizado:
 * - Mostrar que, ao passar por valor, a função recebe uma cópia e alterações
 *   não afetam a variável original.
 * - Mostrar que, ao passar um ponteiro (endereço), a função pode modificar
 *   o conteúdo do endereço e assim alterar a variável no chamador.
 *
 * Compilação (exemplo):
 *   gcc exemplo03.c -o exemplo03.exe
 */

#include <stdio.h>
#include <stdint.h>
#include <locale.h>

/**
 * separador - imprime um título cercado por linhas separadoras para
 * tornar a saída do programa mais legível.
 *
 * @titulo: string com o título a exibir.
 */
static void separador(const char *titulo) {
    /* O formato usa \n no início para garantir separação entre blocos. */
    printf("\n===== %s =====\n", titulo);
}

/**
 * incrementar_por_valor - demonstra passagem por valor (cópia)
 *
 * Recebe um inteiro por valor. A função mostra o endereço da variável local
 * (a cópia no stack) e incrementa essa cópia. Como é uma cópia, a variável
 * original no chamador não é alterada.
 *
 * @x: valor recebido (cópia do argumento passado pelo chamador).
 */
void incrementar_por_valor(int x) {
    separador("incrementar_por_valor (início)");

    /*
     * (void*)&x  -> endereço da variável local 'x' (que é uma cópia).
     * x          -> valor atual da cópia.
     *
     * Observação: o endereço de 'x' exibido aqui é o endereço da cópia, não
     * o endereço da variável original no escopo de 'main'. Em chamadas
     * recursivas ou entre funções, cada parâmetro por valor ocupa sua própria
     * posição na pilha (stack).
     */
    printf("endereço do parâmetro (x) = %p, valor = %d\n", (void*)&x, x);

    /* Incrementa apenas a cópia local */
    x++;

    /* Mostra que o endereço permaneceu o mesmo (é a mesma cópia local),
     * e o valor agora está incrementado apenas nesta função. */
    printf("endereço do parâmetro (x) = %p, depois valor = %d\n", (void*)&x, x);
    separador("incrementar_por_valor (fim)");
}

/**
 * incrementar_por_ponteiro - demonstra passagem por referência via ponteiro
 *
 * Recebe um ponteiro para inteiro e incrementa o valor armazenado no
 * endereço apontado. Diferente da passagem por valor, aqui modificamos
 * diretamente o dado no chamador.
 *
 * @p: ponteiro para um inteiro que será incrementado.
 */
void incrementar_por_ponteiro(int *p) {
    separador("incrementar_por_ponteiro (início)");

    /*
     * &p -> endereço da variável local que guarda o ponteiro (ou seja, o
     *      endereço onde o ponteiro está armazenado na pilha).
     * p  -> o próprio ponteiro: o endereço da variável original (por ex. &a).
     * *p -> valor armazenado no endereço apontado (o conteúdo de 'a').
     */
    printf("endereço do parâmetro ponteiro (&p) = %p\n", (void*)&p);
    printf("ponteiro p (endereço do dado) = %p, *p = %d\n", (void*)p, *p);

    /*
     * Aqui desreferenciamos o ponteiro e incrementamos o valor no endereço.
     * Como atuamos no local indicado por 'p', a variável original no chamador
     * será alterada.
     */
    (*p)++;

    /* Após o incremento, mostramos que o endereço armazenado em 'p' é o
     * mesmo, mas o conteúdo apontado (*p) foi alterado. */
    printf("ponteiro p (endereço do dado) = %p, depois *p = %d\n", (void*)p, *p);
    separador("incrementar_por_ponteiro (fim)");
}

/**
 * main - função principal do programa
 *
 * Cria uma variável `a`, imprime seu endereço e valor, chama as duas funções
 * de incremento (por valor e por ponteiro) e exibe o resultado após cada
 * chamada para evidenciar a diferença de comportamento.
 */
int main(void) {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 10; /* variável que será usada para demonstrar os dois casos */

    separador("main (início)");

    /*
     * Para imprimir endereços usamos o especificador %p; a conversão correta
     * é fazer o cast para (void*). Isso evita avisos do compilador e garante
     * portabilidade entre plataformas.
     */
    printf("endereço de a = %p, a = %d\n", (void*)&a, a);

    /* Chamando a função que recebe por valor: a não será alterada */
    printf("\nChamando incrementar_por_valor(a)\n");
    incrementar_por_valor(a);

    /* Exibe o estado de 'a' após a chamada; deve permanecer igual a 10 */
    printf("\n[main] após incrementar_por_valor: endereço de a = %p, a = %d\n", (void*)&a, a);

    /* Chamando a função que recebe um ponteiro: a será alterada */
    printf("\nChamando incrementar_por_ponteiro(&a)\n");
    incrementar_por_ponteiro(&a);

    /* Agora 'a' foi incrementado pela função acima */
    printf("\n[main] após incrementar_por_ponteiro: endereço de a = %p, a = %d\n", (void*)&a, a);

    separador("main (fim)");

    return 0;
}

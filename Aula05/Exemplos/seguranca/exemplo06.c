#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * exemplo06.c
 * Versão corrigida do exemplo de vazamento de memória.
 *
 * Nesta implementação:
 * - O `locale` é configurado uma vez no `main`.
 * - A função `alocaMemoriaCorrigida` aloca memória, a utiliza e
 *   libera (`free`) antes de retornar — eliminando o vazamento.
 * - Também mostramos como checar o retorno de `malloc`.
 *
 * Instruções de compilação (MSYS2/GCC):
 *   gcc -std=c11 exemplo06.c -o exemplo06.exe
 *
 */

void alocaMemoriaCorrigida(void) {
    /* Aloca 1000 inteiros no heap */
    int *dados = malloc(1000 * sizeof *dados);
    if (dados == NULL) {
        fprintf(stderr, "Falha ao alocar memoria\n");
        return;
    }

    /* Simula uso dos dados */
    for (int i = 0; i < 1000; ++i) {
        dados[i] = i;
    }

    /* Importante: libera a memória quando não é mais necessária */
    free(dados);
}

int main(void) {
    /* Configura o locale uma única vez (se necessário) */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    for (int i = 0; i < 1000; ++i) {
        alocaMemoriaCorrigida(); // Sem vazamento — memória é liberada dentro da função
    }

    printf("Programa (corrigido) terminou\n");
    return 0;
}

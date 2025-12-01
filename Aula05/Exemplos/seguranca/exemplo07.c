#include <stdio.h>
/* Biblioteca de E/S padrão. Neste exemplo não é usada, mas costuma estar presente. */
#include <stdlib.h>
/* Fornece malloc/free. */
#include <locale.h>
/* Usada para setlocale. */

int main() {
    /* Define a localidade para pt_BR.UTF-8 (não relacionada à vulnerabilidade). */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Aloca memória para um int.
     * Observação: não há verificação de retorno de malloc (pode ser NULL em falha). */
    int *ptr = (int*)malloc(sizeof(int));

    /* Usa o ponteiro sem verificar se é NULL — potencial NULL dereference em OOM. */
    *ptr = 100;

    /* Libera a memória alocada. Após esta chamada `ptr` fica pendente (dangling). */
    free(ptr);

    /* Segunda liberação do mesmo ponteiro => double free.
     * Isso pode corromper estruturas internas do gerenciador de heap e levar a
     * comportamentos indefinidos, crashes ou vulnerabilidades exploráveis. */
    free(ptr); // ❌ VULNERÁVEL: double free

    return 0;
}
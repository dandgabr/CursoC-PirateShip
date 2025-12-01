/* exemplo08.c
 * Versão corrigida de exemplo07.c mostrando boas práticas:
 * - Verifica retorno de malloc
 * - Evita double-free atribuindo NULL após free
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    /* Define localidade (apenas ilustrativo). */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Aloca memória para um int e verifica sucesso. */
    int *ptr = malloc(sizeof *ptr);
    if (ptr == NULL) {
        fprintf(stderr, "Erro de alocação\n");
        return 1;
    }

    *ptr = 100; /* Uso válido: ptr aponta para memória alocada */

    free(ptr);  /* Libera a memória */
    ptr = NULL; /* Evita dangling pointer e double-free acidental */

    /* Um dangling pointer (ponteiro pendente) é um ponteiro que continua 
    a referenciar um local de memória que não é mais válido ou que foi 
    explicitamente desalocado. Isso significa que o endereço de memória 
    armazenado no ponteiro já não pertence mais ao programa, levando a 
    comportamentos indefinidos e potenciais falhas de segurança ou erros 
    de segmentação (segmentation faults). 
    */

    /* Chamadas subsequentes a free(ptr) são seguras quando ptr == NULL */
    return 0;
}

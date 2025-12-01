/**
 * @file exemplo09.c
 * @brief Exemplo 09 - Demonstração de conceitos básicos da linguagem C
 * @author Curso C - PirateShip
 * @date Aula 05
 * 
 * Este arquivo contém um exemplo prático da Aula 05 do curso de C.
 * Inclui a biblioteca padrão de entrada/saída (stdio.h) para utilização
 * de funções como printf() e scanf().
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int tamanho;
    int *array;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // Solicita o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    
    // Aloca memória dinamicamente
    array = (int*)malloc(tamanho * sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (array == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    
    // Preenche o array
    printf("Digite %d numeros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    // Exibe o array
    printf("\nArray digitado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    // Libera a memória alocada
    free(array);
    
    return 0;
}
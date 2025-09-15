/*
 * loops.c
 * Demonstração de estruturas de repetição
 * Aula 3 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    printf("🔄 Estruturas de Repetição - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: for loop
    printf("=== Loop FOR - Contagem ===\n");
    printf("Contando de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Exemplo 2: while loop
    printf("=== Loop WHILE - Tabuada ===\n");
    int numero, contador;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);
    
    contador = 1;
    printf("Tabuada do %d:\n", numero);
    while (contador <= 10) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    }
    printf("\n");
    
    // Exemplo 3: do-while loop
    printf("=== Loop DO-WHILE - Menu ===\n");
    int opcao;
    do {
        printf("\n--- Menu ---\n");
        printf("1 - Dizer Olá\n");
        printf("2 - Mostrar Data\n");
        printf("3 - Contar até 5\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Olá, pirata! 🏴‍☠️\n");
                break;
            case 2:
                printf("Hoje é um ótimo dia para aprender C!\n");
                break;
            case 3:
                printf("Contando: ");
                for (int i = 1; i <= 5; i++) {
                    printf("%d... ", i);
                }
                printf("Terminado! 🎉\n");
                break;
            case 0:
                printf("Até logo! ⚓\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
    
    // Exemplo 4: Loops aninhados
    printf("\n=== Loops Aninhados - Padrão ===\n");
    printf("Desenhando um triângulo:\n");
    for (int linha = 1; linha <= 5; linha++) {
        for (int estrela = 1; estrela <= linha; estrela++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Exemplo 5: break e continue
    printf("\n=== Break e Continue ===\n");
    printf("Números de 1 a 20, pulando múltiplos de 3:\n");
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            continue; // Pula para a próxima iteração
        }
        printf("%d ", i);
        
        if (i > 15) {
            printf("\nParando aqui com break!\n");
            break; // Sai do loop
        }
    }
    
    return 0;
}
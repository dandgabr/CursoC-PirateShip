// Crie um loop infinito usando while(1) e saia dele com break quando uma condição específica (como entrada do usuário) for satisfeita.

#include <stdio.h>

int main() {
    int numero;
    
    printf("Loop infinito - Digite 0 para sair\n");
    
    // Criando um loop infinito com while(1)
    while(1) {
        // Solicita entrada do usuário
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
        
        // Verifica a condição específica para sair do loop
        if(numero == 0) {
            printf("Saindo do loop...\n");
            break; // Sai do loop infinito quando condição é satisfeita
        }
        
        // Processa o número digitado
        printf("Você digitou: %d\n", numero);
        printf("Continuando no loop...\n\n");
    }
    
    printf("Programa encerrado!\n");
    return 0;
}
// Demonstre o uso de break e continue em loops para controlar o fluxo da repetição, com exemplos claros que mostram quando cada um será acionado.

#include <stdio.h>

int main() {
    printf("=== DEMONSTRAÇÃO DE BREAK E CONTINUE ===\n\n");
    
    // Exemplo 1: Usando BREAK para sair do loop
    printf("1. Exemplo com BREAK:\n");
    printf("Procurando número 7 em uma sequência de 1 a 10:\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("Verificando número %d\n", i);
        
        // Quando encontrar o número 7, sai do loop
        if (i == 7) {
            printf("Número 7 encontrado! Saindo do loop...\n");
            break; // Interrompe completamente o loop
        }
    }
    printf("Loop finalizado com BREAK\n\n");
    
    // Exemplo 2: Usando CONTINUE para pular iterações
    printf("2. Exemplo com CONTINUE:\n");
    printf("Exibindo apenas números ímpares de 1 a 10:\n");
    
    for (int i = 1; i <= 10; i++) {
        // Se o número for par, pula para a próxima iteração
        if (i % 2 == 0) {
            printf("Número %d é par - pulando...\n", i);
            continue; // Pula o restante do código e vai para próxima iteração
        }
        
        // Este código só executa para números ímpares
        printf("Número ímpar encontrado: %d\n", i);
    }
    printf("Loop finalizado com CONTINUE\n\n");
    
    // Exemplo 3: Combinando BREAK e CONTINUE
    printf("3. Exemplo combinando BREAK e CONTINUE:\n");
    printf("Processando números de 1 a 15:\n");
    printf("- Pula números múltiplos de 3\n");
    printf("- Para quando encontrar número maior que 12\n\n");
    
    for (int i = 1; i <= 15; i++) {
        // Para se encontrar número maior que 12
        if (i > 12) {
            printf("Número %d é maior que 12 - parando o loop\n", i);
            break;
        }
        
        // Pula múltiplos de 3
        if (i % 3 == 0) {
            printf("Número %d é múltiplo de 3 - pulando\n", i);
            continue;
        }
        
        // Processa apenas números que não são múltiplos de 3 e <= 12
        printf("Processando número: %d\n", i);
    }
    
    printf("\n=== RESUMO ===\n");
    printf("BREAK: Sai completamente do loop\n");
    printf("CONTINUE: Pula para a próxima iteração do loop\n");
    
    return 0;
}
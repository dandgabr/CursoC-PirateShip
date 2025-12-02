// Implemente um menu básico usando um switch que permite escolher operações aritméticas entre dois números e imprimir o resultado.

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os números e a operação escolhida
    float num1, num2, resultado;
    int opcao;
    
    // Entrada dos dois números que serão usados nas operações
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    // Exibição do menu de operações disponíveis
    printf("\n=== MENU DE OPERAÇÕES ===\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha uma operação (1-4): ");
    scanf("%d", &opcao);
    
    // Estrutura switch para executar a operação escolhida
    switch(opcao) {
        case 1:
            // Caso 1: Adição dos dois números
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 2:
            // Caso 2: Subtração do segundo número do primeiro
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 3:
            // Caso 3: Multiplicação dos dois números
            resultado = num1 * num2;
            printf("%.2f × %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 4:
            // Caso 4: Divisão do primeiro pelo segundo número
            // Verificação para evitar divisão por zero
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f ÷ %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
            
        default:
            // Caso padrão: opção inválida
            printf("Opção inválida! Escolha uma opção entre 1 e 4.\n");
            break;
    }
    
    return 0;
}
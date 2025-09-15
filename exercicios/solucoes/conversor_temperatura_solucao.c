/*
 * conversor_temperatura_solucao.c
 * SOLUÇÃO: Conversor de temperatura
 * 
 * Esta é uma solução completa do exercício conversor_temperatura.c
 * Use como referência para verificar sua implementação
 * 
 * Aula 2 - CursoC-PirateShip 🏴‍☠️
 */

#include <stdio.h>

int main() {
    float temperatura, resultado;
    int opcao;
    
    printf("🌡️ Conversor de Temperatura - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exibir menu de opções
    printf("=== Menu de Conversão ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    
    // Ler opção do usuário
    scanf("%d", &opcao);
    
    // Processar cada opção
    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9.0/5.0) + 32;
            printf("%.2f°C = %.2f°F\n", temperatura, resultado);
            break;
            
        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5.0/9.0;
            printf("%.2f°F = %.2f°C\n", temperatura, resultado);
            break;
            
        case 3:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = temperatura + 273.15;
            printf("%.2f°C = %.2fK\n", temperatura, resultado);
            break;
            
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            
            // Validação: Kelvin não pode ser negativo
            if (temperatura < 0) {
                printf("Erro: Temperatura em Kelvin não pode ser negativa!\n");
                return 1;
            }
            
            resultado = temperatura - 273.15;
            printf("%.2fK = %.2f°C\n", temperatura, resultado);
            break;
            
        default:
            printf("Opção inválida! Escolha entre 1 e 4.\n");
            return 1;
    }
    
    // Informações adicionais
    printf("\n💡 Pontos de referência:\n");
    printf("   • Água congela: 0°C = 32°F = 273.15K\n");
    printf("   • Água ferve: 100°C = 212°F = 373.15K\n");
    printf("   • Zero absoluto: -273.15°C = -459.67°F = 0K\n");
    
    return 0;
}

/*
 * CONCEITOS DEMONSTRADOS:
 * 
 * 1. Uso de switch/case para menu
 * 2. Cálculos com números decimais
 * 3. Validação de entrada
 * 4. Formatação de saída com printf
 * 5. Constantes matemáticas nas conversões
 * 
 * FÓRMULAS UTILIZADAS:
 * • C para F: F = (C × 9/5) + 32
 * • F para C: C = (F - 32) × 5/9  
 * • C para K: K = C + 273.15
 * • K para C: C = K - 273.15
 * 
 * MELHORIAS POSSÍVEIS:
 * • Adicionar mais escalas (Rankine, Réaumur)
 * • Implementar validação mais robusta
 * • Criar funções separadas para cada conversão
 * • Adicionar loop para múltiplas conversões
 */
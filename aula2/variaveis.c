/*
 * variaveis.c
 * Demonstração de declaração e uso de variáveis
 * Aula 2 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    // Declaração de variáveis de diferentes tipos
    int idade;
    float altura;
    char inicial;
    double salario;
    
    // Inicialização de algumas variáveis
    int numero = 42;
    float pi = 3.14159;
    char letra = 'C';
    
    printf("=== Demonstração de Variáveis ===\n\n");
    
    // Exibindo valores inicializados
    printf("Número: %d\n", numero);
    printf("Pi: %.5f\n", pi);
    printf("Letra: %c\n", letra);
    
    // Solicitando entrada do usuário
    printf("\n--- Entrada de Dados ---\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial); // Espaço antes de %c para ignorar whitespace
    
    printf("Digite seu salário: ");
    scanf("%lf", &salario);
    
    // Exibindo os dados inseridos
    printf("\n--- Resumo dos Dados ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);
    printf("Salário: R$ %.2lf\n", salario);
    
    return 0;
}
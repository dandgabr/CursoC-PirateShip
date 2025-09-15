/*
 * condicionais.c
 * Demonstração de estruturas condicionais
 * Aula 3 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    printf("🔀 Estruturas Condicionais - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: if/else simples
    int idade;
    printf("=== Verificação de Idade ===\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade! 🎉\n");
    } else {
        printf("Você é menor de idade! 👶\n");
    }
    
    // Exemplo 2: if/else aninhado
    printf("\n=== Classificação de Idade ===\n");
    if (idade < 13) {
        printf("Classificação: Criança\n");
    } else if (idade < 18) {
        printf("Classificação: Adolescente\n");
    } else if (idade < 60) {
        printf("Classificação: Adulto\n");
    } else {
        printf("Classificação: Idoso\n");
    }
    
    // Exemplo 3: switch/case
    int opcao;
    printf("\n=== Menu de Operações ===\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Você escolheu: Adição ➕\n");
            break;
        case 2:
            printf("Você escolheu: Subtração ➖\n");
            break;
        case 3:
            printf("Você escolheu: Multiplicação ✖️\n");
            break;
        case 4:
            printf("Você escolheu: Divisão ➗\n");
            break;
        default:
            printf("Opção inválida! ❌\n");
            break;
    }
    
    // Exemplo 4: Operadores lógicos
    int nota1, nota2;
    printf("\n=== Verificação de Aprovação ===\n");
    printf("Digite a primeira nota (0-100): ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota (0-100): ");
    scanf("%d", &nota2);
    
    float media = (nota1 + nota2) / 2.0;
    printf("Média: %.1f\n", media);
    
    if (media >= 70 && nota1 >= 50 && nota2 >= 50) {
        printf("Resultado: APROVADO! 🎓\n");
    } else if (media >= 50) {
        printf("Resultado: RECUPERAÇÃO 📚\n");
    } else {
        printf("Resultado: REPROVADO ❌\n");
    }
    
    return 0;
}
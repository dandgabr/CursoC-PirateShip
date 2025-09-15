/*
 * arrays_basicos.c
 * Demonstração de arrays e operações básicas
 * Aula 5 - CursoC-PirateShip
 */

#include <stdio.h>
#include <string.h>

int main() {
    printf("📊 Arrays em C - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: Array de inteiros
    printf("=== Array de Inteiros ===\n");
    int numeros[5] = {10, 20, 30, 40, 50};
    
    printf("Elementos do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }
    
    // Calculando a soma e média
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }
    float media = soma / 5.0;
    printf("Soma: %d, Média: %.2f\n\n", soma, media);
    
    // Exemplo 2: Array de notas com entrada do usuário
    printf("=== Cadastro de Notas ===\n");
    float notas[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    printf("\nNotas cadastradas:\n");
    float soma_notas = 0;
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
        soma_notas += notas[i];
    }
    
    float media_notas = soma_notas / 3.0;
    printf("Média das notas: %.2f\n", media_notas);
    
    if (media_notas >= 7.0) {
        printf("Status: APROVADO! 🎉\n\n");
    } else {
        printf("Status: Recuperação 📚\n\n");
    }
    
    // Exemplo 3: Strings (arrays de caracteres)
    printf("=== Trabalhando com Strings ===\n");
    char nome[50];
    char curso[] = "CursoC-PirateShip";
    
    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê apenas até o primeiro espaço
    
    printf("Olá, %s!\n", nome);
    printf("Bem-vindo ao %s!\n", curso);
    printf("Tamanho do nome: %lu caracteres\n", strlen(nome));
    printf("Tamanho do curso: %lu caracteres\n\n", strlen(curso));
    
    // Exemplo 4: Busca em array
    printf("=== Busca em Array ===\n");
    int valores[] = {5, 12, 8, 3, 15, 7, 20};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int buscar;
    
    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    printf("Digite um número para buscar: ");
    scanf("%d", &buscar);
    
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (valores[i] == buscar) {
            printf("Número %d encontrado na posição %d! ✅\n", buscar, i);
            encontrado = 1;
            break;
        }
    }
    
    if (!encontrado) {
        printf("Número %d não encontrado! ❌\n", buscar);
    }
    
    return 0;
}
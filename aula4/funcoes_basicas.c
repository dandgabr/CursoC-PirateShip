/*
 * funcoes_basicas.c
 * Demonstração de criação e uso de funções
 * Aula 4 - CursoC-PirateShip
 */

#include <stdio.h>

// Protótipos das funções
void saudar(void);
int somar(int a, int b);
float calcular_media(float nota1, float nota2, float nota3);
int maior_numero(int a, int b);
void imprimir_linha(char caractere, int tamanho);

int main() {
    printf("⚙️ Funções em C - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: Função sem parâmetros e sem retorno
    saudar();
    
    imprimir_linha('=', 40);
    
    // Exemplo 2: Função com parâmetros e com retorno
    int num1 = 15, num2 = 25;
    int resultado = somar(num1, num2);
    printf("Soma de %d + %d = %d\n", num1, num2, resultado);
    
    imprimir_linha('-', 40);
    
    // Exemplo 3: Função com múltiplos parâmetros
    float n1, n2, n3;
    printf("Digite três notas para calcular a média:\n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    
    float media = calcular_media(n1, n2, n3);
    printf("Média das notas: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Situação: APROVADO! 🎉\n");
    } else {
        printf("Situação: Precisa estudar mais! 📚\n");
    }
    
    imprimir_linha('-', 40);
    
    // Exemplo 4: Comparação usando função
    int x, y;
    printf("Digite dois números para comparar:\n");
    printf("Primeiro número: ");
    scanf("%d", &x);
    printf("Segundo número: ");
    scanf("%d", &y);
    
    int maior = maior_numero(x, y);
    printf("O maior número entre %d e %d é: %d\n", x, y, maior);
    
    imprimir_linha('=', 40);
    
    return 0;
}

// Implementação das funções

void saudar(void) {
    printf("Olá! Bem-vindo ao mundo das funções em C! 👋\n");
    printf("Funções tornam o código mais organizado e reutilizável.\n");
}

int somar(int a, int b) {
    return a + b;
}

float calcular_media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int maior_numero(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    // Alternativa mais concisa: return (a > b) ? a : b;
}

void imprimir_linha(char caractere, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%c", caractere);
    }
    printf("\n");
}
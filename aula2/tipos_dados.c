/*
 * tipos_dados.c
 * Demonstração dos tipos de dados em C e seus tamanhos
 * Aula 2 - CursoC-PirateShip
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("📊 Tipos de Dados em C - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Demonstração de tipos inteiros
    printf("=== Tipos Inteiros ===\n");
    int inteiro = 2024;
    short curto = 100;
    long longo = 1000000L;
    
    printf("int: %d (tamanho: %zu bytes)\n", inteiro, sizeof(int));
    printf("short: %d (tamanho: %zu bytes)\n", curto, sizeof(short));
    printf("long: %ld (tamanho: %zu bytes)\n", longo, sizeof(long));
    
    printf("Faixa do int: %d a %d\n", INT_MIN, INT_MAX);
    
    // Demonstração de tipos decimais
    printf("\n=== Tipos Decimais ===\n");
    float decimal = 3.14159f;
    double precisao_dupla = 3.141592653589793;
    
    printf("float: %.5f (tamanho: %zu bytes)\n", decimal, sizeof(float));
    printf("double: %.15lf (tamanho: %zu bytes)\n", precisao_dupla, sizeof(double));
    printf("Precisão do float: %d dígitos\n", FLT_DIG);
    printf("Precisão do double: %d dígitos\n", DBL_DIG);
    
    // Demonstração de caracteres
    printf("\n=== Tipos de Caractere ===\n");
    char letra = 'C';
    char codigo_ascii = 65; // Corresponde a 'A'
    
    printf("char: %c (tamanho: %zu byte)\n", letra, sizeof(char));
    printf("Código ASCII: %c = %d\n", letra, letra);
    printf("Código ASCII: %c = %d\n", codigo_ascii, codigo_ascii);
    
    // Demonstração de operações
    printf("\n=== Operações Básicas ===\n");
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (divisão inteira)\n", a / b);
    printf("a %% b = %d (resto da divisão)\n", a % b);
    printf("a / (float)b = %.2f (divisão real)\n", a / (float)b);
    
    return 0;
}
// Escreva um programa que use múltiplos if - else aninhados para avaliar notas escolares e imprimir conceitos diferentes, por exemplo, "Aprovado", "Recuperação" e "Reprovado".

#include <stdio.h>

int main() {
    float nota;
    
    // Solicita a nota do aluno
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);
    
    // Verifica se a nota está no intervalo válido
    if (nota < 0 || nota > 10) {
        printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
    }
    // Avalia as notas usando múltiplos if-else aninhados
    else {
        if (nota >= 7.0) {
            printf("Conceito: Aprovado\n");
        }
        else {
            if (nota >= 5.0) {
                printf("Conceito: Recuperação\n");
            }
            else {
                printf("Conceito: Reprovado\n");
            }
        }
    }
    
    return 0;
}
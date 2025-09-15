/*
 * estruturas.c
 * Demonstração de estruturas (struct) em C
 * Aula 6 - CursoC-PirateShip
 */

#include <stdio.h>
#include <string.h>

// Definição de estruturas
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    char cidade[30];
};

typedef struct {
    char marca[20];
    char modelo[30];
    int ano;
    float preco;
} Carro;

typedef struct {
    char nome[50];
    float notas[4];
    float media;
} Aluno;

int main() {
    printf("🏗️ Estruturas em C - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: Estrutura básica
    printf("=== Estrutura Pessoa ===\n");
    struct Pessoa pessoa1;
    
    // Preenchendo os dados
    strcpy(pessoa1.nome, "João Silva");
    pessoa1.idade = 28;
    pessoa1.altura = 1.78;
    strcpy(pessoa1.cidade, "São Paulo");
    
    // Exibindo os dados
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f m\n", pessoa1.altura);
    printf("Cidade: %s\n\n", pessoa1.cidade);
    
    // Exemplo 2: Inicialização direta com typedef
    printf("=== Estrutura Carro (typedef) ===\n");
    Carro carro1 = {"Toyota", "Corolla", 2020, 85000.50};
    
    printf("Carro: %s %s\n", carro1.marca, carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    printf("Preço: R$ %.2f\n\n", carro1.preco);
    
    // Exemplo 3: Array de estruturas
    printf("=== Sistema de Alunos ===\n");
    Aluno turma[3];
    
    // Cadastrando alunos
    for (int i = 0; i < 3; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%s", turma[i].nome);
        
        float soma = 0;
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
            soma += turma[i].notas[j];
        }
        
        turma[i].media = soma / 4.0;
        printf("\n");
    }
    
    // Exibindo relatório
    printf("=== Relatório da Turma ===\n");
    printf("%-15s %-6s %-6s %-6s %-6s %-6s %-10s\n", 
           "Nome", "Nota1", "Nota2", "Nota3", "Nota4", "Média", "Situação");
    printf("--------------------------------------------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%-15s ", turma[i].nome);
        for (int j = 0; j < 4; j++) {
            printf("%-6.1f ", turma[i].notas[j]);
        }
        printf("%-6.2f ", turma[i].media);
        
        if (turma[i].media >= 7.0) {
            printf("%-10s\n", "APROVADO");
        } else if (turma[i].media >= 5.0) {
            printf("%-10s\n", "RECUPERAÇÃO");
        } else {
            printf("%-10s\n", "REPROVADO");
        }
    }
    
    // Exemplo 4: Ponteiros para estruturas
    printf("\n=== Ponteiros para Estruturas ===\n");
    struct Pessoa pessoa2 = {"Maria Santos", 32, 1.65, "Rio de Janeiro"};
    struct Pessoa *ptr_pessoa = &pessoa2;
    
    // Acesso via ponteiro usando ->
    printf("Via ponteiro:\n");
    printf("Nome: %s\n", ptr_pessoa->nome);
    printf("Idade: %d anos\n", ptr_pessoa->idade);
    printf("Altura: %.2f m\n", ptr_pessoa->altura);
    printf("Cidade: %s\n", ptr_pessoa->cidade);
    
    // Modificando via ponteiro
    ptr_pessoa->idade = 33;
    strcpy(ptr_pessoa->cidade, "Brasília");
    
    printf("\nApós modificação:\n");
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d anos\n", pessoa2.idade);
    printf("Cidade: %s\n", pessoa2.cidade);
    
    return 0;
}
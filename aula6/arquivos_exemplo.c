/*
 * arquivos_exemplo.c
 * Demonstração de operações com arquivos em C
 * Aula 6 - CursoC-PirateShip
 */

#include <stdio.h>
#include <string.h>

int main() {
    printf("📁 Arquivos em C - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // Exemplo 1: Escrevendo em arquivo
    printf("=== Escrevendo em Arquivo ===\n");
    FILE *arquivo_escrita = fopen("dados.txt", "w");
    
    if (arquivo_escrita == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }
    
    fprintf(arquivo_escrita, "CursoC-PirateShip 🏴‍☠️\n");
    fprintf(arquivo_escrita, "Aprendendo arquivos em C\n");
    fprintf(arquivo_escrita, "Linha 3 do arquivo\n");
    fprintf(arquivo_escrita, "Número: %d\n", 42);
    fprintf(arquivo_escrita, "Decimal: %.2f\n", 3.14159);
    
    fclose(arquivo_escrita);
    printf("Arquivo 'dados.txt' criado com sucesso!\n\n");
    
    // Exemplo 2: Lendo arquivo
    printf("=== Lendo Arquivo ===\n");
    FILE *arquivo_leitura = fopen("dados.txt", "r");
    
    if (arquivo_leitura == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }
    
    char linha[100];
    int numero_linha = 1;
    
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo_leitura) != NULL) {
        printf("%d: %s", numero_linha, linha);
        numero_linha++;
    }
    
    fclose(arquivo_leitura);
    printf("\n");
    
    // Exemplo 3: Adicionando ao arquivo
    printf("=== Adicionando ao Arquivo ===\n");
    FILE *arquivo_append = fopen("dados.txt", "a");
    
    if (arquivo_append == NULL) {
        printf("Erro ao abrir arquivo para anexar!\n");
        return 1;
    }
    
    fprintf(arquivo_append, "--- Dados adicionados ---\n");
    fprintf(arquivo_append, "Nova linha\n");
    
    fclose(arquivo_append);
    printf("Dados adicionados ao arquivo!\n\n");
    
    // Exemplo 4: Lendo novamente para ver as alterações
    printf("=== Conteúdo Final do Arquivo ===\n");
    arquivo_leitura = fopen("dados.txt", "r");
    
    if (arquivo_leitura == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    
    numero_linha = 1;
    while (fgets(linha, sizeof(linha), arquivo_leitura) != NULL) {
        printf("%d: %s", numero_linha, linha);
        numero_linha++;
    }
    
    fclose(arquivo_leitura);
    
    // Exemplo 5: Salvando dados estruturados
    printf("\n=== Salvando Dados de Pessoas ===\n");
    FILE *arquivo_pessoas = fopen("pessoas.csv", "w");
    
    if (arquivo_pessoas == NULL) {
        printf("Erro ao criar arquivo de pessoas!\n");
        return 1;
    }
    
    // Cabeçalho CSV
    fprintf(arquivo_pessoas, "Nome,Idade,Altura,Cidade\n");
    
    // Dados de exemplo
    fprintf(arquivo_pessoas, "João Silva,28,1.78,São Paulo\n");
    fprintf(arquivo_pessoas, "Maria Santos,32,1.65,Rio de Janeiro\n");
    fprintf(arquivo_pessoas, "Carlos Oliveira,45,1.82,Belo Horizonte\n");
    
    fclose(arquivo_pessoas);
    printf("Arquivo 'pessoas.csv' criado!\n\n");
    
    // Exemplo 6: Lendo dados estruturados
    printf("=== Lendo Dados CSV ===\n");
    FILE *arquivo_csv = fopen("pessoas.csv", "r");
    
    if (arquivo_csv == NULL) {
        printf("Erro ao abrir arquivo CSV!\n");
        return 1;
    }
    
    char nome[50], cidade[50];
    int idade;
    float altura;
    
    // Pular cabeçalho
    fgets(linha, sizeof(linha), arquivo_csv);
    printf("Dados das pessoas:\n");
    
    while (fscanf(arquivo_csv, "%49[^,],%d,%f,%49[^\n]\n", 
                  nome, &idade, &altura, cidade) == 4) {
        printf("Nome: %-20s Idade: %2d Altura: %.2f Cidade: %s\n", 
               nome, idade, altura, cidade);
    }
    
    fclose(arquivo_csv);
    
    printf("\n📊 Operações com arquivos concluídas!\n");
    printf("Arquivos criados: dados.txt, pessoas.csv\n");
    
    return 0;
}
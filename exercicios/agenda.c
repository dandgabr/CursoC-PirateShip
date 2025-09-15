/*
 * agenda.c
 * PROJETO FINAL: Sistema de Agenda de Contatos
 * 
 * OBJETIVO:
 * Criar um sistema completo de agenda usando todos os conceitos aprendidos
 * 
 * FUNCIONALIDADES:
 * 1. Adicionar contato
 * 2. Listar todos os contatos
 * 3. Buscar contato por nome
 * 4. Remover contato
 * 5. Salvar em arquivo
 * 6. Carregar de arquivo
 * 
 * ESTRUTURA DO CONTATO:
 * - Nome (máximo 50 caracteres)
 * - Telefone (máximo 15 caracteres) 
 * - Email (máximo 50 caracteres)
 * 
 * INSTRUÇÕES:
 * 1. Defina a estrutura Contato
 * 2. Crie um array de contatos (máximo 100)
 * 3. Implemente as funções necessárias
 * 4. Crie um menu principal
 * 
 * Este exercício combina:
 * - Estruturas (struct)
 * - Arrays
 * - Funções
 * - Controle de fluxo
 * - Arquivos
 * 
 * Aulas 4-6 - CursoC-PirateShip 🏴‍☠️
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// COMPLETE AQUI: Defina a estrutura Contato
typedef struct {
    // nome, telefone, email
} Contato;

// COMPLETE AQUI: Variáveis globais
#define MAX_CONTATOS 100
// Contato agenda[MAX_CONTATOS];
// int total_contatos = 0;

// COMPLETE AQUI: Protótipos das funções
// void adicionar_contato();
// void listar_contatos();
// void buscar_contato();
// void remover_contato();
// void salvar_arquivo();
// void carregar_arquivo();
// void mostrar_menu();

int main() {
    printf("📞 Agenda de Contatos - CursoC-PirateShip 🏴‍☠️\n\n");
    
    // COMPLETE AQUI: Carregue os contatos do arquivo
    
    int opcao;
    
    do {
        // COMPLETE AQUI: Mostre o menu e leia a opção
        
        switch (opcao) {
            case 1:
                // adicionar_contato();
                break;
            case 2:
                // listar_contatos();
                break;
            case 3:
                // buscar_contato();
                break;
            case 4:
                // remover_contato();
                break;
            case 5:
                // salvar_arquivo();
                break;
            case 0:
                printf("Até logo! 👋\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}

// COMPLETE AQUI: Implemente todas as funções

/*
 * DICAS PARA IMPLEMENTAÇÃO:
 * 
 * void adicionar_contato() {
 *     if (total_contatos >= MAX_CONTATOS) {
 *         printf("Agenda cheia!\n");
 *         return;
 *     }
 *     
 *     printf("Nome: ");
 *     fgets(agenda[total_contatos].nome, 50, stdin);
 *     // remover \n do final
 *     agenda[total_contatos].nome[strcspn(agenda[total_contatos].nome, "\n")] = 0;
 *     
 *     // Continue para telefone e email...
 *     
 *     total_contatos++;
 *     printf("Contato adicionado com sucesso!\n");
 * }
 * 
 * Para arquivo:
 * FILE *arquivo = fopen("agenda.txt", "w");
 * for (int i = 0; i < total_contatos; i++) {
 *     fprintf(arquivo, "%s;%s;%s\n", 
 *             agenda[i].nome, agenda[i].telefone, agenda[i].email);
 * }
 * fclose(arquivo);
 */
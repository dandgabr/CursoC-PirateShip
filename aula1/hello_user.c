/*
 * hello_user.c
 * Programa interativo que solicita o nome do usuário
 * Aula 1 - CursoC-PirateShip
 */

#include <stdio.h>

int main() {
    char nome[50]; // Array para armazenar o nome (até 49 caracteres + \0)
    
    // Solicita o nome do usuário
    printf("Qual é o seu nome? ");
    
    // Lê o nome do usuário (scanf com %s lê até encontrar espaço)
    scanf("%s", nome);
    
    // Saúda o usuário
    printf("Olá, %s! Bem-vindo ao CursoC-PirateShip! 🏴‍☠️\n", nome);
    
    return 0;
}
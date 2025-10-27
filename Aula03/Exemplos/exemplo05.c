/*
 * Exemplo 05 — if/else básico
 * Objetivo: demonstrar o uso de uma estrutura condicional simples em C.
 * Entrada: nenhuma (o valor de x é definido no código).
 * Saída: mensagem indicando se x é menor que 150.
 * Data: 27/10/2025
 */

#include <stdio.h> // Biblioteca padrão para printf
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Declara e inicializa a variável de teste
    int x = 200;

    // Se x for menor que 150, imprime a primeira mensagem; caso contrário, a segunda
    if (x < 150)
        printf("O x é menor que 150.\n");
    else
        printf("O x não é menor que 150.\n");

    // Retorno convencional de sucesso para o sistema operacional
    return 0;
}
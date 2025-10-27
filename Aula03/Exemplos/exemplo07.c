/*
 * Exemplo 07 — Laço while em C
 *
 * Objetivo: Exibir uma mensagem 5 vezes utilizando um laço while.
 * Localização/região: pt_BR com UTF-8 para suportar acentuação.
 *
 * Entradas: nenhuma.
 * Saídas: imprime a mensagem no console 5 vezes.
 */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    // Define a localização para Português do Brasil em UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int contador = 0; // contador de iterações
    while (contador < 5)
    {
        contador++;
        printf("Execução %d de 5: Olá, mundo a partir de um laço while.\n", contador);
    }

    // Retorno nulo (sucesso) do programa
    return 0;
}
// Saída esperada: A mensagem será exibida 5 vezes
/*
 * Programa: Demonstração de Variáveis e Entrada de Dados
 * Descrição: Este programa demonstra o conceito de variáveis não inicializadas,
 *            entrada de dados do usuário usando scanf, e operações básicas com variáveis.
 * Autor: Curso C - PirateShip
 * Data: Aula 03
 */

#include <stdio.h>  // Biblioteca para funções de entrada/saída (printf, scanf)
#include <locale.h> // Biblioteca para configuração regional (acentuação)

int main(void)
{
    // Configura o locale para português brasileiro, permitindo acentuação correta
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declaração de variável inteira sem inicialização
    // IMPORTANTE: Variável não inicializada contém "lixo de memória"
    int numero;

    // Mostra o valor não inicializado (lixo de memória)
    // Este valor é imprevisível e pode ser qualquer número que estava na memória
    printf("Valor inicial de numero (lixo de memória): %d\n", numero);

    // Solicita ao usuário que digite um número
    printf("Digite um número inteiro: ");

    // Lê um número inteiro digitado pelo usuário
    // O operador & (endereço de) é necessário para scanf modificar a variável
    scanf("%d", &numero);

    // Exibe o valor digitado pelo usuário
    printf("Você digitou: %d\n", numero);

    // Realiza uma operação aritmética: adiciona 10 ao número
    numero = numero + 10;

    // Exibe o resultado da operação
    printf("Número após adicionar 10: %d\n", numero);

    // Retorna 0 indicando execução bem-sucedida
    return 0;
}
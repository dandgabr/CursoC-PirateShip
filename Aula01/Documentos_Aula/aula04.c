// Inclusão das bibliotecas necessárias
#include <stdio.h>   // Funções de entrada e saída padrão (printf, scanf)
#include <locale.h>  // Suporte para localização e caracteres especiais
#include <stdbool.h> // Tipo de dados booleano (bool, true, false)

int main(void)
{
    // Configura a localização para português brasileiro com UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variável booleana para armazenar o status de presença do aluno
    bool estar_na_aula = false;

    // Variável para capturar a resposta do usuário
    // Variável para capturar a resposta do usuário
    int resposta;

    // Exibe mensagem e opções para o usuário
    printf("O aluno está na aula?\n");
    printf("0 - Não\n");
    0 printf("1 - Sim\n");

    // Lê a resposta do usuário
    scanf("%d", &resposta);

    // Estrutura condicional para atualizar o valor da variável booleana
    if (resposta == 1)
    {
        estar_na_aula = true; // Se resposta for 1, o aluno está na aula
    }
    else
    {
        estar_na_aula = false; // Caso contrário, o aluno não está na aula
    }

    // Exibe o resultado usando operador ternário para formatar a mensagem
    // Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso
    printf("O aluno está na aula? %s\n", estar_na_aula ? "Sim" : "Não");
}
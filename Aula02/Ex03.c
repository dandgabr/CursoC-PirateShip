/*
    Programa: Conversão de base (decimal → hexadecimal e octal)
    Descrição: Lê do usuário um número inteiro em base decimal e imprime o valor equivalente em hexadecimal e em octal.
    Entrada:   Um número inteiro (ex.: 42, -15). Lido a partir da entrada padrão.
    Saída:     Duas linhas com as representações: hexadecimal e octal.

    Observações:
    - %x imprime em hexadecimal com letras minúsculas; %X usa maiúsculas.
    - %o imprime em base octal.
    - Para evitar entrada inválida, checamos o retorno de scanf.
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configuração regional para suportar caracteres acentuados
    // Variável para armazenar o número inteiro informado em base decimal
    int n;

    // Solicita ao usuário o número em base 10 (decimal)
    printf("Digite um número inteiro em decimal: ");

    // Lê o inteiro. scanf retorna a quantidade de itens lidos com sucesso.
    if (scanf("%d", &n) != 1)
    {
        // Se o usuário não digitar um inteiro válido, informamos e encerramos.
        printf("Entrada inválida. Certifique-se de digitar um inteiro.\n");
        return 1; // código de erro genérico
    }

    // Impressão em hexadecimal (minúsculo e maiúsculo) e em octal.
    // Você pode escolher uma das formas; aqui mostramos as duas variantes de hexa.
    printf("Hexadecimal (minúsculo): %x\n", n);
    printf("Hexadecimal (maiúsculo): %X\n", n);
    printf("Octal: %o\n", n);

    // Encerramento bem-sucedido
    return 0;
}
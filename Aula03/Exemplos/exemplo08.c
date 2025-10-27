#include <stdio.h>
#include <locale.h>

int main(void)
{
    // Configura a localização para português do Brasil (UTF-8)
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Inicializa o contador
    int contador = 0;

    // Laço do-while: executa o bloco ANTES de verificar a condição
    // Garante que o código seja executado pelo menos uma vez
    do
    {
        printf("Olá Mundo do laço do-while! (Execução #%d)\n", contador + 1);
        contador++;
    } while (contador < 5); // Continua enquanto contador for menor que 5

    // Mensagem final
    printf("\nLaço finalizado! Total de execuções: %d\n", contador);

    return 0; // Indica que o programa foi executado com sucesso
}

/*
 * Saída esperada:
 * Olá Mundo do laço do-while! (Execução #1)
 * Olá Mundo do laço do-while! (Execução #2)
 * Olá Mundo do laço do-while! (Execução #3)
 * Olá Mundo do laço do-while! (Execução #4)
 * Olá Mundo do laço do-while! (Execução #5)
 *
 * Laço finalizado! Total de execuções: 5
 *
 * Nota: O laço do-while é útil quando você precisa garantir que
 *       o código seja executado pelo menos uma vez, como em menus
 *       ou validações de entrada do usuário.
 */

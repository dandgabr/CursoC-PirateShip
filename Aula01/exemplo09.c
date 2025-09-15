#include <stdio.h>  // Biblioteca padrão para entrada e saída (printf)
#include <locale.h> // Biblioteca para configurar localização (acentos, símbolos, etc.)

int main()
{
    // Define a localização para português-Brasil, UTF-8 (permite acentuação correta no console)
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declaração e inicialização de duas variáveis inteiras
    int a = 5, b = 10;

    // Verifica se 'a' e 'b' são maiores que zero (ambos positivos)
    // Operador lógico && (E, AND): só é verdadeiro se as duas condições forem verdadeiras
    if (a > 0 && b > 0)
    {
        printf("a e b são positivos (&&)\n");
    }

    // Verifica se 'a' é maior que zero OU se 'b' é menor que zero
    // Operador lógico || (OU, OR): é verdadeiro se pelo menos uma condição for verdadeira
    if (a > 0 || b < 0)
    {
        printf("Pelo menos uma condição é verdadeira (||)\n");
    }

    // Verifica se NÃO (a == b), ou seja, se 'a' não é igual a 'b'
    // Operador lógico ! (NOT): inverte o resultado lógico da condição
    if (!(a == b))
    {
        printf("a não é igual a b (!)\n");
    }

    // Retorno 0 indica que o programa terminou corretamente
    return 0;
}

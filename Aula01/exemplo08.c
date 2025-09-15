#include <stdio.h>
#include <stdbool.h> // Inclui o suporte a booleanos
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    bool ligado = true;     // Declaração de variável booleana com valor true
    bool desligado = false; // Declaração com valor false

    if (ligado)
    {
        printf("O sistema está ligado.\n");
    }
    else
    {
        printf("O sistema está desligado.\n");
    }

    // Exemplo de uso em expressão condicional
    bool resultado = (5 > 3); // resultado será true, pois 5 é maior que 3
    printf("5 > 3 ? %s\n", resultado ? "true" : "false");

    return 0;
}
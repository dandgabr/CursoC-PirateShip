
#include <stdio.h>
#include <locale.h>

int main(void)
{
    // Define a localização para Português do Brasil em UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int contador = 0; // contador de iterações
    while (true)
    {
        contador++;
        printf("Execução %d de 5: Olá, mundo a partir de um laço while.\n", contador);
        if (contador > 20)
            break;
    }

    return 0;
}
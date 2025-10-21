/*
    Programa: Operações com dois números reais
    Descrição: Lê dois números e calcula:
      a) A soma dos números
      b) O produto do primeiro número pelo quadrado do segundo (a × b²)
      c) O quadrado do primeiro número (a²)
      d) A raiz quadrada da soma dos quadrados (sqrt(a² + b²))
      e) O seno da diferença do primeiro número pelo segundo (sin(a − b))
      f) O módulo (valor absoluto) do primeiro número (|a|)

    Entrada:   Dois números reais (ex.: 3.5 e -2).
    Saída:     Cada resultado em sua própria linha, com formatação amigável.

    Notas:
    - O seno é calculado assumindo que a diferença (a − b) está em radianos.
      Se os valores representarem graus, converta para radianos antes: rad = graus × π/180.
    - Este programa tenta ajustar o locale para pt-BR para exibir acentuação corretamente.
      Em alguns consoles do Windows, pode ser necessário usar UTF-8 no terminal.
*/

#include <stdio.h>  // printf, scanf
#include <locale.h> // setlocale
#include <math.h>   // sqrt, sin, fabs

// Tenta configurar o locale para pt-BR, com algumas alternativas comuns no Windows
static void configurar_locale_ptbr(void)
{
    const char *candidatos[] = {
        "pt_BR.UTF-8",            // comum em sistemas com UTF-8
        "pt_BR.utf8",             // variante
        "Portuguese_Brazil.1252", // Windows-ANSI
        "pt_BR",                  // fallback genérico
        NULL};

    for (int i = 0; candidatos[i] != NULL; ++i)
    {
        if (setlocale(LC_ALL, candidatos[i]) != NULL)
            return; // sucesso
    }
    // Se nada funcionar, seguimos com o locale padrão do sistema.
}

int main(void)
{
    configurar_locale_ptbr(); // Habilita acentuação/formatos conforme disponível

    // Declaração das variáveis de entrada
    double a, b;

    // Coleta dos valores do usuário
    printf("Digite o primeiro número: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Entrada inválida para o primeiro número.\n");
        return 1;
    }

    printf("Digite o segundo número: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Entrada inválida para o segundo número.\n");
        return 1;
    }

    // Cálculos solicitados
    double soma = a + b;                              // a)
    double produto_a_b2 = a * b * b;                  // b) a × (b²)
    double quadrado_a = a * a;                        // c) a²
    double raiz_soma_quadrados = sqrt(a * a + b * b); // d) sqrt(a² + b²)
    double seno_diferenca = sin(a - b);               // e) sin(a - b) [radianos]
    double modulo_a = fabs(a);                        // f) |a|

    // Saída formatada
    printf("a) Soma: %.6f\n", soma);
    printf("b) Produto do 1º pelo quadrado do 2º: %.6f\n", produto_a_b2);
    printf("c) Quadrado do 1º número: %.6f\n", quadrado_a);
    printf("d) Raiz da soma dos quadrados: %.6f\n", raiz_soma_quadrados);
    printf("e) Seno da diferença (a - b): %.6f\n", seno_diferenca);
    printf("f) Módulo do 1º número: %.6f\n", modulo_a);

    // Encerramento bem-sucedido
    return 0;
}
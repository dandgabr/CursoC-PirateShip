#include <stdio.h>  // Biblioteca padrão de entrada e saída (printf, etc.)
#include <limits.h> // Define limites de tipos numéricos (UCHAR_MAX, INT_MAX, etc.)
#include <locale.h> // Permite configurar a localização (idioma/formatação regional)

int main()
{
    // Define a localização para português do Brasil com suporte a UTF-8
    // Isso pode influenciar formatações de saída, como acentuação ou símbolos
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declarando um unsigned char (sem sinal), valor mínimo é sempre 0
    unsigned char uchar_min = 0;

    // Declarando o valor máximo possível de um unsigned char
    // UCHAR_MAX é definido em <limits.h>, geralmente 255 (8 bits sem sinal)
    unsigned char uchar_max = UCHAR_MAX;

    // Imprime o valor mínimo do tipo unsigned char em formato decimal
    printf("Tamanho mínimo de um char sem sinal: %u\n", uchar_min);

    // Imprime o valor máximo do tipo unsigned char em formato decimal
    printf("Tamanho máximo de um char sem sinal: %u\n", uchar_max);

    // Imprime o valor máximo em formato octal (%#o adiciona prefixo '0')
    printf("Em octal: %#o\n", uchar_max);

    // Imprime o valor máximo em formato hexadecimal (%#x adiciona prefixo '0x')
    printf("Em hexadecimal: %#x\n", uchar_max);
}
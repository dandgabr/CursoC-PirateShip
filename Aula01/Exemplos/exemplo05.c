#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída (necessária para usar printf)
#include <locale.h> // Inclui a biblioteca responsável por configurações de localização (idioma, formatação, etc.)

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Configura a localização do programa para "português do Brasil" com codificação UTF-8.
    // Isso pode influenciar mensagens, acentuação e formatações de número/data.

    int var = 0x0A1B2C3D4;
    // Declara uma variável inteira "var" e a inicializa com um valor hexadecimal (0x indica base 16).
    // Obs: esse literal é maior que 32 bits e pode gerar warning ou truncamento dependendo do compilador
    // porque o tipo "int" geralmente tem apenas 32 bits.

    printf("Valor de var: %X\n", var);
    // Imprime o valor da variável "var" em formato hexadecimal (letras maiúsculas).

    printf("Endereço de var impresso como inteiro: %X\n", &var);
    // Imprime o endereço de memória da variável "var" em formato hexadecimal.

    printf("Endereço de var impresso de forma correta: %p\n", (void *)&var);
    // Imprime o endereço de memória da variável "var" de forma segura e portátil.

    /*
    Nota:

    O especificador de formato %p em C é o único correto para imprimir endereços de memória (ponteiros). Ele espera um argumento do tipo void*, por isso o cast explícito para (void*) é recomendado para garantir a conformidade com o padrão C.

    O formato %X é usado para imprimir números inteiros em hexadecimal, não ponteiros. Usar %X para ponteiros pode funcionar em sistemas de 32 bits por coincidência, mas causa comportamento indefinido, imprecisão ou erros em sistemas de 64 bits, pois o tamanho do ponteiro pode ser maior que o de um inteiro.

    Ao usar %p, a implementação do compilador cuida da representação apropriada do endereço, incluindo o tamanho e formato corretos (geralmente em hexadecimal com prefixo típico).

    Usar %X para imprimir endereços causa perda de dados em 64 bits (pois truncará para 32 bits) e pode imprimir valores errados ou ilegíveis, tornando o código não portátil e inseguro.
    */

    return 0;
    // Retorna 0 indicando que o programa terminou sua execução com sucesso.
};

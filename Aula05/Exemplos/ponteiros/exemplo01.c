/**
 * exemplo01.c
 * Exemplo simples de uso de ponteiros em C.
 *
 * Objetivos:
 * - Demonstrar configuração de locale (para formatos e mensagens locais).
 * - Declarar uma variável inteira e um ponteiro para essa variável.
 * - Acessar o valor através do ponteiro usando o operador de desreferência `*`.
 *
 * Como compilar:
 * - No Windows (MinGW/MSYS2):
 *   `gcc -o exemplo01.exe exemplo01.c`
 * - Em sistemas Unix-like:
 *   `gcc -o exemplo01 exemplo01.c`
 *
 * Como executar:
 * - Windows: `exemplo01.exe`
 * - Unix-like: `./exemplo01`
 *
 * Observações:
 * - A chamada `setlocale` é usada aqui para demonstrar a configuração
 *   de localidade; programas mais complexos podem checar o retorno da função
 *   para garantir que a localidade foi aplicada corretamente.
 */

#include <stdio.h>
#include <locale.h>

int main(void) {
     /* Configura a localidade para português do Brasil. Isso afeta
         formatação de datas, números e mensagens locais.
         Retorno de setlocale pode ser checado (NULL = falha). */
     setlocale(LC_ALL, "pt_BR.UTF-8");

     /* Declaração de uma variável inteira simples. */
     int valor = 10;

     /* Declaração de um ponteiro para inteiro e atribuição do endereço
         da variável `valor` ao ponteiro `ptr`. O ponteiro armazena o
         endereço de memória onde `valor` está guardado. */
     int *ptr = &valor; /* ptr aponta para o endereço de `valor` */

     /* Para obter o valor armazenado no endereço apontado por `ptr`,
         usamos o operador de desreferência `*`. Aqui imprimimos esse valor. */
     printf("Valor: %d\n", *ptr);

     return 0; /* Indica término bem-sucedido do programa. */
}
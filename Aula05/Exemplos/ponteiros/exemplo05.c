/*
 * exemplo05.c
 * Exemplo simples de uso de ponteiro genérico (`void *`) e conversão (cast)
 * para o tipo correto antes da desreferenciação.
 *
 * Objetivo:
 * - Mostrar como armazenar o endereço de uma variável em um ponteiro genérico
 *   e acessar o valor através de cast para o tipo apropriado.
 *
 * Compilação (Windows, MinGW/MSYS2):
 *   gcc exemplo05.c -o exemplo05.exe
 * Execução:
 *   ./exemplo05.exe
 *
 * Observações:
 * - `void *` é um ponteiro sem tipo associado; não pode ser desreferenciado
 *   diretamente. É necessário convertê-lo (cast) para o tipo alvo antes de usar
 *   `*` para obter o valor.
 * - `setlocale` aqui demonstra ajuste de locale para PT-BR; não é essencial
 *   para a lógica do ponteiro, mas facilita exibição correta em alguns
 *   ambientes com mensagens localizadas.
 */

#include <stdio.h>
#include <locale.h>

int main() {
    /* Ajusta o locale para português do Brasil (ex.: acentuação) */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num = 42;        /* variável inteira com valor de exemplo */

    /*
     * Ponteiro genérico (void *). Pode receber o endereço de qualquer tipo,
     * mas não permite desreferenciação direta porque não há informação de
     * qual é o tipo apontado.
     */
    void *ptr = &num;

    /*
     * Para ler o valor, convertemos `ptr` para `int *` e então desreferenciamos.
     * O cast é obrigatório para recuperar o tipo original corretamente.
     */
    printf("Valor: %d\n", *(int *)ptr);

    return 0;
}
/*
 * exemplo01.c
 * Arquivo intencionalmente vulnerável para fins didáticos.
 * NÃO usar este padrão em código de produção.
 */

#include <stdio.h>   /* Declarações de I/O: printf, scanf, fgets, etc. */
#include <locale.h>  /* Para setlocale */

int main() {
    /*
     * Configura a localidade para pt_BR com codificação UTF-8.
     * Observação: não verificamos o retorno de setlocale; em máquinas
     * que não tenham essa localidade, a chamada pode falhar.
     */
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
     * Buffer declarado com 10 bytes. Para uma string C terminada em '\0'
     * isso comporta no máximo 9 caracteres visíveis. Esse tamanho é pequeno
     * e exige controle da entrada para evitar overflow.
     */
    char buffer[10]; // Buffer pequeno (9 chars + '\0')

    printf("Digite uma string: ");

    /*
     * ---------- Linha vulnerável ----------
     * scanf("%s", buffer);
     * Problema: o especificador "%s" NÃO recebe informação do tamanho do
     * buffer. Se o usuário digitar mais caracteres do que o espaço alocado,
     * a função escreverá além do final do array (buffer overflow).
     *
     * Consequências:
     * - Corrupção de memória (variáveis locais, retorno de função, canários de
     *   pilha) -> comportamento indefinido
     * - Crash/aborto do programa
     * - Em ambientes sem proteções, possível exploração para execução
     *   arbitrária de código (vulnerabilidade clássica de stack overflow)
     *
     * Observações adicionais:
     * - scanf com "%s" também para na primeira whitespace (espaço/newline),
     *   portanto não lê strings com espaços — comportamento que pode ser
     *   inesperado.
     * - Uma correção mínima seria usar um limite no formato: "%9s" para ler
     *   até 9 caracteres (deixando espaço para o terminador '\0').
     * - Melhor abordagem: usar fgets(buffer, sizeof buffer, stdin) e tratar o
     *   newline explicitamente.
     */
    scanf("%s", buffer); // ❌ VULNERÁVEL: sem limite de tamanho

    /*
     * Ao imprimir, assumimos que 'buffer' é uma string C válida terminada em
     * '\0'. Se um overflow acontecer, pode não haver terminador e a leitura
     * do printf poderá acessar memória adjacente, expondo dados ou causando
     * crash.
     */
    printf("Você digitou: %s\n", buffer);

    return 0;
}
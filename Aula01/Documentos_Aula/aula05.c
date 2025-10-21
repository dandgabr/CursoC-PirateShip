/*
    ====================================================================
    PROGRAMA: Troca de valores usando XOR (operação bit a bit)
    ====================================================================

    OBJETIVO:
    Fazer um programa que troque (inverta) os valores de 2 números
    SEM usar uma terceira variável auxiliar.

    EXPLICAÇÃO SIMPLES:
    - Estado inicial: a = 5 e b = 3
    - Estado final:   a = 3 e b = 5

    TÉCNICA UTILIZADA:
    Usamos o operador XOR (^), que faz uma comparação bit a bit.
    XOR é especial porque aplicar XOR duas vezes com o mesmo valor
    cancela a operação e recupera o valor original.

    Propriedade matemática do XOR:
    - Se X = A ^ B, então:
      - A = X ^ B (recupera A)
      - B = X ^ A (recupera B)
    ====================================================================
*/

// ==================== BIBLIOTECAS ====================
#include <stdio.h> // Biblioteca padrão de entrada/saída
                   // Fornece a função printf() para exibir texto na tela

#include <locale.h> // Biblioteca de configurações regionais (acentos, vírgulas, etc.)
                    // Não está sendo usada neste programa, mas foi incluída

// ==================== FUNÇÃO AUXILIAR ====================
/*
    Função: printBinary
    Propósito: Imprimir um número inteiro em formato binário (8 bits)

    Parâmetro:
    - int num: o número que será convertido e mostrado em binário

    Retorno: void (não retorna nada, apenas exibe na tela)

    Como funciona:
    - Pega cada bit do número, da esquerda para a direita
    - Usa operador >> (shift right) para deslocar bits
    - Usa operador & (AND bit a bit) para isolar cada bit
*/
void printBinary(int num)
{
    // Loop que percorre os 8 bits menos significativos (os últimos 8 bits do número)
    // Começa do bit mais à esquerda (posição 7) até o mais à direita (posição 0)
    for (int i = 7; i >= 0; i--)
    {
        // Operação em 2 etapas:
        // 1. (num >> i): desloca o número "i" posições para a direita
        //    Exemplo: 5 >> 2 transforma 00000101 em 00000001
        // 2. & 1: aplica AND com 1 (00000001) para pegar apenas o último bit
        //    Resultado: isola o bit na posição "i"
        int bit = (num >> i) & 1;

        // Imprime o bit (será 0 ou 1)
        printf("%d", bit);
    }
}

// ==================== FUNÇÃO PRINCIPAL ====================
/*
    Função: main
    Propósito: Ponto de entrada do programa - é aqui que tudo começa

    Parâmetro: void (não recebe nenhum argumento da linha de comando)
    Retorno: int (deveria retornar 0 se tudo correr bem, mas não está explícito aqui)
*/
int main(void)
{
    // ========== DECLARAÇÃO E INICIALIZAÇÃO DE VARIÁVEIS ==========
    // Declaramos duas variáveis do tipo "int" (números inteiros)
    // e já atribuímos valores iniciais a elas
    int a = 5; // Variável "a" recebe o valor 5 (em binário: 00000101)
    int b = 3; // Variável "b" recebe o valor 3 (em binário: 00000011)

    // ========== EXIBIÇÃO DO ESTADO INICIAL ==========
    // Vamos mostrar os valores ANTES da troca, tanto em decimal quanto em binário
    printf("ESTADO INICIAL:\n"); // Título da seção

    // Mostra o valor de "a" em decimal
    // %d é um "especificador de formato" que será substituído pelo valor de "a"
    printf("a = %d (binario: ", a);
    printBinary(a); // Chama a função para mostrar "a" em binário
    printf(")\n");  // Fecha o parênteses e pula linha (\n)

    // Mostra o valor de "b" em decimal
    printf("b = %d (binario: ", b);
    printBinary(b);  // Chama a função para mostrar "b" em binário
    printf(")\n\n"); // Fecha o parênteses e pula 2 linhas (\n\n)

    // ========== ALGORITMO DE TROCA USANDO XOR ==========
    /*
        CONCEITO FUNDAMENTAL: Operador XOR (^)

        XOR é uma operação lógica bit a bit que compara dois bits:
        - Se os bits são DIFERENTES: resultado = 1
        - Se os bits são IGUAIS: resultado = 0

        TABELA-VERDADE DO XOR:
        0 ^ 0 = 0  (iguais → 0)
        0 ^ 1 = 1  (diferentes → 1)
        1 ^ 0 = 1  (diferentes → 1)
        1 ^ 1 = 0  (iguais → 0)

        EXEMPLO COM NOSSOS VALORES:
        5 em binário = 0101
        3 em binário = 0011

        PROPRIEDADE MÁGICA DO XOR:
        - A ^ B ^ B = A (aplicar XOR com B duas vezes cancela B)
        - Isso nos permite trocar valores sem variável temporária!
    */

    // ========== PASSO 1: a = a ^ b ==========
    /*
        OBJETIVO: Combinar "a" e "b" em uma única variável (a)

        ESTADO ANTES:
        - a = 5 (binário: 0101)
        - b = 3 (binário: 0011)

        CÁLCULO BIT A BIT:
          0101  (a = 5)
        ^ 0011  (b = 3)
        ------
          0110  (resultado = 6)

        Explicação de cada bit:
        - Bit 3 (mais à esquerda): 0 ^ 0 = 0
        - Bit 2: 1 ^ 0 = 1
        - Bit 1: 0 ^ 1 = 1
        - Bit 0 (mais à direita): 1 ^ 1 = 0

        ESTADO DEPOIS:
        - a = 6 (binário: 0110) ← contém informação de AMBOS os valores
        - b = 3 (binário: 0011) ← ainda tem o valor original
    */
    a = a ^ b; // Executa a operação XOR e armazena em "a"

    // Mostra o resultado do Passo 1
    printf("PASSO 1 (a = a ^ b):\n");
    printf("a = %d (binario: ", a);
    printBinary(a); // Mostra: 00000110
    printf(")\n");
    printf("b = %d (binario: ", b);
    printBinary(b); // Mostra: 00000011
    printf(")\n\n");

    // ========== PASSO 2: b = a ^ b ==========
    /*
        OBJETIVO: Recuperar o valor ORIGINAL de "a" e colocá-lo em "b"

        ESTADO ANTES:
        - a = 6 (binário: 0110) ← contém (a_original ^ b_original)
        - b = 3 (binário: 0011) ← ainda é o b_original

        MÁGICA DO XOR:
        Vamos fazer: a ^ b = (a_original ^ b_original) ^ b_original
        Como XOR é associativo e B ^ B = 0, temos:
        = a_original ^ (b_original ^ b_original)
        = a_original ^ 0
        = a_original

        CÁLCULO BIT A BIT:
          0110  (a = 6, que é a_original ^ b_original)
        ^ 0011  (b = 3, que é b_original)
        ------
          0101  (resultado = 5, que é a_original!)

        Explicação de cada bit:
        - Bit 3: 0 ^ 0 = 0
        - Bit 2: 1 ^ 0 = 1
        - Bit 1: 1 ^ 1 = 0
        - Bit 0: 0 ^ 1 = 1

        ESTADO DEPOIS:
        - a = 6 (binário: 0110) ← continua com a combinação
        - b = 5 (binário: 0101) ← AGORA TEM O VALOR ORIGINAL DE "a"!
    */
    b = a ^ b; // Executa a operação XOR e armazena em "b"

    // Mostra o resultado do Passo 2
    printf("PASSO 2 (b = a ^ b):\n");
    printf("a = %d (binario: ", a);
    printBinary(a); // Mostra: 00000110
    printf(")\n");
    printf("b = %d (binario: ", b);
    printBinary(b); // Mostra: 00000101 (era o valor original de a!)
    printf(") <- b agora tem o valor original de a!\n\n");

    // ========== PASSO 3: a = a ^ b ==========
    /*
        OBJETIVO: Recuperar o valor ORIGINAL de "b" e colocá-lo em "a"

        ESTADO ANTES:
        - a = 6 (binário: 0110) ← ainda contém (a_original ^ b_original)
        - b = 5 (binário: 0101) ← já tem o a_original (trocado no passo 2)

        MÁGICA DO XOR (de novo):
        Vamos fazer: a ^ b = (a_original ^ b_original) ^ a_original
        Como XOR é associativo e A ^ A = 0, temos:
        = (a_original ^ a_original) ^ b_original
        = 0 ^ b_original
        = b_original

        CÁLCULO BIT A BIT:
          0110  (a = 6, que é a_original ^ b_original)
        ^ 0101  (b = 5, que agora é a_original)
        ------
          0011  (resultado = 3, que é b_original!)

        Explicação de cada bit:
        - Bit 3: 0 ^ 0 = 0
        - Bit 2: 1 ^ 1 = 0
        - Bit 1: 1 ^ 0 = 1
        - Bit 0: 0 ^ 1 = 1

        ESTADO DEPOIS (TROCA COMPLETA):
        - a = 3 (binário: 0011) ← AGORA TEM O VALOR ORIGINAL DE "b"!
        - b = 5 (binário: 0101) ← tem o valor original de "a"

        *** TROCA REALIZADA COM SUCESSO! ***
    */
    a = a ^ b; // Executa a última operação XOR e armazena em "a"

    // Mostra o resultado do Passo 3
    printf("PASSO 3 (a = a ^ b):\n");
    printf("a = %d (binario: ", a);
    printBinary(a); // Mostra: 00000011 (era o valor original de b!)
    printf(") <- a agora tem o valor original de b!\n");
    printf("b = %d (binario: ", b);
    printBinary(b); // Mostra: 00000101 (valor original de a)
    printf(")\n\n");

    // ========== EXIBIÇÃO DO RESULTADO FINAL ==========
    // Confirmação visual de que a troca foi bem-sucedida
    printf("RESULTADO FINAL - Troca concluida!\n");
    printf("a = %d (binario: ", a);
    printBinary(a); // a agora vale 3 (valor original de b)
    printf(")\n");
    printf("b = %d (binario: ", b);
    printBinary(b); // b agora vale 5 (valor original de a)
    printf(")\n");

    // Nota: em um programa completo, deveríamos retornar 0 aqui
    // para indicar que o programa terminou com sucesso
    // return 0;
}
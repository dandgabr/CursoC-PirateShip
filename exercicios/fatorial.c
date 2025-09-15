/*
 * fatorial.c
 * EXERCÍCIO: Calcule o fatorial de um número
 * 
 * OBJETIVO:
 * Criar um programa que calcule o fatorial de um número usando loops
 * 
 * REQUISITOS:
 * 1. Solicite um número inteiro positivo ao usuário
 * 2. Valide se o número é positivo
 * 3. Calcule o fatorial usando um loop
 * 4. Exiba o resultado
 * 5. DESAFIO: Implemente também usando recursão
 * 
 * LEMBRE-SE:
 * - Fatorial de n = n! = n × (n-1) × (n-2) × ... × 1
 * - Por definição: 0! = 1 e 1! = 1
 * - Exemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120
 * 
 * Aula 3 - CursoC-PirateShip 🏴‍☠️
 */

#include <stdio.h>

int main() {
    printf("🔢 Calculadora de Fatorial - CursoC-PirateShip 🏴‍☠️\n\n");
    
    int numero;
    
    // COMPLETE AQUI: Solicite o número ao usuário
    
    
    // COMPLETE AQUI: Valide se o número é positivo
    
    
    // COMPLETE AQUI: Calcule o fatorial usando for ou while
    
    
    // COMPLETE AQUI: Exiba o resultado
    
    
    return 0;
}

/*
 * DICAS:
 * - Use long long int para números grandes
 * - Teste com valores pequenos primeiro (5!, 6!, 7!)
 * - Fatorial cresce muito rapidamente!
 * 
 * TESTE:
 * 0! = 1
 * 1! = 1
 * 5! = 120
 * 10! = 3628800
 * 
 * DESAFIO EXTRA:
 * Implemente uma versão recursiva:
 * 
 * long long fatorial_recursivo(int n) {
 *     if (n <= 1) return 1;
 *     return n * fatorial_recursivo(n - 1);
 * }
 */
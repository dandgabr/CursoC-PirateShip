// Construa um programa que usa operadores relacionais e lógicos para validar múltiplas condições em conjunto, usando &&, || e !.

#include <stdio.h>

int main() {
    int a, b, c;
    char opcao;
    
    printf("=== DEMONSTRACAO DE OPERADORES LOGICOS ===\n");
    
    // Coletando valores para teste
    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);
    
    printf("Digite o terceiro numero (c): ");
    scanf("%d", &c);
    
    printf("Digite uma opcao (s/n): ");
    scanf(" %c", &opcao);
    
    printf("\n=== TESTES COM OPERADORES LOGICOS ===\n");
    
    // Operador && (E lógico)
    printf("1. Operador && (E logico):\n");
    if (a > 0 && b > 0) {
        printf("   ✓ Ambos a e b são positivos\n");
    } else {
        printf("   ✗ Pelo menos um dos valores não é positivo\n");
    }
    
    // Operador || (OU lógico)
    printf("\n2. Operador || (OU logico):\n");
    if (a > 10 || b > 10) {
        printf("   ✓ Pelo menos um valor é maior que 10\n");
    } else {
        printf("   ✗ Nenhum valor é maior que 10\n");
    }
    
    // Operador ! (NÃO lógico)
    printf("\n3. Operador ! (NAO logico):\n");
    if (!(opcao == 'n' || opcao == 'N')) {
        printf("   ✓ Opcao não é 'n' nem 'N'\n");
    } else {
        printf("   ✗ Opcao é 'n' ou 'N'\n");
    }
    
    // Combinação complexa de operadores
    printf("\n4. Combinacao complexa:\n");
    if ((a > b && b > c) || (c % 2 == 0 && !(a < 0))) {
        printf("   ✓ Condicao complexa atendida\n");
        printf("   (a > b E b > c) OU (c é par E a não é negativo)\n");
    } else {
        printf("   ✗ Condicao complexa não atendida\n");
    }
    
    // Demonstração de precedência
    printf("\n5. Teste de precedencia:\n");
    printf("   a=%d, b=%d, c=%d\n", a, b, c);
    printf("   !a && b || c > 5 = %s\n", 
           (!a && b || c > 5) ? "verdadeiro" : "falso");
    
    return 0;
}
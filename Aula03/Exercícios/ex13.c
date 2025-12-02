// Crie um programa para demonstrar o uso de operadores compostos de atribuição, como +=, -=, *=, /=, usando uma variável inteira.
#include <stdio.h>

int main() {
    // Declarando uma variável inteira para demonstrar os operadores compostos
    int numero = 10;
    
    // Exibindo o valor inicial da variável
    printf("Valor inicial: %d\n", numero);
    
    // Operador += (adicionar e atribuir)
    // É equivalente a: numero = numero + 5
    numero += 5;
    printf("Após numero += 5: %d\n", numero);
    
    // Operador -= (subtrair e atribuir)
    // É equivalente a: numero = numero - 3
    numero -= 3;
    printf("Após numero -= 3: %d\n", numero);
    
    // Operador *= (multiplicar e atribuir)
    // É equivalente a: numero = numero * 2
    numero *= 2;
    printf("Após numero *= 2: %d\n", numero);
    
    // Operador /= (dividir e atribuir)
    // É equivalente a: numero = numero / 4
    numero /= 4;
    printf("Após numero /= 4: %d\n", numero);
    
    // Operador %= (resto da divisão e atribuir)
    // É equivalente a: numero = numero % 3
    numero %= 3;
    printf("Após numero %%= 3: %d\n", numero);
    
    return 0;
}
// Escreva programas que utilizem while, do-while e for para iterar até uma condição não ser mais satisfeita. Por exemplo, incrementando um contador até chegar a um valor limite e imprimindo a cada passo.

#include <stdio.h>

int main() {
    int contador;
    int limite = 5;
    
    // Exemplo usando while
    printf("=== Exemplo com WHILE ===\n");
    contador = 1; // Inicializa o contador
    while (contador <= limite) { // Verifica a condição antes de executar
        printf("While - Contador: %d\n", contador);
        contador++; // Incrementa o contador
    }
    
    printf("\n");
    
    // Exemplo usando do-while
    printf("=== Exemplo com DO-WHILE ===\n");
    contador = 1; // Reinicializa o contador
    do {
        printf("Do-While - Contador: %d\n", contador);
        contador++; // Incrementa o contador
    } while (contador <= limite); // Verifica a condição após executar
    
    printf("\n");
    
    // Exemplo usando for
    printf("=== Exemplo com FOR ===\n");
    // O for já inicializa, verifica condição e incrementa em uma linha
    for (contador = 1; contador <= limite; contador++) {
        printf("For - Contador: %d\n", contador);
    }
    
    return 0;
}
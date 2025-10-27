# Inicialização

Inicializar uma variável significa declarar e atribuir um valor inicial em uma única linha. Isso assegura que a variável tenha um valor definido e não contenha dados indesejados da memória.

```C
int x = 10;      // Inicialização de variável inteira
char c = 'a';    // Inicialização de char
float f = 1.5f;  // Inicialização de float
double d = 3.14; // Inicialização de double
```

## Declaração vs inicialização

**Declaração:** Especifica o tipo da variável, mas não atribui valor.

```C
int y;        // y contém lixo até ser inicializado
```

**Inicialização:** Declara e atribui valor.

```C
int z = 20;   // z contem 20 desde o início
```

# Conversão de tipo

## Conversão explicita (casting)

É possível forçar explicitamente a conversão de um tipo para outro usando o operador de cast, útil quando precisamos garantir o tipo do resultado de uma expressão. Exemplo de conversão de char para `int`:

```C
#include <stdio.h>
int main(void) {
    char c = 'A';
    int x = (int)c;       // Conversão explícita
    printf("O resultado é %d\n", x); // Saída: O resultado é 65
}
```

## Conversão explicita

O compilador realiza automaticamente a promoção de tipos durante operações aritméticas, adotando o tipo mais "adequado". Em operações entre int e double, o int é promovido para double. Exemplo:

```C
#include <stdio.h>
int main(void) {
    int x = 10;
    int y = 30;
    double d = x / y;     // Conversão implícita, mas ambos int: resultado 0.0
    printf("O resultado é %f\n", d); // Saída: O resultado é 0.000000
}
```

Para resultado correto, é necessário conversão explícita de um dos operandos:

```C
#include <stdio.h>
int main(void) {
    int x = 10;
    int y = 30;
    double d = (double)x / y; // Com cast, resultado será 0.333333
    printf("O resultado é %f\n", d); // Saída: O resultado é 0.333333
}
```

## Dicas

- Casts são essenciais para evitar erros de precisão, especialmente em divisões e operações entre tipos diferentes.
- O uso inadequado pode causar perda de dados, principalmente na conversão de tipos "longos" para "estreitos" (ex: de double para int).
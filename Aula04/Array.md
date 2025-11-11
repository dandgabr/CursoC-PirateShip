# Array

Um array é uma estrutura de dados que consiste em uma coleção de elementos do mesmo tipo, dispostos sequencialmente na memória. Ou seja, é um conjunto de objetos de dados idênticos posicionados lado a lado. Uma vez declarado, o tamanho do array é fixo, não sendo possível adicionar ou remover elementos posteriormente.

## Declaração

A declaração de um array consiste em definir o tipo dos elementos, o nome do array e o número de posições (em colchetes). O array serve para armazenar múltiplos valores do mesmo tipo sob um único nome de variável, com posições indexadas começando em zero.

```C
tipo nome_array[tamanho_array];
```

## Exemplo

Declarando um array de inteiros com 5 elementos:

```C
int numeros[5];
```

Declarando um array de floats com 4 elementos:

```C
float notas[4];
```

## Operador de índice

O subscript operator, ou operador de índice [ ], é um símbolo da linguagem utilizado para acessar elementos individuais de um array (vetor) por meio de sua posição na memória. Ele recebe como argumento um número inteiro que representa o índice do elemento desejado, começando sempre do zero.

Por exemplo, em meu_array[2], o operador [ ] acessa o terceiro elemento de meu_array. Ele também pode ser usado para atribuir valores aos elementos do array, como em meu_array[0] = 10;.

Esse operador é fundamental para manipulação eficiente de coleções sequenciais em C, permitindo leitura e escrita direta em posições específicas do array.​

## Inicialização de array

Inicializando o array na própria declaração:

```C
int valores[5] = {1, 2, 3, 4, 5};
float notas[4] = {7.5, 8.0, 6.5, 3.5};
```

O tamanho pode ser omitido ao inicializar:

```C
int valores[] = {1, 2, 3, 4, 5};
```

No exemplo acima, o compilador deduzirá o tamanho do array de acordo com os elementos fornecidos.

## Alocação de memória

A alocação de memória de um array em ocorre de forma sequencial, os elementos são posicionados lado a lado, cada um ocupando um espaço de memória de acordo com seu tipo. Em arrays de inteiros (int), por exemplo, cada elemento ocupa normalmente 4 bytes. O nome do array representa o endereço do primeiro elemento, e os demais são acessados via índices, com deslocamento da posição de memória.

Considere o array:

```C
int arr[5] = {10, 20, 30, 40, 50};
```

Se o array arr começa na posição de memória 1000 e cada inteiro ocupa 4 bytes, a tabela abaixo representa como os elementos seriam alocados na memória:

| Índice | Valor | Endereço de Memória |
|--------|-------|---------------------|
| 0      | 10    | 1000                |
| 1      | 20    | 1004                |
| 2      | 30    | 1008                |
| 3      | 40    | 1012                |
| 4      | 50    | 1016                |

Cada endereço subsequente aumenta de acordo com o tamanho do tipo (sizeof(int)), formando uma sequência contígua.

Essa estrutura é fundamental para permitir acesso eficiente, pois basta calcular o endereço base acrescido do deslocamento do índice para encontrar cada elemento do array.

## Array de caracteres

Um array do tipo char pode ser inicializado diretamente com uma string literal, onde cada caractere ocupa uma posição e o compilador inclui automaticamente o caractere nulo '\0' ao final para marcar o término da string.

```C
char myarray[] = "Hello";
printf("%s", myarray);
```

No exemplo acima, o array terá tamanho 6: cinco letras (H, e, l, l, o) e o caractere de término '\0'.

A impressão de arrays de caracteres utiliza o formatador %s na função printf, mostrando a string completa. O tamanho do array é automaticamente deduzido quando inicializado com uma string. Arrays de caracteres podem ser usados tanto para armazenar mensagens fixas quanto para receber entradas do usuário.

## Array multidimensional

Arrays multidimensionais são arrays que possuem mais de uma dimensão, sendo basicamente arrays de arrays. Um array bidimensional , por exemplo, pode ser imaginado como uma matriz ou tabela com linhas e colunas.

**Definição**

Para declarar um array bidimensional axb de inteiros:

```C
int tabela[a][b];
```

Sendo exemplo um array 3x5;

```C
int tabela[3][5];
```

Para acessar um elemento da tabela é só indicar seu índice correspondente na linha e na coluna. Ao acessar o elemento na linha 1, coluna 2, usamos:

```C
tabela[1][2]
```

E para inicializar um array multidimensional é possível através de lista aninhadas:

```C
int tabela[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};
```

## Determinação de tamanho e contagem

### Determinando o tamanho total do array em bytes

O operador sizeof aplicado ao array inteiro retorna a quantidade total de memória ocupada pelo array.

Exemplo:

```C
#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3};
    size_t arrSize = sizeof(arr); // Tamanho total em bytes
    printf("Tamanho total do array em bytes: %zu\n", arrSize);
    return 0;
}
```

A saída desse código seria:

```PlainText
Tamanho total do array em bytes: 12
```
### Calculando o número de elementos do array com sizeof

Para obter a quantidade de elementos, divide-se o tamanho total pelo tamanho de um elemento simples, que pode ser obtido com sizeof(tipo).

Exemplo:

```C
#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3};
    size_t elementCount = sizeof(arr) / sizeof(int);
    printf("Número de elementos no array: %zu\n", elementCount);
    return 0;
}
```

Saída:

```PlainText
Número de elementos no array: 3
```

### Usando o tamanho do primeiro elemento para contar o número de elementos

Como alternativa, pode-se dividir o tamanho total do array pelo tamanho do primeiro elemento, acessado como arr[0].

Exemplo:

```C
#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3};
    size_t elementCount = sizeof(arr) / sizeof(arr[0]);
    printf("Número de elementos no array (pela 1a posição): %zu\n", elementCount);
    return 0;
}
```

Saída:

```PlainText
Número de elementos no array (pela 1a posição): 3
```

## Observações

- Arrays devem ser declarados com tipo, nome e tamanho.
- O acesso a cada posição do array é feito por meio de índices.
- Inicialização pode ser feita diretamente na declaração.
- O tamanho do array é fixo após a declaração.
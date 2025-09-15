# Aula 5: Arrays e Ponteiros Básicos

## Objetivos
- Compreender arrays unidimensionais
- Trabalhar com strings em C
- Introdução aos ponteiros
- Relação entre arrays e ponteiros

## Conceitos Abordados

### 1. Arrays (Vetores)
```c
// Declaração de arrays
int numeros[10];           // Array de 10 inteiros
float notas[5] = {8.5, 9.0, 7.5, 6.0, 8.0}; // Com inicialização
char nome[50];             // Array de caracteres (string)
```

### 2. Inicialização de Arrays
```c
int valores[] = {1, 2, 3, 4, 5};  // Tamanho determinado automaticamente
int matriz[3] = {10, 20, 30};     // Inicialização parcial
int zeros[100] = {0};             // Todos os elementos zerados
```

### 3. Strings em C
```c
char palavra[20] = "Hello";       // String literal
char frase[] = "Curso de C";      // Tamanho automático
char buffer[100];                 // String vazia
```

### 4. Introdução aos Ponteiros
```c
int x = 10;
int *ptr = &x;     // ptr aponta para o endereço de x
printf("%d", *ptr); // Desreferenciamento - imprime o valor de x
```

### 5. Arrays e Ponteiros
- O nome do array é um ponteiro para o primeiro elemento
- `array[i]` é equivalente a `*(array + i)`
- Passagem de arrays para funções

## Exemplos

1. **arrays_basicos.c** - Declaração e uso de arrays
2. **strings_exemplo.c** - Manipulação de strings
3. **ponteiros_intro.c** - Introdução aos ponteiros

## Funções Úteis para Strings
- `strlen()` - Comprimento da string
- `strcpy()` - Copiar string
- `strcmp()` - Comparar strings
- `strcat()` - Concatenar strings

## Para Compilar
```bash
gcc arrays_basicos.c -o arrays_basicos
./arrays_basicos
```

## Exercícios
1. Crie um programa que leia 10 números e calcule a média
2. Implemente um programa que inverta uma string
3. Desenvolva um sistema de busca em array
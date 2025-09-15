# Aula 2: Variáveis e Tipos de Dados

## Objetivos
- Entender os tipos primitivos em C
- Declarar e inicializar variáveis
- Realizar operações básicas
- Trabalhar com entrada e saída de dados

## Conceitos Abordados

### 1. Tipos Primitivos
- `int` - Números inteiros (-2147483648 a 2147483647)
- `float` - Números decimais (precisão simples)
- `double` - Números decimais (precisão dupla)
- `char` - Caracteres (1 byte)

### 2. Declaração de Variáveis
```c
int idade;              // Declaração
int numero = 10;        // Declaração com inicialização
float preco = 19.99;    // Decimal
char letra = 'A';       // Caractere
```

### 3. Entrada e Saída
- `printf()` - Saída formatada
- `scanf()` - Entrada formatada

### 4. Especificadores de Formato
- `%d` ou `%i` - Inteiros
- `%f` - Float
- `%lf` - Double
- `%c` - Caractere
- `%s` - String

## Exemplos

1. **variaveis.c** - Declaração e uso de variáveis
2. **calculadora.c** - Calculadora básica
3. **tipos_dados.c** - Demonstração dos tipos de dados

## Para Compilar
```bash
gcc variaveis.c -o variaveis
./variaveis
```

## Exercícios
1. Crie um programa que calcule a área de um retângulo
2. Faça um conversor de temperatura (Celsius para Fahrenheit)
3. Desenvolva um programa que calcule a média de 3 notas
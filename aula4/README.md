# Aula 4: Funções e Programação Modular

## Objetivos
- Criar e utilizar funções
- Entender escopo de variáveis
- Implementar programação modular
- Trabalhar com passagem de parâmetros

## Conceitos Abordados

### 1. Declaração de Funções
```c
tipo_retorno nome_funcao(parametros) {
    // corpo da função
    return valor; // se necessário
}
```

### 2. Tipos de Funções
- **Função sem retorno**: `void`
- **Função com retorno**: `int`, `float`, `char`, etc.
- **Função sem parâmetros**: `void` ou lista vazia
- **Função com parâmetros**: tipos e nomes dos parâmetros

### 3. Protótipos de Funções
```c
// Declaração (protótipo)
int somar(int a, int b);

// Definição
int somar(int a, int b) {
    return a + b;
}
```

### 4. Escopo de Variáveis
- **Variáveis locais**: Dentro da função
- **Variáveis globais**: Fora de todas as funções
- **Parâmetros**: Locais à função

### 5. Passagem por Valor
- Os parâmetros são cópias dos valores originais
- Modificações não afetam as variáveis originais

## Exemplos

1. **funcoes_basicas.c** - Criação e uso de funções simples
2. **calculadora_modular.c** - Calculadora usando funções
3. **jogo_numero.c** - Jogo de adivinhação modularizado

## Para Compilar
```bash
gcc funcoes_basicas.c -o funcoes_basicas
./funcoes_basicas
```

## Exercícios
1. Crie uma função que calcule o fatorial de um número
2. Implemente uma função que verifique se um número é primo
3. Desenvolva um sistema de menu com funções específicas
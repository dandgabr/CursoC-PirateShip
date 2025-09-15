# Aula 3: Estruturas de Controle

## Objetivos
- Implementar estruturas condicionais
- Utilizar laços de repetição
- Compreender o fluxo de execução do programa

## Conceitos Abordados

### 1. Estruturas Condicionais

#### if/else
```c
if (condicao) {
    // código se verdadeiro
} else {
    // código se falso
}
```

#### switch/case
```c
switch (variavel) {
    case valor1:
        // código
        break;
    case valor2:
        // código
        break;
    default:
        // código padrão
}
```

### 2. Laços de Repetição

#### for
```c
for (inicialização; condição; incremento) {
    // código a repetir
}
```

#### while
```c
while (condição) {
    // código a repetir
}
```

#### do-while
```c
do {
    // código a repetir
} while (condição);
```

### 3. Operadores de Comparação
- `==` - Igual
- `!=` - Diferente
- `<` - Menor que
- `>` - Maior que
- `<=` - Menor ou igual
- `>=` - Maior ou igual

### 4. Operadores Lógicos
- `&&` - E lógico (AND)
- `||` - OU lógico (OR)
- `!` - NÃO lógico (NOT)

## Exemplos

1. **condicionais.c** - Estruturas if/else e switch
2. **loops.c** - Diferentes tipos de laços
3. **menu.c** - Sistema de menu interativo

## Para Compilar
```bash
gcc condicionais.c -o condicionais
./condicionais
```

## Exercícios
1. Crie um programa que determine se um número é par ou ímpar
2. Faça um programa que calcule o fatorial de um número
3. Desenvolva um jogo de adivinhação de números
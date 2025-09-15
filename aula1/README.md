# Aula 1: Introdução e Hello World

## Objetivos
- Entender a estrutura básica de um programa em C
- Compilar e executar o primeiro programa
- Compreender a função `main()` e `printf()`

## Conceitos Abordados

### 1. Estrutura Básica de um Programa C
Todo programa em C deve ter:
- Inclusão de bibliotecas (`#include`)
- Função `main()` 
- Declarações e instruções
- Retorno da função

### 2. Hello World
O programa mais simples em C:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### 3. Comentários
- Comentários de linha: `// comentário`
- Comentários de bloco: `/* comentário */`

## Exemplos

1. **hello_world.c** - Programa básico Hello World
2. **hello_user.c** - Programa interativo com entrada do usuário
3. **comentarios.c** - Demonstração de diferentes tipos de comentários

## Para Compilar
```bash
gcc hello_world.c -o hello_world
./hello_world
```

## Exercícios
1. Modifique o programa para imprimir seu nome
2. Crie um programa que imprima múltiplas linhas
3. Adicione comentários explicativos ao código
# Aula 6: Estruturas e Arquivos

## Objetivos
- Criar e utilizar estruturas (struct)
- Trabalhar com arquivos em C
- Implementar projeto integrador
- Combinar conceitos aprendidos

## Conceitos Abordados

### 1. Estruturas (struct)
```c
// Definição de estrutura
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

// Declaração de variáveis
struct Pessoa pessoa1;
struct Pessoa pessoas[10];
```

### 2. Inicialização de Estruturas
```c
// Inicialização direta
struct Pessoa p1 = {"João", 25, 1.75};

// Inicialização por campo
struct Pessoa p2;
strcpy(p2.nome, "Maria");
p2.idade = 30;
p2.altura = 1.65;
```

### 3. Typedef
```c
typedef struct {
    char titulo[100];
    char autor[50];
    int ano;
    float preco;
} Livro;

Livro livro1; // Não precisa da palavra 'struct'
```

### 4. Arquivos em C
```c
FILE *arquivo = fopen("dados.txt", "w");  // Escrita
FILE *arquivo = fopen("dados.txt", "r");  // Leitura
FILE *arquivo = fopen("dados.txt", "a");  // Anexar
fclose(arquivo);
```

### 5. Operações com Arquivos
- `fprintf()` - Escrever formatado
- `fscanf()` - Ler formatado
- `fgets()` - Ler linha
- `fputs()` - Escrever linha

## Exemplos

1. **estruturas.c** - Definição e uso de estruturas
2. **arquivos_exemplo.c** - Operações básicas com arquivos
3. **sistema_cadastro.c** - Projeto integrador

## Para Compilar
```bash
gcc estruturas.c -o estruturas
./estruturas
```

## Exercícios
1. Crie uma estrutura para representar um produto
2. Implemente um sistema de cadastro com arquivos
3. Desenvolva um programa de agenda telefônica
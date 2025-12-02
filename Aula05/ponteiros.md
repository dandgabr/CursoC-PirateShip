# Ponteiro

## Declaração e iniciação

A declaração de um ponteiro é feita com a sintaxe tipo `*nome;`, onde tipo é o tipo de dado ao qual o ponteiro apontará. O asterisco (`*`) indica que a variável armazenará um endereço de memória, não um valor direto. Para inicializar, usamos o operador de endereço (`&`), que retorna o endereço de uma variável.

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int valor = 10;
    int *ptr = &valor; // ptr aponta para o endereço de valor
    printf("Valor: %d\n", *ptr); // Acessa o valor apontado
    return 0;
}
```

## Economia de memória

O operador `&` retorna o endereço de memória de uma variável. Ao passar ponteiros para funções, evitamos copiar grandes blocos de dados, economizando memória e permitindo alterações diretas no valor original.

```c
#include <stdio.h>
#include <locale.h>

typedef struct {
    int matricula;
    float nota;
} tAluno;

void alterarNota(tAluno *aluno, float novaNota) {
    aluno->nota = novaNota;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    tAluno aluno = {123, 7.5};
    printf("Nota original: %.2f\n", aluno.nota);
    alterarNota(&aluno, 9.0);
    printf("Nota alterada: %.2f\n", aluno.nota);
    return 0;
}
```

## Ponteiros e arrays

O nome de um array é tratado como um ponteiro para seu primeiro elemento. Ponteiros permitem percorrer arrays e acessar elementos de forma eficiente, sem cópias desnecessárias.​​

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ptr = vetor;
    for(int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}
```

## Aritmética de ponteiros

A aritmética de ponteiros permite navegar pela memória, incrementando ou decrementando o ponteiro. O incremento depende do tipo de dado (por exemplo, um ponteiro para int avança 4 bytes em sistemas de 32 bits).

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int vetor[5] = {10, 20, 30, 40, 50};
    int *ptr = vetor;
    printf("Endereço inicial: %p\n", (void*)ptr);
    ptr++; // Avança para o próximo inteiro
    printf("Endereço após incremento: %p\n", (void*)ptr);
    return 0;
}
```

## Ponteiros vazios

Um ponteiro do tipo `void*` pode apontar para qualquer tipo de dado, mas não pode ser desreferenciado diretamente. É útil para funções genéricas.

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num = 42;
    void *ptr = &num;
    printf("Valor: %d\n", *(int*)ptr);
    return 0;
}
```

## Ponteiros para caracteres de arrays

Ponteiros são essenciais para manipular strings, pois strings são arrays de caracteres. Ponteiros facilitam operações como leitura, cópia e concatenação.

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char texto[] = "Olá, mundo!";
    char *ptr = texto;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
```

# Arrays de ponteiros

Arrays de ponteiros armazenam endereços de variáveis ou strings, permitindo acesso dinâmico e flexível.

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char *nomes[] = {"Ana", "Bruno", "Carlos"};
    for(int i = 0; i < 3; i++) {
        printf("Nome %d: %s\n", i, nomes[i]);
    }
    return 0;
}
```

## Alocação dinâmica de memória

A alocação dinâmica de memória é um recurso fundamental em C, permitindo que programas solicitem espaço de memória em tempo de execução. Isso é especialmente útil quando não se sabe, em tempo de compilação, quanto espaço será necessário para armazenar dados. As funções mais importantes para esse fim são `malloc`, `calloc` e `realloc`, todas definidas na biblioteca `stdlib.h`.

### Malloc

A função malloc (memory allocation) aloca um bloco de memória de tamanho especificado e retorna um ponteiro para o início desse bloco. Se não houver memória suficiente, ela retorna NULL. Exemplo:​

```c
int *p = (int *) malloc(x * sizeof(int));
```

Neste caso, são alocados `x` inteiros. É fundamental verificar se o retorno é NULL antes de usar o ponteiro, pois tentar acessar um ponteiro nulo pode causar falhas no programa.

### Calloc

A função `calloc` (contiguous allocation) aloca memória para um array de elementos e inicializa todos os bytes com zero. Ela recebe dois argumentos: o número de elementos (`x`) e o tamanho de cada elemento. Exemplo:

```c
int *p = (int *) calloc(x, sizeof(int));
```

A principal diferença para malloc é que calloc garante que a memória alocada seja zerada, o que pode ser útil para evitar valores indesejados ("lixo") na memória.

### realloc

A função `realloc` permite redimensionar um bloco de memória já alocado por `malloc` ou `calloc`. Ela recebe um ponteiro para o bloco original e o novo tamanho desejado (`y`). Exemplo:

```c
p = (int *) realloc(p, y * sizeof(int));
```

Se o novo tamanho for maior, o espaço adicional não é inicializado; se for menor, parte do bloco é liberada. Se não houver memória suficiente, realloc retorna NULL e o bloco original permanece inalterado.

### Consideração sobre alocação

- Sempre verifique se as funções de alocação retornaram `NULL` antes de usar o ponteiro;
- Após usar a memória alocada, libere-a com free para evitar vazamentos;
- Use `calloc` quando precisar garantir que a memória esteja zerada; use `malloc` para melhor desempenho quando a inicialização não é necessária;
- `realloc` é útil para ajustar o tamanho de vetores ou estruturas dinamicamente, mas tome cuidado com o retorno e com a necessidade de reatribuir o ponteiro.

## Preocupações de segurança ao lidar com ponteiros

Ponteiros podem causar erros graves se usados incorretamente, como acesso a memória não alocada ou vazamentos. Sempre valide ponteiros antes de usá-los e libere memória alocada dinamicamente.

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *ptr = (int*)malloc(sizeof(int));
    if(ptr != NULL) {
        *ptr = 100;
        printf("Valor: %d\n", *ptr);
        free(ptr);
        ptr = NULL;
    }
    return 0;
}
```

### Porque usar free?

Quando alocamos memória dinamicamente com funções como malloc, calloc ou realloc, essa memória é reservada na área chamada heap. Se não liberarmos essa memória com free, ocorre um vazamento de memória (memory leak), pois o sistema operacional não sabe que aquela região pode ser reutilizada. Isso pode esgotar a memória do programa ou do sistema ao longo do tempo, especialmente em aplicações de longa duração.

```c
int *ptr = (int*)malloc(sizeof(int));
// ... uso do ponteiro ...
free(ptr); // Libera a memória
```

### Por que atribuir NULL ao ponteiro?
Após chamar free, o ponteiro ainda contém o endereço anterior, mas esse endereço já não é válido. Se tentarmos acessar esse ponteiro novamente, podemos causar comportamentos indefinidos ou erros graves, como segmentation fault ou corrupção de memória. Atribuir NULL ao ponteiro após free evita que ele seja acidentalmente utilizado, pois tentativas de acesso a um ponteiro NULL podem ser facilmente detectadas e tratadas.​

```c
int *ptr = (int*)malloc(sizeof(int));
// ... uso do ponteiro ...
free(ptr);
ptr = NULL; // Boa prática: evita dangling pointer
```
# Problemas comuns ao trabalhar com alocação de memória

## Introdução

Gerenciar memória em C é uma tarefa crítica que exige cuidado constante. Diferentemente de linguagens modernas com coleta automática de lixo, C deixa essa responsabilidade nas mãos do programador. Problemas de memória podem causar falhas catastróficas, corrupção de dados, vulnerabilidades de segurança e até permitir execução de código arbitrário.​

## Buffer Overflow

Buffer Overflow (estouro de buffer) ocorre quando um programa escreve mais dados em um buffer do que ele pode armazenar. Os dados excedentes sobrescrevem áreas de memória adjacentes, causando corrupção de dados e potencial execução de código malicioso.

### Exemplo vulnerável

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char buffer[10]; // Buffer pequeno
    printf("Digite uma string: ");
    scanf("%s", buffer); // ❌ VULNERÁVEL: sem limite de tamanho
    printf("Você digitou: %s\n", buffer);
    return 0;
}
```

Se o usuário digitar uma string com mais de 9 caracteres, ocorrerá um estouro de buffer.

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char buffer[10];
    printf("Digite uma string (máximo 9 caracteres): ");
    scanf("%9s", buffer); // ✓ SEGURO: especifica limite
    printf("Você digitou: %s\n", buffer);
    return 0;
}
```

Com isso só a string lida será limitada aos 9 primeiros caracteres.

### Cuidados extras

- Use versões seguras de funções: `fgets()` em vez de `gets()`, `strncpy()` em vez de `strcpy()`;
- Sempre valide entradas do usuário;
- Use especificadores de formato limitados em `scanf()` e `printf()`;
- Realize verificação de limites em tempo de execução.

## Use-After-Free

Use-After-Free ocorre quando um programa continua a usar um ponteiro após a memória apontada ter sido liberada com free(). O ponteiro se torna um "ponteiro pendente" (dangling pointer), que aponta para memória que pode ter sido realocada para outro uso.​

### Exemplo vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("Valor: %d\n", *ptr);
    
    free(ptr); // Libera a memória
    
    // ❌ VULNERÁVEL: acessar após free
    printf("Valor após free: %d\n", *ptr);
    
    return 0;
}
```

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    printf("Valor: %d\n", *ptr);
    
    free(ptr);
    ptr = NULL; // ✓ SEGURO: atribui NULL
    
    // Verificar antes de usar
    if (ptr != NULL) {
        printf("Valor: %d\n", *ptr);
    } else {
        printf("Ponteiro é nulo!\n");
    }
    
    return 0;
}
```

## Vazamento de memória (Memory Leak)

Um memory leak ocorre quando um programa aloca memória com malloc, calloc ou realloc, mas não a libera quando não é mais necessária. A memória permanece ocupada e não pode ser reutilizada.

### Exemplo vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void alocaMemoria() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *dados = (int*)malloc(1000 * sizeof(int));
    // ... usa dados ...
    // ❌ VULNERÁVEL: não libera memoria
    // free(dados);
}

int main() {
    for (int i = 0; i < 1000; i++) {
        alocaMemoria(); // Cria vazamento em cada iteração
    }
    printf("Programa terminou\n");
    return 0;
}
```

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void alocaMemoria() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *dados = (int*)malloc(1000 * sizeof(int));
    
    if (dados == NULL) {
        fprintf(stderr, "Erro: falha na alocação\n");
        return;
    }
    
    // ... usa dados ...
    
    free(dados); // ✓ SEGURO: libera memoria
    dados = NULL;
}

int main() {
    for (int i = 0; i < 1000; i++) {
        alocaMemoria();
    }
    printf("Programa terminou\n");
    return 0;
}
```

## Double free

Double Free ocorre quando `free()` é chamado duas vezes no mesmo ponteiro, causando comportamento indefinido.

### Exemplo vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 100;
    
    free(ptr);
    free(ptr); // ❌ VULNERÁVEL: double free
    
    return 0;
}
```

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 100;
    
    free(ptr);
    ptr = NULL; // ✓ SEGURO: atribui NULL
    
    // Seguro: free(NULL) é uma operação válida
    free(ptr);
    
    return 0;
}
```

## Out-of-bounds access

Acessar elementos de array fora do intervalo válido causa comportamento indefinido.

### Exemplo vulnerável

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int array[5] = {1, 2, 3, 4, 5};
    
    printf("Acesso válido: %d\n", array[0]);
    printf("Acesso válido: %d\n", array[4]);
    
    // ❌ VULNERÁVEL: acesso fora dos limites
    printf("Acesso inválido: %d\n", array[10]);
    
    return 0;
}
```

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <locale.h>

#define ARRAY_SIZE 5

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int index = 10;
    
    // ✓ SEGURO: verifica limites
    if (index >= 0 && index < ARRAY_SIZE) {
        printf("Elemento: %d\n", array[index]);
    } else {
        printf("Erro: índice %d fora do intervalo");
    }
    return 0;
}
```

## Variáveis não inicializadas

Usar variáveis não inicializadas causa comportamento indefinido, pois contêm valores residuais de memória.

### Exemplo vulnerável

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int valor;
    int *ptr; // Não inicializado
    // ❌ VULNERÁVEL: valores indeterminados
    printf("Valor: %d\n", valor);
    printf("Ponteiro: %p\n", (void*)ptr);
    return 0;
}
```

### Exemplo não seguro

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int valor = 0; // ✓ SEGURO: inicializado
    int *ptr = NULL; // ✓ SEGURO: inicializado
    printf("Valor: %d\n", valor);
    printf("Ponteiro: %p\n", (void*)ptr);
    return 0;
}
```

## Stack overflow

Um stack overflow﻿ ocorre quando um programa excede o limite de memória alocado para a pilha (stack). Isso pode acontecer de várias formas, sendo as mais comuns:​
- **Recursão infinita ou excessiva:** Funções que chamam a si mesmas sem uma condição de parada adequada.​
- **Alocação de grandes variáveis locais: **Declarar arrays ou estruturas muito grandes dentro de funções.​
Quando a pilha é esgotada, o programa pode falhar abruptamente ou corromper dados críticos, como o endereço de retorno de funções.​

### Exemplo vulnerável

```c
#include <stdio.h>
#include <locale.h>

void recursaoInfinita(int n) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int array[10000]; // Aloca muita memória na stack
    if (n > 0) {
        recursaoInfinita(n - 1); // Chamada recursiva sem limite
    }
}

int main() {
    recursaoInfinita(100000);
    return 0;
}
```

Este código pode causar stack overflow devido à recursão profunda e à alocação de grandes arrays locais.

### Exemplo não vulnerável

```c
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void recursaoLimitada(int n) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    if (n <= 0) {
        return; // Condição de parada
    }
    int *array = (int*)malloc(10000 * sizeof(int)); // Aloca na heap
    if (array == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        return;
    }
    // ... uso do array ...
    free(array);
    recursaoLimitada(n - 1);
}

int main() {
    recursaoLimitada(100000);
    return 0;
}
```
# Strings (melhorado)

Em C, strings são arrays de caracteres terminados com o caractere nulo '\0'. Isso significa que a informação sobre o tamanho da string é determinada pela posição do primeiro '\0' no array — o próprio array não guarda seu comprimento.

Este documento explica as formas comuns de declarar e manipular strings em C, mostra funções da biblioteca padrão, exemplos seguros (evitando overflow) e armadilhas comuns.

## Declaração e diferenças importantes

1. Array de caracteres (espaco alocado e modificável):

```c
#include <stdio.h>

int main(void) {
    char s[] = "Hello"; // tamanho 6: 'H' 'e' 'l' 'l' 'o' '\0'
    s[0] = 'h';          // permitido
    printf("%s\n", s);
    return 0;
}
```

2. Ponteiro para literal (geralmente em memória somente leitura):

```c
const char *p = "Hello";
// p[0] = 'h'; // NÃO faça isso — comportamento indefinido
printf("%s\n", p);
```

**Diferenças:** o array tem espaço alocado e pode ser modificado; o literal pode estar em memória de texto e não deve ser alterado.

## Acessando e iterando

Você pode acessar caracteres por índice ou com ponteiros:

```c
char s[] = "abc";
for (size_t i = 0; s[i] != '\0'; ++i) putchar(s[i]);

for (char *ptr = s; *ptr; ++ptr) putchar(*ptr);
```

## Funções úteis de <string.h>

- strlen(s): tamanho (size_t), não conta o '\0'.
- strcpy(dest, src): copia, NÃO segura (pode causar overflow).
- strncpy(dest, src, n): copia até n bytes; cuidado com falta de '\0'.
- strcat(dest, src): concatena, NÃO segura.
- strncat(dest, src, n): concatena até n bytes do src.
- strcmp(a,b): compara lexicograficamente.
- strchr(s, c): encontra primeira ocorrência do caractere c.
- strrchr(s, c): encontra última ocorrência.
- strstr(haystack, needle): encontra substring.

Observação: funções que terminam com "n" geralmente recebem um limite e são mais seguras quando usadas corretamente — mas exigem atenção com o terminador '\0'.

## Exemplos seguros

1) Copiar com tamanho controlado (strncpy com garantia de '\0'):

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Olá mundo";
    char dest[8];
    strncpy(dest, src, sizeof(dest) - 1); // deixa 1 byte para '\0'
    dest[sizeof(dest) - 1] = '\0';        // garante terminador
    printf("dest = %s\n", dest);
    return 0;
}
```

2) Concatenar sem overflow (usar strncat corretamente):

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[16] = "Oi";
    const char *s = " Mundo!";
    strncat(buf, s, sizeof(buf) - strlen(buf) - 1);
    printf("%s\n", buf);
    return 0;
}
```

3) Ler entrada do usuário com fgets (evitar gets):

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char line[64];
    printf("Digite algo: ");
    if (fgets(line, sizeof(line), stdin)) {
        // remover o '\n' final, se presente
        line[strcspn(line, "\n")] = '\0';
        printf("Você digitou: '%s'\n", line);
    }
    return 0;
}
```

## Armadilhas comuns

- Esquecer o terminador '\0' ao usar funções com limite (strncpy): sempre garanta o '\0'.
- Usar strcpy/strcat sem garantir espaço suficiente é fonte de buffer overflow.
- Tratar ponteiros para literais como modificáveis causa comportamento indefinido.
- Comparar strings com `==` (isso compara ponteiros, não conteúdo). Use `strcmp`.
- Presumir que sizeof(array) dá o tamanho da string: ele retorna o tamanho do array (incluindo '\0') — só funciona para arrays, não para ponteiros.

## Funções de memória que ajudam

- memcpy: cópia de bytes (não processa '\0'), útil para buffers binários.
- memset: preencher memória com um valor.

## Exemplos rápidos de busca e comparação

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "abra cadabra";
    char *p = strchr(s, 'c');
    if (p) printf("Encontrado: %s\n", p); // imprime a substring a partir de 'c'

    if (strstr(s, "cad")) puts("Contém 'cad'");

    if (strcmp("a", "b") < 0) puts("'a' < 'b'");
    return 0;
}
```

## Boas práticas

- Sempre dimensione buffers com folga para o terminador '\0'.
- Prefira funções que aceitem limites e sempre verifique comprimentos com `strlen` antes de operações que escrevem em buffers.
- Para novos códigos, considere funções modernas (quando disponíveis) como `snprintf` para formatação segura de strings.

## Exercícios sugeridos

1. Escreva uma função que inverte uma string in-place.
2. Implemente `starts_with(const char *s, const char *prefix)` retornando 1/0.
3. Leia várias linhas com `fgets` até EOF e conte palavras.

---

Referências: `string.h` (man pages), CERT C Secure Coding.
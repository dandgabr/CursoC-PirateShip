# Instruções (statements)

## Definição de instrução

Uma instrução é qualquer comando terminado em ponto e vírgula, como atribuição, chamada de função ou declaração de variável. Por exemplo:

```C
int x;         // declaração
int x = 123;   // inicialização
x = 123;       // atribuição
z = x + y;     // expressão com soma
x++;           // incremento
printf("Hello World!"); // chamada de função
```

## Classificação

- **Declarações de expressão (Expression statements):** São formados por expressões seguidas de ponto e vírgula, como atribuições e aritméticas.
- **Instruções de chamada de função(Function call statements):** São comandos que executam funções, como printf.
- **Declarações compostas (Compound statements):** Blocos de código compostos por múltiplas instruções agrupadas por chaves { ... }.​

## Blocos de instruções

As instruções são executadas sequencialmente, na ordem em que aparecem dentro do corpo da função (por exemplo, dentro da função main). Cada instrução determina uma ação ou um cálculo que será realizado pelo programa.

Exemplo de bloco:

```C
int main(void) {
    int x = 123;
    int y = 456;
    int z = x + y;
    printf("O resultado é %d\n", z);
}
// Saída: O resultado é 579
```

## Observação

A sessão ressalta que toda instrução termina com ponto e vírgula, exceto blocos delimitados por { ... }, e que usar blocos de código aumenta a legibilidade e organiza instruções complexas em agrupamentos lógicos.

# Controle condicional

Declarações de seleção (selection statements) permitem decidir, com base em uma condição, quais comandos de código serão executados. Elas são essenciais para controle de fluxo e tomadas de decisão em qualquer programa

## IF

O comando if executa uma instrução ou bloco de instruções apenas se a condição for verdadeira (qualquer valor diferente de zero):

```C
#include <stdio.h>
int main(void) {
    int x = 123;
    if (x < 150)
        printf("O x é menor que 150.\n");
```

Neste caso, a mensagem será exibida porque a condição é verdadeira. O bloco pode incluir múltiplas instruções, delimitadas por chaves {}.​

## IF-ELSE

O comando if-else permite, além de executar código se a condição for verdadeira, executar outro bloco se for falsa:

```C
#include <stdio.h>
int main(void) {
    int x = 123;
    if (x < 150)
        printf("O x é menor que 150.\n");
    else
        printf("O x não é menor que 150.\n");
}
```

Em ambos os casos, uma das mensagens é impressa, dependendo do valor de x.

## Switch

Switch é usado para múltiplas alternativas, útil quando uma variável precisa ser comparada com diversos valores conhecidos. O valor da expressão é testado contra vários casos case e, ao encontrar correspondência, executa o bloco associado até encontrar um break, ou até terminar o bloco do switch:

```C
#include <stdio.h>
int main(void) {
    int x = 123;
    switch (x) {
        case 100:
            printf("O valor de x é 100.\n");
            break;
        case 123:
            printf("O valor de x é 123.\n");
            break;
        case 456:
            printf("O valor de x é 456.\n");
            break;
        default:
            printf("Valor fora das opções.\n");
            break;
    }
}
```

## Boas Práticas

Sempre utilizar {} para delimitar blocos, mesmo quando há apenas uma instrução, o que melhora legibilidade e evita erros.​

Em switch, o uso de break é importante para evitar execução de múltiplos casos (fall-through).

# Laços de repetição

## While

O while é utilizado para repetir instruções enquanto uma condição permanece verdadeira. O teste é feito antes da execução do bloco, significando que o loop pode não ser executado nenhuma vez se a condição for falsa no início:

```C
#include <stdio.h>
int main(void) {
    int mycounter = 0;
    while (mycounter < 5) {
        printf("Hello World from a while loop.\n");
        mycounter++;
    }
}
// Saída: A mensagem será exibida 5 vezes
```

## Do-While

O do-while garante que o bloco de instruções seja executado ao menos uma vez, já que a condição é testada no final. Perfeito para cenários em que a primeira execução do corpo do loop deve ocorrer independentemente da condição:

```C
#include <stdio.h>
int main(void) {
    int mycounter = 0;
    do {
        printf("Hello World from a do-while loop.\n");
        mycounter++;
    } while (mycounter < 5);
}
// Saída: A mensagem será exibida 5 vezes
```

Mesmo que a condição seja falsa inicialmente, o código do bloco será executado pelo menos uma vez.

## For

O for é um loop estruturado com inicialização, condição e atualização integradas. Ideal para operações com índice, iteração sobre arrays ou quando desejamos um controle claro do número de repetições:

```C
#include <stdio.h>
int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("Hello World from a for loop.\n");
    }
}
// Saída: A mensagem será exibida 5 vezes
```

Todos os elementos do controle do loop (inicialização, condição, incremento) são definidos na primeira linha, tornando-o compacto e fácil de ler. Também pode ser usado para iterar sobre arrays e estruturas semelhantes.​

## Boas práticas

- O while pode executar zero ou mais vezes se a condição inicial for falsa.
- O do-while sempre executa pelo menos uma vez, independentemente da condição.
- O for é preferível quando o número de repetições é conhecido de antemão; seu uso é convencional em iteração de arrays, contadores e situações controladas.​

## Break e continue

### Break

O break serve para interromper imediatamente a execução do loop, saindo completamente dele, mesmo que a condição do loop ainda fosse verdadeira.

```C
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // Sai do loop quando i for 5
        }
        printf("%d ", i);
    }
    printf("\nFim do loop com break.\n");
    return 0;
}
```

Neste exemplo, o loop for normalmente executaria até i chegar a 9, porém o break força a saída quando i == 5, interrompendo a repetição.​

### Continue

O continue provoca a interrupção da iteração atual do loop, fazendo a execução ir imediatamente para a próxima iteração, sem executar o restante do código do corpo do loop naquela iteração.

```C
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;  // Pula os números pares
        }
        printf("%d ", i);
    }
    printf("\nFim do loop com continue.\n");
    return 0;
}
```

Aqui, para cada número par, o continue pula o printf e passa para a próxima iteração, imprimindo somente os números ímpares.​
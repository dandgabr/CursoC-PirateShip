# Introdução

## Criação
A linguagem C foi criada em 1972 por Dennis Ritchie no Bell Labs e tornou-se um dos pilares do desenvolvimento de sistemas, especialmente devido à sua portabilidade e eficiência. Desde sua origem até a publicação do padrão C23 em 2024, C passou por marcos fundamentais que influenciaram diversos paradigmas e tecnologias de software.

## Origem

C foi desenvolvida para reescrever o kernel do Unix, originalmente escrito em Assembly, visando maior portabilidade entre diferentes arquiteturas. Sua linhagem inclui influências das linguagens ALGOL, CPL, BCPL e B, as quais buscavam equilíbrio entre abstração e acesso direto ao hardware.

## Padrões

- [ISO/IEC 9899:1999](https://www.iso.org/standard/29237.html)
- [ISO/IEC 9899:2011](https://www.iso.org/standard/57853.html)
- [ISO/IEC 9899:2018](https://www.iso.org/standard/74528.html)
- [ISO/IEC 9899:2024](https://www.iso.org/standard/82075.html)

## Evoluções
- **C99:** Introdução de cabeçalhos como `<complex.h>`, `<stdbool.h>`, `<stdint.h>`, suporte a long long, _Complex, arrays de tamanho variável, operadores inline, restrição, comentários de linha única, e flexibilidade nas declarações de variáveis.
- **C11:** Adição de `<threads.h>`, `<stdatomic.h>`, `<stdalign.h>`, `<uchar.h>`, tipos e palavras reservadas para multithreading, operações atômicas, alinhamento, inicialização genérica, teste estático e mais.
- **C17:** Focou na correção de bugs do C11, sem introdução de novos recursos importantes.
- **C23:** Destaca os cabeçalhos `<stdckdint.h>` e `<stdbit.h>` para operações aritméticas verificadas e manipulação de bits, com aprimoramentos para aplicações de baixo nível e hardware embarcado.

#  Estrutura básica

A estrutura básica de um programa em C segue basicamente:
- **Diretivas de pré-processador:** diretivas de inclusão `#include` ou `#define`.
- **Blocos de códigos:** Funções ou protótipos de funções.
- **Função principal:** Funções `main()` que indica onde o processamento do programa deve começar.

## Diretivas de compilação

### Inclusão de arquivo
A diretiva `#include` insere o conteúdo de um arquivo de cabeçalho (.h) no código fonte, tornando acessíveis declarações e definições de outros módulos.

#### Bibliotecas padrão do C
| Biblioteca (.h) | Descrição                                                                                      |
|-----------------|------------------------------------------------------------------------------------------------|
| assert.h        | Contém a macro assert(), usada para diagnósticos. Se a expressão for falsa, o programa aborta. |
| complex.h       | Fornece funções para manipular números complexos.                                              |
| ctype.h         | Funções para testar e mapear caracteres.                                                       |
| errno.h         | Define o valor da macro errno, usado para relatar erros.                                       |
| fenv.h          | Funções para controlar o ambiente de ponto flutuante.                                          |
| float.h         | Define limites e outras propriedades dos tipos de ponto flutuante.                             |
| inttypes.h      | Tipos de inteiros de largura específica e macros de formato para printf e scanf.               |
| iso646.h        | Define macros para operadores alternativos (por exemplo, and para &&).                         |
| limits.h        | Define os limites dos tipos inteiros.                                                          |
| locale.h        | Funções para adaptar o comportamento do programa a diferentes culturas.                        |
| math.h          | Funções matemáticas comuns.                                                                    |
| setjmp.h        | Funções para "saltos" não locais (alternativa para goto entre funções).                        |
| signal.h        | Funções para tratamento de sinais.                                                             |
| stdalign.h      | Define a macro alignas e alignof.                                                              |
| stdarg.h        | Fornece mecanismos para acessar argumentos de funções variádicas.                              |
| stdatomic.h     | Operações atômicas para programação concorrente.                                               |
| stdbool.h       | Define a macro bool e true/false.                                                              |
| stdckdint.h     | Nova biblioteca para detecção de estouro de inteiros.                                          |
| stddef.h        | Define vários tipos e macros padrão, como size_t e NULL.                                       |
| stdint.h        | Tipos inteiros de largura fixa.                                                                |
| stdio.h         | Funções de entrada/saída padrão.                                                               |
| stdlib.h        | Funções de utilidade geral.                                                                    |
| string.h        | Funções para manipulação de strings.                                                           |
| threads.h       | Suporte para multi-threading.                                                                  |
| time.h          | Funções de data e hora.                                                                        |
| uchar.h         | Suporte a caracteres Unicode.                                                                  |
| wchar.h         | Suporte a caracteres largos.                                                                   |
| wctype.h        | Funções para testar e mapear caracteres largos.                                                |

### Macros e constantes
A diretiva `#define` cria macros e constantes simbólicas, substituindo o nome definido por um valor ou trecho de código antes da compilação. Isso facilita a manutenção e a clareza do código. 

### Condicionais de compilação
Direções como ``#if``, ``#else``, ``#elif`` (else if) e ``#endif`` permitem incluir ou excluir seções de código dependendo de condições pré-definidas. 


```c
/* Diretiva de inclusão de arquivo*/
#include <stdio.h> // Biblioteca padrão de entrada e saída

/* Definição de constantes */
#define PI 3.14159 // Definição de uma constante para o valor de PI

/* Função principal */
int main() {
    printf("Olá, Mundo!\n"); // Imprime "Olá, Mundo!" na tela
    printf("Valor de PI: %.5f\n", PI); // Imprime o valor de PI com 5 casas decimais
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
```

A estrutura básica de um programa em C segue o exemplo abaixo

```c
tipo main(argumentos) {
    // comentários do código
}
```


```c
void main(void) { 
}
```

# Comentários

Existem dois tipos de comentários.

```c
//comentário de uma linha
```
```c
/*
Comentários de múltiplas linhas
Essa é a segunda linha do comentário
*/

# Tipos de dados

## Variáveis

Uma é um espaço reservado na memória do computador para armazenar dados temporariamente durante a execução de um programa. Ela funciona como uma "caixa" que guarda uma informação que pode ser alterada durante o programa. Cada variável tem um nome (identificador) que serve para referenciar esse espaço de memória, e um tipo que determina o tipo de dado que pode armazenar (como números inteiros, caracteres, valores booleanos etc.).

```c
<tipo> <nome_da_variável>; //Para declaração de uma variável
<tipo> <nome_da_variável_01>, <nome_da_variável_02>;
```

## Tipos primários
| Palavra Chave (Keyword) | Tipo (Interpretado)                | Descrição                                                                                                                                                                                            | Tamanho em Bytes (Comum em 32/64-bit)                                     |
|-------------------------|------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------|
| void                    | Vazio / Incompleto                 | Um tipo especial que indica a ausência de valor. Usado para funções que não retornam nada ou para ponteiros genéricos (void*).                                                                       | N/A (Não se pode declarar uma variável do tipo void)                      |
| char                    | Caractere                          | O tipo de dado mais básico, garantido pelo padrão como tendo sizeof(char) == 1. Armazena um único caractere ou um pequeno inteiro. Se é signed ou unsigned por padrão é dependente da implementação. |                                                                    1 byte |
| int                     | Inteiro                            | O tipo inteiro "natural" da arquitetura do processador. É implicitamente signed. Deve armazenar no mínimo o intervalo [-32767, +32767] (16 bits).                                                    | 4 (Comum em arquiteturas 32 e 64-bit modernas)                            |
| float                   | Ponto Flutuante (Precisão Simples) | Armazena números reais (fracionários). Geralmente implementado como IEEE 754 de 32 bits.                                                                                                             |                                                                   32 bits |
| double                  | Ponto Flutuante (Precisão Dupla)   | Armazena números reais com precisão significativamente maior que float. Geralmente implementado como IEEE 754 de 64 bits.                                                                            |                                                                   64 bits |
| bool                   | Booleano                           | (Padrão C99+) Tipo especial que armazena apenas os valores 0 (falso) ou 1 (verdadeiro). (Frequentemente usado via alias bool do header <stdbool.h>).                                                 | 1 (Embora represente 1 bit, ocupa 1 byte para ser endereçável na memória) |


```c
int main() {
    char caractere1 = 'A'; // Declaração de uma variável do tipo caractere e atribui o valor A
    char caractere2; // Declaração de uma variável do tipo caractere e não atribui valor a ela

    int numero1, numero2 = 10; // Decl1ara duas variáveis, mas atribui o valor 10 apenas a numero2

    double numero3 = 3.14 // Declaração de uma variável do tipo ponto flutuante e atribui o valor 3.14

    return 0;
}
```

# Modificadores de variável

## Tabelas de modificadores

| Modificador | Descrição                                                                                                                                        |
|-------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| short       | Diminui o tamanho da variável do tipo inteiro, geralmente para 2 bytes. Usado para economizar memória quando valores pequenos são suficientes.   |
| long        | Aumenta o tamanho da variável do tipo inteiro para pelo menos 4 bytes, para armazenar valores maiores.                                           |
| long long   | Estende ainda mais o tamanho do inteiro para pelo menos 8 bytes, permitindo armazenar valores muito grandes.                                     |
| unsigned    | Indica que a variável armazena apenas valores positivos (incluindo zero), eliminando o bit de sinal e dobrando o valor máximo positivo possível. |
| signed      | Indica que a variável pode armazenar valores positivos e negativos. É o padrão para tipos inteiros se não especificado explicitamente.           |

### Padrão de uso

<modificadores> <tipo_da_variável> <nome_de_variável> = <valor_de_inicialização>;

Exemplo:

```c
unsigned short int
long long int
```

# Tipos não primários

| Tipo     | Descrição                                                                                              |
|----------|--------------------------------------------------------------------------------------------------------|
| enum     | Tipo enumerado, usado para definir um conjunto de constantes nomeadas inteiras.                        |
| struct   | Estrutura, tipo composto que agrupa diferentes tipos de dados sob um único nome.                       |
| union    | União, semelhante a struct, mas os campos compartilham o mesmo espaço em memória, economizando espaço. |
| array    | Vetor ou matriz, coleção de elementos do mesmo tipo armazenados sequencialmente.                       |
| pointer* | Ponteiro, variável que armazena o endereço de outra variável.                                          |

# Limitações nos nomes
Os nomes de variáveis e funções na linguagem C têm as seguintes limitações principais:
- Devem começar com uma letra (a-z, A-Z) ou um sublinhado (_). Não podem começar com números.
- Podem conter letras, números e o caractere sublinhado (_) após o primeiro caractere.
- Não podem ser iguais a palavras reservadas da linguagem (como int, float, return, etc.).
- Os nomes são case sensitive, ou seja, letras maiúsculas e minúsculas são consideradas diferentes (ex: variável "Valor" é diferente de "valor").
- Quanto ao tamanho, variáveis com até 31 ou 32 caracteres são aceitas pelas implementações clássicas, mas atualmente não há um limite estrito definido pela linguagem, ficando a cargo do compilador. Alguns compiladores modernos aceitam nomes muito longos.
- Os nomes não podem coincidir com nomes de funções já declaradas (incluindo funções da biblioteca padrão) dentro do mesmo escopo para evitar conflitos.


# Imprimindo dados

## Entrada e saída padrão

A biblioteca padrão stdio em C (define no arquivo de cabeçalho `<stdio.h>`) é responsável pelas operações básicas de entrada e saída padrão (Input/Output) no programa. O nome stdio vem da expressão inglesa "standard input-output", que significa "entrada/saída padrão". Essa biblioteca contém diversas funções essenciais para interagir com o usuário ou para manipulação de arquivos, como leitura de dados do teclado, escrita de dados na tela, leitura e escrita em arquivos etc.

Funções mais comuns da biblioteca stdio:
- **printf():** imprime dados formatados na tela.
- **scanf():** lê dados do teclado.
- **fopen():** abre arquivos.
- **fclose():** fecha arquivos.
- **fprintf():** escreve em um arquivo.
- **fscanf():** lê de um arquivo.

Para mais detalhes consulte https://petbcc.ufscar.br/stdio/ .

## Printf

A função printf() tem a função de formatar e imprimir uma série de caracteres e valores na saída padrão, que normalmente é o console ou a tela do computador.

### Valores esperados
**Recebe:** a string que será impressa na saída padrão, as variáveis indicadas na string para devida formatação.

**Retorna:** o número de caracteres escritos, ou, caso a operação não tenha sido bem sucedida, um valor negativo.

## Sintaxe

```c
    printf("string a ser exibida", variável_01, variável_02);
```
Exemplo

```c
    printf("Hello Word!");
    printf("Valor: %i", variável_inteira);
```

## Especificadores

Servem para formatar o dado que será exibido.

| Especificador | Descrição                                                                                   |
|---------------|---------------------------------------------------------------------------------------------|
| %c            | Um único caractere (char)                                                                   |
| %s            | String (sequência de caracteres terminada em nulo)                                          |
| %d            | Inteiro decimal com sinal (signed int)                                                      |
| %i            | Inteiro decimal com sinal (idêntico a %d)                                                   |
| %u            | Inteiro decimal sem sinal (unsigned int)                                                    |
| %o            | Inteiro em formato octal                                                                    |
| %x            | Inteiro em formato hexadecimal (letras minúsculas)                                          |
| %X            | Inteiro em formato hexadecimal (letras maiúsculas)                                          |
| %f            | Número de ponto flutuante (float/double)                                                    |
| %e            | Número em notação científica (com 'e' minúsculo)                                            |
| %E            | Número em notação científica (com 'E' maiúsculo)                                            |
| %g            | Usa %f ou %e, escolhe o melhor formato                                                      |
| %G            | Usa %F ou %E, escolhe o melhor formato                                                      |
| %p            | Endereço de memória (ponteiro)                                                              |
| %n            | Não imprime nada, armazena número de caracteres escritos até agora (usado com ponteiro int) |
| %%            | Imprime o símbolo %                                                                         |
| %Lf           | Número de ponto flutuante do tipo long double                                               |
| %hd           | Inteiro curto (short int) com sinal                                                         |
| %hu           | Inteiro curto sem sinal (unsigned short int)                                                |
| %ld           | Inteiro longo (long int) com sinal                                                          |
| %lu           | Inteiro longo sem sinal (unsigned long int)                                                 |
| %lld          | Inteiro bem longo (long long int) com sinal                                                 |
| %llu          | Inteiro bem longo sem sinal (unsigned long long int)                                        |

Esta tabela não contém todos os especificadores disponíveis para uso.

### Formatação do especificador

Sintaxe:

`%[flags][largura][.precisão][tamanho]tipo`

- **flags:** controlam o alinhamento, preenchimento com zeros, sinais etc. (ex.: - para alinhamento à esquerda, 0 para preenchimento com zeros)
- **largura:** número mínimo de caracteres a serem exibidos, preenchendo espaços se o valor for menor
- **precisão:** define a quantidade de casas decimais para números de ponto flutuante ou o número máximo de caracteres a imprimir para strings
- **tamanho:**  indica o tamanho do tipo do argumento (ex.: l para long)
- **tipo:**  especifica o tipo de dado (exemplo: d decimal, u unsigned decimal, x hexadecimal, o octal, f ponto flutuante, c caractere, s string)

## Caracteres de escape

Servem para controlar o comportamento quando a função irá imprimir.

| Caractere de Escape | Descrição                                   |
|---------------------|---------------------------------------------|
| \n                  | Nova linha (quebra de linha)                |
| \t                  | Tabulação horizontal (tab)                  |
| \\\\                  | Barra invertida (caractere $$)               |
| \\\'                  | Apóstrofo (caractere ')                     |
| \\\"                  | Aspas duplas (caractere ")                  |
| \r                  | Retorno de carro (volta ao início da linha) |
| \b                  | Backspace (apaga caractere anterior)        |
| \a                  | Alerta sonoro (bip)                         |
| \v                  | Tabulação vertical                          |
| \f                  | Avanço de página (form feed)                |
| \0                  | Caractere nulo (fim de string)              |

# Números em outras bases

- **Binários:** Prefixo 0b
- **Hexadecimal:** Prefixo 0x
- **Octal:** Prefixo 0

Exemplo


```c
int variavel_binaria = 0b1011;
int variavel_hexadecimal = 0x1AFC;
```

# Ocupação de memória

Para obter o espaço ocupado da memória por uma variável utilize o operador sizeof.

**Entrada:** uma variável ou dado qualquer.

**Saída:** a quantidade de memória ocupada por uma determinada variável ou dado no tipo size_t.

Exemplo:


```c
printf("Tamanho de int: %zu bytes\n", sizeof(int));
printf("Tamanho de char: %zu bytes\n", sizeof(char));
```

# Char não sinalizado

Quando não sinalizado as variáveis conseguem armazenar 8 bits de informação (1 byte), variando de 00000000 (0 em decimal) até 11111111 (255 em decimal).

Os limites podem ser visualizados através do código abaixo.


```c
#include <stdio.h>
#include <limits.h>

int main() {
    unsigned char uchar_min = 0;
    unsigned char uchar_max = UCHAR_MAX;

    printf("Tamanho mínimo de um char sem sinal: %u\n", uchar_min);
    printf("Tamanho máximo de um char sem sinal: %u\n", uchar_max);
    printf("Em octal: %#o\n", uchar_max); // Exibe em octal
    printf("Em hexadecimal: %#x\n", uchar_max); // Exibe em hexadecimal
}
```

# Operadores de deslocamento 

Os operadores de deslocamento são usados para mover os bits de um valor para a esquerda ou para a direita, modificando assim o valor binário. São eles:
- **Operador de deslocamento à esquerda (<<):** desloca os bits do operando para a esquerda pelo número especificado de posições. Os bits deslocados para fora da extremidade esquerda são descartados, e os bits vazios à direita são preenchidos com zeros. Esse deslocamento é equivalente a multiplicar o número por 2 elevado ao número de posições deslocadas. Por exemplo, x << 1 multiplica x por 2, e x << 2 multiplica x por 4.
- **Operador de deslocamento à direita (>>):** desloca os bits do operando para a direita pelo número especificado de posições. Para tipos sem sinal, os bits vazios à esquerda são preenchidos com zeros (deslocamento lógico). Para tipos com sinal, o preenchimento depende da implementação: pode ser com zeros (lógico) ou com o bit de sinal (aritmético), que mantém o sinal do número. O deslocamento à direita é equivalente a uma divisão inteira por uma potência de 2, truncando o resultado.


```c
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int a = 5; // 101 em binário
    int b = 2; // 10 em binário
    int resultado_esquerda = a << b; // Desloca os bits de 'a' para a esquerda em 'b' posições
    int resultado_direita = a >> b;  // Desloca os bits de 'a' para a direita em 'b' posições

    printf("Valor original de a: %d\n", a);
    printf("Resultado do deslocamento à esquerda (a << %d): %d\n", b, resultado_esquerda);
    printf("Resultado do deslocamento à direita (a >> %d): %d\n", b, resultado_direita);

    return 0;
}
```

# Armazenamento de dados

## Little-endian e Big-endian

Little-endian e big-endian são dois modos diferentes de armazenar bytes de dados multibyte (como números inteiros) na memória de um computador, e eles determinam a ordem pela qual os bytes são guardados e lidos.

### Big-endian

No sistema **big-endian**, o byte mais significativo (aquele de maior valor, mais à esquerda no número) é armazenado no menor endereço de memória, ou seja, primeiro.  
Por exemplo, o número hexadecimal `0x12345678` será armazenado na memória na ordem: `12 34 56 78`.  
Essa forma é considerada mais intuitiva porque segue a mesma ordem como escrevemos números, do mais significativo para o menos significativo.  
É comumente usado em protocolos de rede (chamado "ordem de bytes de rede") para garantir consistência na troca de dados entre diferentes sistemas.

### Little-endian

No sistema **little-endian**, o byte menos significativo (aquele de menor valor, mais à direita no número) é armazenado no menor endereço de memória, ou seja, primeiro.  
Então, o mesmo número `0x12345678` será armazenado como: `78 56 34 12`.  
Esse método é o mais utilizado em CPUs como as da arquitetura x86 (processadores Intel) e pode ser mais eficiente para certas operações computacionais que manipulem o byte menos significativo primeiro.

### Como funciona a diferença na prática

- Big-endian armazena bytes do mais significativo para o menos significativo.
- Little-endian armazena bytes do menos significativo para o mais significativo.

### Vantagens e uso

- Big-endian é mais natural para leitura humana e usado em redes para garantir interoperabilidade.
- Little-endian pode ser mais eficiente para o processador, especialmente em operações aritméticas, e é predominante em sistemas modernos pessoais.

## Mostrando endereço dos dados

> **Observação:** Consulte a arquitetura que está utilizando para validar se os valores mostrados estão em Little-endian (x86 ou ARM) ou Big-endian (RISC)

Para mostrar endereços de memória utilize o operador & antes do nome da variável.

```c
&variável
```
Exemplo:



```c
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int var = 0x0A1B2C3D4;
    printf("Valor de var: %X\n", var);
    printf("Endereço de var: %p\n", (void *)&var);
    return 0;
};
```

# Ponto flutuante

Na implementação padronizada são aceitos dois tipos o float (4 bytes) e double (8 bytes).

A implementação para precisão simples segue o padrão [IEEE 754](https://en.wikipedia.org/wiki/IEEE_754).

A estrutura geral com 32 bits 

```math 
\underbrace{S}_{sinal} \qquad \underbrace{E_{7} E_{6} E_{5} E_{4} E_{3} E_{2} E_{1} E_{0}}_{expoente} \qquad \underbrace{F_{-1}F_{-2}...F_{-23}}_{fra\c{c}ão}
```

Isso pode ser traduzido por:

```math
Valor =  (-2S+1)(2^{127-expoente})(1+valor\_fracionado)
```

A versão 32 bits é conhecida como precisão simples e a versão de 64 bits é conhecida como dupla.

Ficando a formula para 64 bits como

```math
Valor =  (-2S+1)(2^{1023-expoente})(1+valor\_fracionado)
```

Exemplo para um número de 32 bits

```math
\underbrace{1}_{sinal} \qquad \underbrace{01111110}_{expoente} \qquad \underbrace{11111111111111111111001}_{fra\c{c}ão}
```

Aqui, o bit de sinal é 1, o que indica que a string representa um número negativo e que a string está na forma de complemento de 2. Para encontrar o valor real do número, primeiro pegamos o complemento de 2 da string.

```math
\underbrace{0}_{sinal} \qquad \underbrace{10000001}_{expoente} \qquad \underbrace{00000000000000000000111}_{fra\c{c}ão}
```

O que resulta em

```math
Valor 
=  (-2S+1)(2^{127-expoente})(1+valor\_fracionado) \\
= (-2 \times 0+1)(2^{127-129})(1+2^{-1}+2^{-2}+2^{-3}) \\
= -0,25 \times (1+0,5+0,25+0,125) \\
= -0,46875
```

# Leitura de dados

A função **scanf()** é uma função padrão da biblioteca `stdio.h` utilizada para realizar a leitura de dados formatados a partir da **entrada padrão** (geralmente o teclado).

## Funcionamento da scanf()

- **Entrada:** Recebe como primeiro argumento uma **string de formato** que indica os tipos dos valores a serem lidos, usando especificadores como `%d` (inteiros), `%f` (floats), `%c` (caracteres), entre outros.
- Os argumentos subsequentes são os **endereços das variáveis** onde os valores lidos serão armazenados, geralmente passados com o operador `&`.
- A função lê e converte os dados da entrada padrão conforme a string de formato e armazena nas variáveis correspondentes.

## Detalhes importantes

- A string de formato é processada da esquerda para a direita, e os dados na entrada são lidos e convertidos conforme especificado.
- Espaços na string de formato consomem quaisquer espaços, tabs ou quebras de linha na entrada até encontrar dados.
- Caracteres literais na string de formato devem corresponder exatamente na entrada, ou a leitura para.
- Cada especificador lê um "campo" da entrada que termina quando um caractere inválido para o tipo é encontrado ou quando um espaço ocorre.

- **Retorno:** scanf retorna o número de valores convertidos e atribuídos com sucesso.
- Retorna **EOF** (geralmente -1) se encontrar o fim do arquivo antes de ler qualquer dado.
- Em caso de erro parcial, retorna o número de leituras bem-sucedidas antes do erro.

## Sintaxe

scanf("%tipo_de_dado_01 %tipo_de_dado_02 %tipo_de_dado_03". &varíavel_01, &varíavel_02, &varíavel_03)

# Operadores

## Aritméticos

| Operador | Descrição                                      |
|----------|------------------------------------------------|
| +        | Soma dois valores                              |
| -        | Subtrai o valor à direita do valor à esquerda  |
| *        | Multiplica dois valores                        |
| /        | Divide o valor à esquerda pelo valor à direita |
| %        | Retorna o resto da divisão inteira (módulo)    |
| ++       | Incrementa o valor de uma variável em 1        |
| --       | Decrementa o valor de uma variável em 1        |


```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    a++;
    printf("a++ -> %d\n", a);

    b--;
    printf("b-- -> %d\n", b);

    return 0;
}
```

## Atribuição

| Operador | Descrição                                           |
|----------|-----------------------------------------------------|
| =        | Atribui o valor à direita a uma variável à esquerda |

## Atribuição composta

| Operador | Descrição                                                                           |
|----------|-------------------------------------------------------------------------------------|
| +=       | Soma o valor à direita ao valor da variável e atribui o resultado                   |
| -=       | Subtrai o valor à direita do valor da variável e atribui o resultado                |
| *=       | Multiplica o valor da variável pelo valor à direita e atribui o resultado           |
| /=       | Divide o valor da variável pelo valor à direita e atribui o resultado               |
| %=       | Aplica o módulo entre o valor da variável e o valor à direita e atribui o resultado |


```c
#include <stdio.h>

int main() {
    int a = 10;

    printf("Valor inicial: %d\n", a);

    a += 5;  // equivalente a: a = a + 5
    printf("Após a += 5: %d\n", a);

    a -= 2;  // equivalente a: a = a - 2
    printf("Após a -= 2: %d\n", a);

    a *= 3;  // equivalente a: a = a * 3
    printf("Após a *= 3: %d\n", a);

    a /= 4;  // equivalente a: a = a / 4
    printf("Após a /= 4: %d\n", a);

    a %= 3;  // equivalente a: a = a % 3
    printf("Após a %%= 3: %d\n", a);

    return 0;
}
```

## Booleano
O arquivo de cabeçalho <stdbool.h> define o tipo bool, uma macro para o tipo interno _Bool, e as constantes simbólicas true e false, correspondendo aos valores 1 e 0, respectivamente.

O exemplo aqui de uso:


```c
#include <stdio.h>
#include <stdbool.h>  // Inclui o suporte a booleanos

int main() {
    bool ligado = true;    // Declaração de variável booleana com valor true
    bool desligado = false; // Declaração com valor false

    if (ligado) {
        printf("O sistema está ligado.\n");
    } else {
        printf("O sistema está desligado.\n");
    }

    // Exemplo de uso em expressão condicional
    bool resultado = (5 > 3); // resultado será true, pois 5 é maior que 3
    printf("5 > 3 ? %s\n", resultado ? "true" : "false");

    return 0;
}
```

## Lógicos

| Operador | Descrição                                                              |
|----------|------------------------------------------------------------------------|
| &&       | Operador E lógico: verdadeiro se ambas as expressões forem verdadeiras |
| \|\|     | Operador OU lógico: verdadeiro se uma das expressões forem verdadeira  |
| !        | Operador NÃO lógico: inverte o valor lógico da expressão               |


```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 5, b = 10;

    if (a > 0 && b > 0) {
        printf("a e b são positivos (&&)\n");
    }

    if (a > 0 || b < 0) {
        printf("Pelo menos uma condição é verdadeira (||)\n");
    }

    if (!(a == b)) {
        printf("a não é igual a b (!)\n");
    }

    return 0;
}
```

## Operadores de bit a bit

| Operador | Descrição                                                                      |
|----------|--------------------------------------------------------------------------------|
| &        | AND bit a bit: compara bit a bit retornando 1 somente se ambos os bits forem 1 |
| \|       | OR bit a bit: compara bit a bit retornando 1 se um dos bits for 1              |
| ^        | XOR bit a bit: retorna 1 se os bits forem diferentes                           |
| ~        | NOT bit a bit: inverte cada bit (0 vira 1 e 1 vira 0)                          |
| <<       | Desloca os bits à esquerda, preenchendo com 0 à direita                        |
| >>       | Desloca os bits à direita, descartando os bits deslocados                      |

### Operador AND bit a bit


```c
#include <stdio.h>

int main() {
    int a = 6;   // 0110 em binário
    int b = 3;   // 0011 em binário
    printf("a & b = %d\n", a & b); // resultado: 2 (0010)
    return 0;
}
```

### Operador OR bit a bit


```c
#include <stdio.h>

int main() {
    int a = 6;   // 0110
    int b = 3;   // 0011
    printf("a | b = %d\n", a | b); // resultado: 7 (0111)
    return 0;
}
```

### Operador XOR bit a bit


```c
#include <stdio.h>

int main() {
    int a = 6;   // 0110
    int b = 3;   // 0011
    printf("a ^ b = %d\n", a ^ b); // resultado: 5 (0101)
    return 0;
}
```

### Operador NOT bit a bit


```c
#include <stdio.h>

int main() {
    int a = 6;   // 0110
    printf("~a = %d\n", ~a); // resultado: -7 (usa complemento de dois)
    return 0;
}
```

### Deslocamento


```c
#include <stdio.h>

int main() {
    int a = 6;   // 00000110
    printf("a << 1 = %d\n", a << 1); // resultado: 12 (00001100)
    return 0;
}
```


```c
c
#include <stdio.h>

int main() {
    int a = 6;   // 00000110
    printf("a >> 1 = %d\n", a >> 1); // resultado: 3 (00000011)
    return 0;
}
```

### Incremento e decremento

| Operador | Descrição                                              |
|----------|--------------------------------------------------------|
| ++var    | Pré-incremento: incrementa var antes de usar o valor   |
| var++    | Pós-incremento: usa o valor de var e depois incrementa |
| --var    | Pré-decremento: decrementa var antes de usar o valor   |
| var--    | Pós-decremento: usa o valor de var e depois decrementa |


```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 5;

    printf("Valor inicial de a: %d\n", a);

    printf("Pré-incremento (++a): %d\n", ++a); // incrementa antes de usar (6)
    printf("Após pré-incremento, a = %d\n", a);

    printf("Pós-incremento (a++): %d\n", a++); // usa o valor (6) e incrementa depois
    printf("Após pós-incremento, a = %d\n", a);

    printf("Pré-decremento (--a): %d\n", --a); // decrementa antes de usar (6)
    printf("Após pré-decremento, a = %d\n", a);

    printf("Pós-decremento (a--): %d\n", a--); // usa o valor (6) e decrementa depois
    printf("Após pós-decremento, a = %d\n", a);

    return 0;
}
```

# Procedência

| Prioridade | Operador  | Descrição                                                                                | Ordem de associação   |
|------------|-----------|------------------------------------------------------------------------------------------|-----------------------|
| 1          | [ ]       | Subscrição de matriz                                                                     | Esquerda para direita |
| 1          | ( )       | Chamada de função ou parênteses                                                          | Esquerda para direita |
| 1          | ++ e --   | Sufixo incrementar e decrementar                                                         | Esquerda para direita |
| 1          | ->        | Acesso a membros por meio de ponteiro                                                    | Esquerda para direita |
| 1          | .         | Estrutura e acesso dos membros do sindicato                                              | Esquerda para direita |
| 2          | ++ e --   | Prefixo incrementar e decrementar                                                        | Direita para esquerda |
| 2          | + e -     | Unário mais, menos                                                                       | Direita para esquerda |
| 2          | (type)    | Operador de elenco                                                                       | Direita para esquerda |
| 2          | ! e ~     | NOT lógico e NOT bit a bit                                                               | Direita para esquerda |
| 2          | *         | Operador de desreferência                                                                | Direita para esquerda |
| 2          | &         | Operador de endereçamento                                                                | Direita para esquerda |
| 2          | sizeof    | Determinar o tamanho em bytes                                                            | Direita para esquerda |
| 2          | _Alignof  | Requisito de alinhamento                                                                 | Direita para esquerda |
| 3          | *, / e %  | Multiplicação, divisão e resto                                                           | Esquerda para direita |
| 4          | + e -     | Adição e subtração                                                                       | Esquerda para direita |
| 5          | << e >>   | Deslocamento bit a bit à esquerda e deslocamento bit a bit à direita                     | Esquerda para direita |
| 6          | < e <=    | Operadores relacionais < e <=                                                            | Esquerda para direita |
| 6          | > e >=    | Operadores relacionais > e >=                                                            | Esquerda para direita |
| 7          | == e !=   | Operadores relacionais == e !=                                                           | Esquerda para direita |
| 8          | &         | AND bit a bit                                                                            | Esquerda para direita |
| 9          | ^         | XOR bit a bit, ou seja, OU exclusivo                                                     | Esquerda para direita |
| 10         | \|        | OU bit a bit ou OU inclusivo                                                             | Esquerda para direita |
| 11         | &&        | E lógico                                                                                 | Esquerda para direita |
| 12         | \|\|      | OU lógico                                                                                | Esquerda para direita |
| 13         | ?:        | Ternário condicional                                                                     | Direita para esquerda |
| 14         | =         | Atribuição                                                                               | Direita para esquerda |
| 14         | += e -=   | Adição e subtração aumentadas                                                            | Direita para esquerda |
| 14         | *= e /=   | Multiplicação e divisão aumentadas                                                       | Direita para esquerda |
| 14         | %= e &=   | Restante aumentado e E bit a bit                                                         | Direita para esquerda |
| 14         | ^= e \|=  | OU exclusivo e inclusivo bit a bit aumentado                                             | Direita para esquerda |
| 14         | <<= e >>= | Deslocamento bit a bit aumentado à esquerda e deslocamento bit a bit aumentado à direita | Direita para esquerda |
| 15         | ,         | Vírgula (separador de expressões)                                                        | Esquerda para direita |

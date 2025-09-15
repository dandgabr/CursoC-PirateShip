# 📖 Documentação do Curso C - PirateShip

## 🎯 Visão Geral do Curso

Este minicurso de programação em C foi desenvolvido para ensinar os fundamentos da linguagem de forma prática e progressiva. O curso está estruturado em 6 aulas principais, cada uma com exemplos práticos e exercícios.

## 📚 Conteúdo Programático Detalhado

### Aula 1: Introdução à Linguagem C
**Duração:** 45 minutos  
**Conceitos:**
- História e características da linguagem C
- Estrutura básica de um programa
- Função `main()` e ponto de entrada
- Bibliotecas e diretivas `#include`
- Função `printf()` para saída
- Compilação e execução de programas

**Exemplos Práticos:**
- `hello_world.c`: Primeiro programa em C
- `hello_user.c`: Interação básica com usuário
- `comentarios.c`: Uso de comentários

### Aula 2: Variáveis e Tipos de Dados
**Duração:** 60 minutos  
**Conceitos:**
- Tipos primitivos (`int`, `float`, `double`, `char`)
- Declaração e inicialização de variáveis
- Especificadores de formato (`%d`, `%f`, `%c`, `%s`)
- Função `scanf()` para entrada
- Operadores aritméticos
- Conversão entre tipos

**Exemplos Práticos:**
- `variaveis.c`: Declaração e uso de variáveis
- `calculadora.c`: Operações aritméticas básicas
- `tipos_dados.c`: Demonstração de tipos e tamanhos

### Aula 3: Estruturas de Controle
**Duração:** 75 minutos  
**Conceitos:**
- Estruturas condicionais (`if`, `else`, `else if`)
- Estrutura de seleção (`switch/case`)
- Operadores de comparação e lógicos
- Laços de repetição (`for`, `while`, `do-while`)
- Controle de fluxo (`break`, `continue`)

**Exemplos Práticos:**
- `condicionais.c`: Uso de if/else e switch
- `loops.c`: Diferentes tipos de laços
- `menu.c`: Sistema de menu interativo

### Aula 4: Funções e Modularização
**Duração:** 60 minutos  
**Conceitos:**
- Declaração e definição de funções
- Protótipos de funções
- Passagem de parâmetros
- Retorno de valores
- Escopo de variáveis (local vs global)
- Programação modular

**Exemplos Práticos:**
- `funcoes_basicas.c`: Criação e uso de funções
- `calculadora_modular.c`: Calculadora modularizada
- `biblioteca_math.c`: Biblioteca de funções matemáticas

## 🛠️ Ferramentas Necessárias

### Compilador
- **GCC** (GNU Compiler Collection)
- **Clang** (alternativa)
- **MinGW** (Windows)

### Editores/IDEs Recomendados
- **Visual Studio Code** (com extensões C/C++)
- **Code::Blocks**
- **Dev-C++**
- **CLion** (JetBrains)
- **Vim/Neovim** (para usuários avançados)

### Sistema de Build
- **Make** - Ferramenta de automação de build
- **CMake** - Para projetos maiores

## 🏗️ Estrutura do Projeto

```
CursoC-PirateShip/
├── aula1/              # Introdução e Hello World
│   ├── README.md
│   ├── hello_world.c
│   ├── hello_user.c
│   └── comentarios.c
├── aula2/              # Variáveis e Tipos
│   ├── README.md
│   ├── variaveis.c
│   ├── calculadora.c
│   └── tipos_dados.c
├── aula3/              # Controle de Fluxo
│   ├── README.md
│   ├── condicionais.c
│   └── loops.c
├── aula4/              # Funções
│   ├── README.md
│   └── funcoes_basicas.c
├── exercicios/         # Exercícios práticos
│   ├── README.md
│   └── conversor_temperatura.c
├── bin/                # Executáveis compilados
├── docs/               # Documentação
│   └── documentacao.md
├── Makefile           # Sistema de build
└── README.md          # Documentação principal
```

## 🔧 Como Usar o Sistema de Build

### Comandos Make Disponíveis

```bash
# Compilar todos os exemplos
make all

# Compilar exemplos de uma aula específica
make aula1
make aula2
make aula3
make aula4

# Testar compilação (sem execução interativa)
make test

# Limpar executáveis
make clean

# Mostrar ajuda
make help

# Mostrar informações do projeto
make info
```

### Compilação Manual

```bash
# Compilar um arquivo específico
gcc -Wall -Wextra -std=c99 arquivo.c -o programa

# Executar
./programa
```

## 📋 Lista de Verificação para Estudantes

### Aula 1 - Básico
- [ ] Compilou e executou hello_world.c
- [ ] Entendeu a estrutura básica de um programa C
- [ ] Sabe usar printf() para saída
- [ ] Compreende o uso de comentários

### Aula 2 - Variáveis
- [ ] Declarou variáveis de diferentes tipos
- [ ] Usou scanf() para entrada de dados
- [ ] Realizou operações aritméticas
- [ ] Trabalhou com especificadores de formato

### Aula 3 - Controle
- [ ] Implementou estruturas condicionais
- [ ] Criou laços de repetição
- [ ] Usou operadores lógicos e de comparação
- [ ] Controlou fluxo com break/continue

### Aula 4 - Funções
- [ ] Criou funções simples
- [ ] Passou parâmetros para funções
- [ ] Retornou valores de funções
- [ ] Modularizou um programa

## 🎓 Próximos Passos

Após completar este minicurso, recomenda-se estudar:

1. **Arrays e Strings** - Manipulação de vetores e texto
2. **Ponteiros** - Gerenciamento de memória
3. **Estruturas** - Tipos de dados customizados
4. **Arquivos** - Entrada/saída em arquivos
5. **Alocação Dinâmica** - malloc(), free()
6. **Estruturas de Dados** - Listas, pilhas, filas

## 📞 Suporte

- Consulte a documentação das aulas
- Revise os exemplos práticos
- Pratique com os exercícios propostos
- Participe da comunidade de aprendizagem

---
**Bons estudos, pirata! 🏴‍☠️⚓**
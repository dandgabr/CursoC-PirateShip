// Escreva um programa que inicialize as quatro variáveis anteriores e imprima
// seus valores no console usando a função printf com os especificadores de
// formato corretos (%c, %d, %f).
//
// Solução com comentários passo a passo abaixo. Cada comentário explica o
// raciocínio e a correspondência entre tipo de dado e especificador de
// formato usado em `printf`.

#include <stdio.h>

int main(void) {
		/*
		 Passo 1: Declarar e inicializar quatro variáveis de tipos básicos.
		 "As quatro variáveis anteriores" normalmente referem-se aos tipos
		 elementares estudados: char, int, float e double (ou float).

		 Aqui escolhemos:
		 - char letra     -> armazena um único caractere;
		 - int numero     -> armazena um número inteiro;
		 - float decimal  -> armazena um número com parte fracionária (precisão simples);
		 - double maior   -> armazena um número com parte fracionária (precisão dupla).

		 Observação sobre especificadores em printf:
		 - '%c' para imprimir um `char` como caractere.
		 - '%d' para imprimir um `int` como inteiro decimal.
		 - '%f' para imprimir valores em ponto flutuante. Em chamadas a `printf`,
			 valores do tipo `float` são promovidos a `double` (conversão padrão),
			 então `%f` funciona tanto para `float` quanto para `double` aqui.
		*/

		char letra = 'A';            // inicializa um caractere
		int numero = 2025;          // inicializa um inteiro
		float decimal = 3.14159f;   // inicializa um float (note o sufixo 'f')
		double maior = 2.718281828; // inicializa um double

		/*
		 Passo 2: Imprimir os valores usando `printf` com os especificadores
		 apropriados. Sempre incluir texto explicativo para ficar claro o que
		 está sendo impresso (útil em exercícios e saídas didáticas).
		*/

		printf("Caracter (char)   : %c\n", letra);       // %c -> char
		printf("Inteiro (int)    : %d\n", numero);      // %d -> int
		printf("Real (float)     : %f\n", decimal);     // %f -> float (promovido a double)
		printf("Real (double)    : %f\n", maior);       // %f -> double

		/*
		 Passo 3: Opcional — mostrar formatos com controle de precisão. Aqui
		 imprimimos `decimal` e `maior` com 4 casas decimais para demonstrar o
		 uso de especificadores como '%.4f'. Isso não é obrigatório pelo enunciado,
		 mas é útil para aprender formatação.
		*/

		printf("\nFormatações com precisão:\n");
		printf("float  (4 casas)  : %.4f\n", decimal);
		printf("double (6 casas)  : %.6f\n", maior);

		return 0; // fim do programa
}
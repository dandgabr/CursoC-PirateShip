// Solução: declara e inicializa quatro variáveis (char, int, float, double)
// A saída exibe os valores e os formatos usados para cada tipo.

#include <stdio.h>

int main(void) {
	 /* Passo 1: declarar e inicializar uma variável do tipo char.
		 Escolhi o caractere 'A' como valor inicial — é um valor simples
		 e visualmente verificável ao imprimir. */
	 char letra = 'A';

	 /* Passo 2: declarar e inicializar uma variável do tipo int.
		 Uso um inteiro positivo (por exemplo 123) para demonstrar
		 representação de números inteiros. */
	 int inteiro = 123;

	 /* Passo 3: declarar e inicializar uma variável do tipo float.
		 Float é geralmente usado para números de ponto flutuante com
		 precisão simples. Coloco 3.14f como exemplo (com sufixo 'f'). */
	 float real_simples = 3.14f;

	 /* Passo 4: declarar e inicializar uma variável do tipo double.
		 Double oferece maior precisão. Uso um valor conhecido (e.g. e). */
	 double real_duplo = 2.718281828459045;

	 /* Passo 5: imprimir os valores usando os especificadores corretos:
		 - %c para char
		 - %d para int
		 - %f para float/double (para float o valor é promovido em printf)
		 Aqui também mostro o tamanho em bytes de cada tipo com sizeof. */
	 printf("Valor (char): %c\n", letra);
	 printf("Valor (int): %d\n", inteiro);
	 printf("Valor (float): %.2f\n", real_simples);
	 printf("Valor (double): %.12f\n", real_duplo);

	 /* Informação adicional (opcional): tamanhos em bytes dos tipos. */
	 printf("Tamanho de char: %zu byte(s)\n", sizeof(letra));
	 printf("Tamanho de int: %zu byte(s)\n", sizeof(inteiro));
	 printf("Tamanho de float: %zu byte(s)\n", sizeof(real_simples));
	 printf("Tamanho de double: %zu byte(s)\n", sizeof(real_duplo));

	 return 0;
}
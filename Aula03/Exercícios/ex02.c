// Escreva um programa que declare quatro variáveis, uma de cada tipo : char, int, float e double.

#include <stdio.h>

int main(void)
{
	/* Declaração das variáveis pedidas pelo enunciado */
	char c;      /* variável do tipo char (1 byte na maioria das arquiteturas) */
	int i;       /* variável do tipo int (tamanho pode variar; normalmente 4 bytes) */
	float f;     /* variável do tipo float (precisão simples) */
	double d;    /* variável do tipo double (precisão dupla) */

	/* Atribuição de valores de exemplo */
	c = 'A';            /* armazenamos a letra A em `c` */
	i = 123;            /* exemplo de número inteiro */
	f = 3.14f;          /* sufixo f indica literal float */
	d = 2.718281828;    /* literal double por padrão */

	/* Impressão dos valores com explicação passo a passo */
	/* Imprime o char como caractere e também seu código numérico (ASCII) */
	printf("Char (caractere): %c\n", c);
	printf("Char (código ASCII): %d\n", (int)c);

	/* Imprime o inteiro com %d */
	printf("Int: %d\n", i);

	/* Imprime o float com %f (padrão mostra 6 casas decimais) */
	printf("Float: %f\n", f);

	/* Imprime o double com %lf para precisão dupla */
	printf("Double: %lf\n", d);

	/* Mostra os tamanhos em bytes de cada tipo — ajuda a entender memória */
	printf("\nTamanhos em bytes:\n");
	printf(" sizeof(char)   = %zu byte(s)\n", sizeof(char));
	printf(" sizeof(int)    = %zu byte(s)\n", sizeof(int));
	printf(" sizeof(float)  = %zu byte(s)\n", sizeof(float));
	printf(" sizeof(double) = %zu byte(s)\n", sizeof(double));

	return 0; /* indica execução bem-sucedida */
}
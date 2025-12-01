#include <stdio.h>
#include <locale.h>

/*
 * exemplo02.c
 * Exemplo simples demonstrando o uso de ponteiros para alterar o
 * conteúdo de uma estrutura `tAluno` em uma função.
 *
 * Objetivos:
 * - Definir um tipo `tAluno` com matrícula e nota;
 * - Implementar uma função que altera a nota do aluno via ponteiro;
 * - Demonstrar a mudança no `main` imprimindo antes e depois.
 *
 * Observações:
 * - O programa usa `setlocale` apenas para manter consistência com
 *   exemplos que possam exibir acentuação em ambientes configurados.
 */

/* Tipo que representa um aluno com matrícula e nota. */
typedef struct {
    int matricula; /* número de matrícula do aluno */
    float nota;    /* nota do aluno (0.0 - 10.0, por convenção) */
} tAluno;

/**
 * alterarNota
 * Altera a nota de um aluno através de um ponteiro para `tAluno`.
 *
 * Parâmetros:
 * - aluno: ponteiro para a estrutura `tAluno` cujo campo `nota` será alterado.
 * - novaNota: novo valor a ser atribuído ao campo `nota`.
 *
 * Observações de segurança: esta função não valida `aluno` (espera-se
 * que quem chama forneça um ponteiro válido). Se desejar segurança
 * adicional, verifique `aluno != NULL` antes de atribuir.
 */
void alterarNota(tAluno *aluno, float novaNota) {
    if (aluno == NULL) return; /* proteção simples contra ponteiro nulo */
    aluno->nota = novaNota;
}

/**
 * main
 * Função de entrada que demonstra a alteração da nota de um `tAluno`.
 *
 * Fluxo:
 * 1. Define localidade (opcional);
 * 2. Cria um aluno com matrícula e nota inicial;
 * 3. Exibe a nota original;
 * 4. Chama `alterarNota` para modificar a nota;
 * 5. Exibe a nota alterada e encerra.
 */
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /* Inicializa um aluno de exemplo */
    tAluno aluno = {123, 7.5};

    /* Exibe nota antes da alteração */
    printf("Nota original: %.2f\n", aluno.nota);

    /* Altera a nota usando um ponteiro para a estrutura */
    alterarNota(&aluno, 9.0);

    /* Exibe nota após a alteração */
    printf("Nota alterada: %.2f\n", aluno.nota);

    return 0;
}
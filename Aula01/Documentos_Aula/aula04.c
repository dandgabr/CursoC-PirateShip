#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    bool estar_na_aula = false;
    int resposta;

    printf("O aluno está na aula?\n");
    printf("0 - Não\n");
    0 printf("1 - Sim\n");
    scanf("%d", &resposta);

    if (resposta == 1)
    {
        estar_na_aula = true;
    }
    else
    {
        estar_na_aula = false;
    }

    printf("O aluno está na aula? %s\n", estar_na_aula ? "Sim" : "Não");
}
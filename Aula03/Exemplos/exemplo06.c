#include <stdio.h>
#include <locale.h>

/*
    Exemplo — Menu com switch/case

    Descrição:
    - Exibe um menu com 4 opções para o usuário (1 a 4).
    - Lê a opção via scanf e utiliza switch para selecionar a mensagem.
    - Cada opção imprime uma frase famosa.
    - Caso a opção seja inválida, informa o usuário.
*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

    // Exibição do menu
    printf("===== Menu de Frases Famosas =====\n");
    printf("1) A vida é 10%% o que nos acontece e 90%% como reagimos a isso.\n");
    printf("2) A simplicidade é o último grau de sofisticação.\n");
    printf("3) O sucesso é ir de fracasso em fracasso sem perder o entusiasmo.\n");
    printf("4) Penso, logo existo.\n");
    printf("Escolha uma opção (1-4): ");

    // Leitura da opção do usuário; validação simples da entrada
    // Detalhes importantes sobre scanf("%d", &opcao):
    // - Retorno 1: um inteiro foi lido com sucesso (ex.: "3").
    // - Retorno 0: a entrada não era um inteiro (ex.: "abc").
    // - Retorno EOF: fim de arquivo (Ctrl+Z/Ctrl+D) ou erro na stream.
    // Aqui exigimos retorno == 1 para garantir que 'opcao' recebeu um número inteiro.
    // Observação: o Enter ("\n") pode permanecer no buffer, mas como não fazemos
    // nova leitura depois, isso não afeta este programa.
    // Não use fflush(stdin) para “limpar” entrada: não é portátil no padrão C.
    if (scanf("%d", &opcao) != 1)
    {
        printf("Entrada inválida.\n");
        return 1; // encerra com código de erro simples
    }

    // Seleção da ação com base na opção
    // Validação semântica do intervalo (1–4):
    // - Se 'opcao' for 1, 2, 3 ou 4, imprime a frase correspondente.
    // - Qualquer outro valor cai no 'default', informando opção inválida.
    // Isso complementa a validação sintática feita pelo scanf acima.
    switch (opcao)
    {
    case 1:
        printf("\nFrase: A vida é 10%% o que nos acontece e 90%% como reagimos a isso. — Charles R. Swindoll\n");
        break;
    case 2:
        printf("\nFrase: A simplicidade é o último grau de sofisticação. — Leonardo da Vinci\n");
        break;
    case 3:
        printf("\nFrase: O sucesso é ir de fracasso em fracasso sem perder o entusiasmo. — Winston Churchill\n");
        break;
    case 4:
        printf("\nFrase: Penso, logo existo. — René Descartes\n");
        break;
    default:
        printf("\nOpção inválida. Escolha um número entre 1 e 4.\n");
        break;
    }

    return 0; // sucesso
}
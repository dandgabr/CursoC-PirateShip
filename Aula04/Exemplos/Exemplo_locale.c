/*
 * Exemplo_locale.c
 *
 * Versão comentada linha a linha (explicações em português).
 * O objetivo deste programa é demonstrar o uso de locales em C e como
 * obter informações de formatação (p.ex. separador decimal) e também
 * demonstrar a formatação de datas localizadas com strftime().
 */

#include <stdio.h>  // entrada/saída padrão (printf)
#include <locale.h> // funções e tipos para tratamento de locales (setlocale, localeconv)
#include <time.h>   // funções de tempo (time, localtime, strftime)

int main()
{
    /*
     * Lista de candidatos de locale a tentar ativar.
     * Cada string é uma forma comum de designar pt_BR em diferentes sistemas.
     */
    const char *candidates[] = {
        "pt_BR.UTF-8",            // forma comum em Linux/macOS quando instalado
        "pt_BR.utf8",             // alternativa com caixa diferente
        "Portuguese_Brazil.1252", // forma comum no Windows (code page 1252)
        ""                        // string vazia: usa o locale do ambiente
    };

    /* nc = número de elementos no array candidates */
    const int nc = sizeof(candidates) / sizeof(candidates[0]);

    const char *chosen = NULL; // guardará a string que efetivamente funcionou

    /*
     * Loop para tentar ativar cada candidate com setlocale(LC_ALL, ...).
     * Se setlocale retornar != NULL, o locale foi ativado com sucesso.
     */
    for (int k = 0; k < nc; k++)
    {
        /* setlocale tenta definir o locale para todas as categorias (LC_ALL) */
        if (setlocale(LC_ALL, candidates[k]) != NULL)
        {
            chosen = candidates[k]; // salva o candidato que funcionou
            break;                  // interrompe ao encontrar o primeiro que funcionou
        }
    }

    /*
     * chosen pode ser NULL (nenhuma das tentativas funcionou) ou apontar para
     * a string utilizada. Em caso de string vazia (""), o sistema usa o
     * locale definido pelas variáveis de ambiente do usuário.
     */
    if (chosen)
    {
        /*
         * chosen[0] ? chosen : "(locale do ambiente)"
         * -> Se chosen for a string vazia, chosen[0] é '\0' (falso), então
         *    imprimimos um rótulo mais descritivo.
         */
        printf("Locale definido com sucesso: '%s'\n", chosen[0] ? chosen : "(locale do ambiente)");
    }
    else
    {
        /*
         * Se nenhuma tentativa teve sucesso, setlocale retornou NULL para todas
         * as strings. O programa continua, mas ficará usando o "C" locale
         * padrão (sem localização para pt_BR).
         */
        printf("Atenção: não foi possível ativar um locale de PT-BR. Usando C locale padrão.\n");
    }

    /*
     * Obter convenções numéricas do locale atual via localeconv().
     * localeconv() retorna um ponteiro para struct lconv que contém strings
     * como decimal_point e thousands_sep.
     */
    struct lconv *lc = localeconv();
    /* Imprime o separador decimal (ex: "," em pt_BR, "." em C/EN) */
    printf("decimal_point: '%s'\n", lc->decimal_point ? lc->decimal_point : "(n/a)");
    /* Imprime o separador de milhares (ex: "." ou " ") */
    printf("thousands_sep: '%s'\n\n", lc->thousands_sep ? lc->thousands_sep : "(n/a)");

    /*
     * Demonstrar strftime() com nomes de dias e meses localizados.
     * time(NULL) obtém o tempo atual como time_t.
     */
    time_t t = time(NULL);         // instante atual em segundos desde epoch
    struct tm *tm = localtime(&t); // converte para horário local (struct tm)
    char buf[200];                 // buffer para receber a string formatada

    if (tm)
    {
        /*
         * strftime preenche o buffer com a data formatada seguindo o locale.
         * O formato "%A, %d de %B de %Y" usa:
         *  - %A : nome completo do dia da semana (localizado)
         *  - %d : dia do mês com dois dígitos
         *  - %B : nome completo do mês (localizado)
         *  - %Y : ano com 4 dígitos
         */
        if (strftime(buf, sizeof(buf), "%A, %d de %B de %Y", tm) > 0)
        {
            /* Imprime a data formatada (com nomes de mês/dia localizados, se possível) */
            printf("Data formatada (localizada): %s\n\n", buf);
        }
    }

    return 0; /* indica término normal do programa */
}
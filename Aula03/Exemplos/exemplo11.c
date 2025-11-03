
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 1)
            {
                break;
            }
            printf("i: %d - j: %d\n", i, j);
        }
    }

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char *nomes[] = {"Ana", "Bruno", "Carlos"};
    for(int i = 0; i < 3; i++) {
        printf("Nome %d: %s\n", i, nomes[i]);
    }
    return 0;
}
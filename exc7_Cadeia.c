#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    char a[60];
    int i, n, c;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe uma frase: ");
    scanf(" %[^\n]", &a[0]);

    c = 0;

    n = strlen(a);

    for(i = 0; i <= n; i++){
        if(n = 'r'){
            c = c + 1;
        }
    }

    printf("\nA frase é: %s", a);

    printf("\nO tamanho da frase é: %d \n", strlen(a));

    printf("\nA quantidade de R na frase é: ", c);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, vet[15], c;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i <= 14; i++){
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &vet[i]);
    }

    c = 0;

    for(i = 0; i <= 14; i++){
        if (vet[i] == 30){
            printf("\nA posi��o igual a 30 �: %d", i);
            c = c + 1;
        }

    }

    printf("\nA quantidade de n�meros iguais a 30 �: %d", c);


    return 0;
}

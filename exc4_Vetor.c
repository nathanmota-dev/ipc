#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, vet[15], c;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i <= 14; i++){
        printf("Informe o número %d: ", i);
        scanf("%d", &vet[i]);
    }

    c = 0;

    for(i = 0; i <= 14; i++){
        if (vet[i] == 30){
            printf("\nA posição igual a 30 é: %d", i);
            c = c + 1;
        }

    }

    printf("\nA quantidade de números iguais a 30 é: %d", c);


    return 0;
}

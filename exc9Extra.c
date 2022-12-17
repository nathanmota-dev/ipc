#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    char nomes[3], apr;
    float notas[3][4], medias[3], sum;
    int l, c;
    
    setlocale(LC_ALL, "Portuguese");
    
    for(l = 0; l <= 2; l++){
        printf("Informe o Nome %d: ", l);
        scanf("%s", &nomes[l]);
    }
    
    for(l = 0; l <= 2; l++){
        for(c = 0; c <= 3; c++){
            printf("Informe a nota: ");
            scanf("%f", &notas[l][c]);
        }
    }
    
    //system("cls");
    
    sum = 0.0;
    
    for(l = 0; l <= 2; l++){
        for(c = 0; c <= 3; c++){
            sum = sum + notas[l][c];
        }
        medias[l] = sum/4;
    }
    
    int aluno;
    scanf("%d", &aluno);
    
    //char apr[15];
    
    if (medias[aluno]>=6){
        char apr[] = "APROVADO";
    }
    
    else{
        char apr[] = "REPROVADO";
    }
    
    printf("================\n");
    printf("Aluno: %d\n", nomes[aluno]);
    printf("                \n");
    printf("1B: %.2f\n", notas[aluno][0]);
    printf("2B: %.2f\n", notas[aluno][1]);
    printf("3B: %.2f\n", notas[aluno][2]);
    printf("4B: %.2f\n", notas[aluno][3]);
    printf("                \n");
    printf("Média: %.2f\n", medias[aluno]);
    printf("%c\n", apr);
    printf("================\n");
    

    return 0;
}

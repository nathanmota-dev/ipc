#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int mat[2][3], l, c, intervalo, sim, n;
    
    setlocale(LC_ALL, "Portuguese");
    
    for(l=0; l<=1; l++){
        for(c=0; c<=2; c++){
            scanf("%d", &mat[l][c]);
        }
    }
    
    printf("=====================");
    printf("\nEncontrando intervalo");
    
    sim = 0;
	n = 0;
	
	for(l=0; l<=1; l++){
        for(c=0; c<=2; c++){
            
            intervalo = 0;
            
            if(mat[l][c] >= 5 && mat[l][c] <= 15){
                printf("\nNotas: %d ", mat[l][c]);
                printf("\nEsse numero se encontra no intervalo de 5 e 15");
                
                sim = sim + 1;
            }
            
            else{
                printf("\nEsse numero nao se encontra no intervalo de 5 e 15");
                
                n = n + 1;
            }
            
            printf("\nNotas: %d ", mat[l][c]);
            
        }
    }
    
    printf("=======================================================================");
    printf("\n Temos %d numeros que se encontram no intervalo de 5 até 15", sim);
    printf("\n Temos %d numeros que não se encontram no intervalo de 5 até 15", n);
    
    return 0;
}

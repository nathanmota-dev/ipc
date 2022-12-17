#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int conta1(int m1[2][2], int v1[4]);

int main()
{
    int mat1[2][2], vet1[4], i, j, k;
    
    setlocale(LC_ALL, "Portuguese");
    
    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    
    conta1(mat1, vet1);

    return 0;
}

int conta1(int m1[2][2], int v1[4]){
    int i, j, k;
    k = 0;
    
    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 1; j++){
            v1[k] = m1[i][j];
			printf("%d", v1[k]);
			k = k + 1;
        }
    }
    
    return k;
}

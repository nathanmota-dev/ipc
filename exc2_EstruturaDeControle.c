#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float saco, conversao, gato1, gato2, dia, semana, sobra, arredondamento, conversao2;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o peso do saco de ração em kilos: ");
    scanf("%f", &saco);
    
    conversao = saco * 1000;
    
    printf("\nDigite a quantidade em gramas da refeição do primeiro gato: ");
    scanf("%f", &gato1);
    
    printf("\nDigite a quantidade em gramas da refeição do segundo gato: ");
    scanf("%f", &gato2);
    
    dia = gato1 + gato2;
    semana = dia * 5;
    sobra = conversao - semana;
    
    conversao2 = sobra / 1000;
    
    printf("\nSobra semanal do saco: %.2f kg", conversao2);

    return 0;
}

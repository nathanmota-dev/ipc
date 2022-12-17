#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    char sexo;
    float cod, num_h, sal_b, sal_l = 0.0 , media_m = 0.0, media_f = 0.0, cont_m, cont_f;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu codigo: ");
    scanf("%f", &cod);
    
    cont_m = 0;
	cont_f = 0;
	
	while(cod != 99999){
	    printf("\nInforme seu Sexo M para Masculino e F para Feminino: ");
	    scanf("%s", &sexo);
	    
	    printf("\nInforme o numero de horas aulas dada: ");
	    scanf("%f", &num_h);
	    
	    sal_b = num_h * 30;
	    
	    if(sexo == 'M' || sexo == 'm'){
	        sal_l = sal_b - (sal_b * 10 / 100);
			media_m = media_m + sal_l;
			cont_m = cont_m + 1;
		}
		
		if(sexo == 'F' || sexo == 'f'){
		    sal_l = sal_b - (sal_b * 5 / 100);
			media_f = media_f + sal_l;
			cont_f = cont_f + 1;
		}
		
		printf("\nCodigo: %.2f", cod);
		printf("\nSalario Bruto: %.2f", sal_b);
		printf("\nSalario Liquido: %.2f", sal_l);
		
		printf("\n\nDigite seu codigo:");
		scanf("%f", &cod);
		
	}
	
	if(cont_m == 0){
	    printf("\nNenhum professor do sexo masculino");
	} else {
	    media_m = media_m / cont_m;
		printf("\nMedia M: %.2f", media_m);
	}
	
	if(cont_f == 0){
	    printf("\nNenhum professor do sexo masculino");
	} else {
	    media_f = media_f / cont_f;
		printf("\nMedia F: %.2f", media_f);
	}
	
    return 0;
}

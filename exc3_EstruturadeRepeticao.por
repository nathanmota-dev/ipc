programa
{
	
	funcao inicio()
	{
		caracter sexo
		real cod, num_h, sal_b, sal_l = 0.0 , media_m = 0.0, media_f = 0.0, cont_m, cont_f


		escreva("Digite seu codigo: ")
		leia(cod)

		cont_m = 0
		cont_f = 0
		
		enquanto (cod != 99999) // Itera 'atual' até o valor informado
				{
				escreva("Informe seu Sexo M para Masculino e F para Feminino: ")
				leia(sexo)
				
				escreva("Informe o numero de horas aulas dada: ")
				leia(num_h)

				sal_b = num_h * 30

				se (sexo == 'M' ou sexo == 'm') {

					sal_l = sal_b - (sal_b * 10 / 100)
					media_m = media_m + sal_l
					cont_m = cont_m + 1
					}

				se (sexo == 'F' ou sexo == 'f'){
					sal_l = sal_b - (sal_b * 5 / 100)
					media_f = media_f + sal_l
					cont_f = cont_f + 1 
					}

				escreva("\nCodigo: ",cod)
				escreva("\nSalario Bruto: ", sal_b)
				escreva("\nSalario Liquido: ", sal_l)

				escreva("\n\nDigite seu codigo: ");
      				leia(cod)
						
		}

		se (cont_m == 0) {
			escreva ("Nenhum professor do sexo masculino")
		}
			senao{
			media_m = media_m / cont_m
			escreva("media M: ", media_m)
			}

		

		se (cont_f == 0){
			escreva ("Nenhum professor do sexo feminino")
			}
			senao{
				media_f = media_f / cont_f
				escreva("Media F: ", media_f)
					}
				
					
			
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 87; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
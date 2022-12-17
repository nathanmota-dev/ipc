programa
{
	
	funcao inicio()
	{
		inteiro mat[2][3], l, c, intervalo, sim, n

		para (l=0; l<=1; l++){
			para(c=0; c<=2; c++){
				leia(mat[l][c])
				
			}
		}
		escreva("=====================")
		escreva("\nEncontrando intervalo")
		
		sim = 0
		n = 0
		
		para(l=0; l<=1; l++){
			para (c=0; c<=2; c++){
		intervalo = 0
		
			se (mat[l][c] >= 5 e mat[l][c] <= 15){
					escreva("\nNotas [",l, ", ",c,"]: ", mat[l][c], "\n")
					escreva("\nEsse numero se encontra no intervalo de 5 e 15")

					sim = sim + 1

					
					} 
			senao{escreva("\nEsse numero nao se encontra no intervalo de 5 e 15")

				n = n + 1
				
				}


		
		escreva("\nNotas [",l, ", ",c,"]: ", mat[l][c], "\n")

				
		
			
				
				}
		}

		escreva("=======================================================================")
		escreva("\n Temos ", sim, " numeros que se encontram no intervalo de 5 até 15")
		escreva("\n Temos ", n, " numeros que não se encontram no intervalo de 5 até 15")

		
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 976; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
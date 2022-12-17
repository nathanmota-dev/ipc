programa
{
	
	funcao inicio()
	{	

		inteiro mat1[2][2], vet1[4], i, j, k
		
		
		para(i = 0; i <= 1; i++){
			para(j = 0; j <= 1; j++){
				leia(mat1[i][j])
			}			
		}

		conta1(mat1, vet1)

	}

	funcao conta1(inteiro m1[][], inteiro v1[]){
		inteiro i, j, k
		k = 0	
		para(i = 0; i <= 1; i++){
			para(j = 0; j <= 1; j++){				

				v1[k] = m1[i][j] 
				escreva(v1[k])
				k = k + 1				
			}
			
			
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 415; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
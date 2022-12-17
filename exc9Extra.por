programa
{
	
	funcao inicio()
	{
		cadeia nomes[3] 
		real notas [3][4] 

		real medias[3]

		inteiro l, c
		real sum
		
		para (l = 0; l <= 2; l++){
		    escreva("Informe o Nome ", l, ": ")
		    leia(nomes[l])
		}
		
		para(l = 0; l <= 2; l++){
		    para (c = 0; c <= 3; c++){
		        escreva("Informe as notas do aluno ", nomes[l], ":")
		        leia(notas[l][c])
		    }
		}
		
		limpa()

		para(l=0; l<3; l++){
			sum = 0.0
			para(c = 0; c < 4; c++){
				sum = sum + notas[l][c]
				}
			medias [l] = sum/4
			}

		inteiro aluno
		escreva ("Informe o numero do aluno que deseja a media: ")
		leia(aluno)
		
		cadeia apr
		se(medias[aluno]>=6){
			apr="APROVADO"
		}
		senao{
			apr="REPROVADO"
		}

		escreva("================","\n")
		escreva("Aluno: "+nomes[aluno],"\n")
		escreva("                ","\n")
		escreva("1B : "+notas[aluno][0],"\n") 
		escreva("2B : "+notas[aluno][1],"\n") 
		escreva("3B : "+notas[aluno][2],"\n") 
		escreva("4B : "+notas[aluno][3],"\n") 
		escreva("                ","\n")
		escreva("Media: "+medias[aluno],"\n")
		escreva(apr, "\n")
		escreva("================")
	}
}


/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 371; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {nomes, 6, 9, 5}-{notas, 7, 7, 5}-{medias, 9, 7, 6};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
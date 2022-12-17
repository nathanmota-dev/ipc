programa {
	funcao inicio() {
		inteiro vet[15], i, c
		
		para(i = 0; i <= 14; i++){
		    escreva("Informe o número ", i, ": ")
		    leia(vet[i])
		}
		
		limpa()
		
		c = 0
		
		para(i = 0; i <= 14; i++){
		    se (vet[i] == 30){
		    escreva("\nA posição igual a 30 é: ", i)
		    c = c + 1
		    }
		}
		
		escreva("\nA quantidade de números iguais a 30 é: ", c)
		
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 155; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
programa{	
  
  inclua biblioteca Matematica --> mat
	funcao inicio()
	{
    real ang, alt, escada, radiano, seno, arredondamento
    
    escreva("\nEscreva valor de ang: ")
    leia(ang)
    escreva("\nEscreva o valor de alt: ")
    leia(alt)
    
    radiano = (ang * 3.14) / 180
    seno = mat.seno(radiano)
    arredondamento = mat.arredondar(seno, 2)
    
    escada = alt / arredondamento
    arredondamento = mat.arredondar(escada, 2)
    escreva("\n Escada: ", arredondamento)
    
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 498; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
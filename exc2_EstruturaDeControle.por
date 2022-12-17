programa {

  inclua biblioteca Matematica --> mat
	funcao inicio() 
  {		
		real saco, conversao, gato1, gato2, dia, semana, sobra, arredondamento, conversao2
		
		escreva("Digite o peso do saco de ração em kilos: ")
		leia(saco)
		conversao = saco * 1000
		escreva("Digite a quantidade em gramas da refeição do primeiro gato: ")
		leia(gato1)
		escreva("Digite a quantidade em gramas da refeição do segundo gato: ")
		leia(gato2)
		dia = gato1 + gato2
		semana = dia * 5 
		sobra = conversao - semana
		
		
		conversao2 = sobra / 1000
		arredondamento = mat.arredondar(conversao2, 2)
		escreva("Sobra semanal do saco: ", conversao2, " kg")
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 650; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
programa
{
	inclua biblioteca Arquivos --> arq
	funcao inicio()
	{
		const cadeia CAMINHO = "./alunos.txt"
		inteiro arquivo
		cadeia num, nome, curso, n1, n2		
			
		escreva("\nNúmero da chamada: ")
		leia(num)

		arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		arq.escrever_linha(num, arquivo)
		arq.fechar_arquivo(arquivo)
		escreva("\nSua nova frase foi salva com sucesso.")

		escreva("\nNome")
		leia(nome)

		arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		arq.escrever_linha(num, arquivo)
		arq.fechar_arquivo(arquivo)
		escreva("\nSua nova frase foi salva com sucesso.")

		escreva("\nCurso")
		leia(curso)

		arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		arq.escrever_linha(num, arquivo)
		arq.fechar_arquivo(arquivo)
		escreva("\nSua nova frase foi salva com sucesso.")

		escreva("\nNota1")
		leia(n1)

		arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		arq.escrever_linha(num, arquivo)
		arq.fechar_arquivo(arquivo)
		escreva("\nSua nova frase foi salva com sucesso.")

		escreva("\nNota2: ")
		leia(n2)
		
		arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		arq.escrever_linha(num, arquivo)
		arq.fechar_arquivo(arquivo)
		escreva("\nSua nova frase foi salva com sucesso.")

		limpa()

		escreva("\nNúmero da chamada:\n\n •• "+num+" ••")		
		escreva("c\nNome:\n\n •• "+nome+" ••")
		escreva("\\nCurso:\n\n •• "+curso+" ••")
		escreva("\\nNota 1:\n\n •• "+n1+" ••")
		escreva("\\nNota 2:\n\n •• "+n2+" ••")	
			
		}
	}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1435; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
programa
{
    inclua biblioteca Texto --> tx

    funcao inicio()

    {
        cadeia frase
        inteiro i, n ,qtd_r
        caracter c
        escreva ("Digite a frase: \n")
        leia (frase)

        n = tx.numero_caracteres(frase)
        escreva ("Total de caracteres: ", n, "\n")
        qtd_r = 0
        para (i=0; i < n; i++){
            c = tx.obter_caracter(frase, i)
            escreva (i, ":", c, "\n")
             se (c=='r'){
                 i= i+1
                 c = tx.obter_caracter(frase, i)
                 escreva (i, ":", c, "\n")
                se ( c == ' '){

                    qtd_r = qtd_r + 1

                }

            }


        }
        escreva ("quantidade de verbos que termina com R sao: ", qtd_r)

    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 122; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
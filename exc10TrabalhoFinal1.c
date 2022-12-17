#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int linhas,colunas, i, j, n, b, c, k=0, u, y=0, z=0, t, v, k2 = 0, k3 = 0, m=0;
    int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas], vet1[50], vetinterseccao[i], vet[50],vet2[50],vet3[50];

    setlocale(LC_ALL,"Portuguese");

    SetConsoleTitle("Trabalho final de IPC - Nathan Soares Mota");

    printf("======================================================= \n");
    printf("                         Bem vindo \n\n");
    printf("                     Nathan Soares Mota \n\n");
    printf("======================================================= \n\n");

    printf("Informe o que voce deseja:  \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - União\n");
    printf("4 - Intersecção\n");
    printf("5 - Operação de Matriz Individual\n");
    printf("6 - Quantidade que o numero da matriz aparece\n");

    scanf("%d", &n);

    printf("Entre com o numero de linhas: ");
    scanf("%d",&linhas);
    printf("Entre com o numero de colunas: ");
    scanf("%d",&colunas);

    //verificação
    if(linhas > 5 || colunas > 5)
    {
        printf("Erro, o numero dessa matriz é superior a 5\n");
        system("pause");
        return 0;
    }


    for (i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            printf(" Entre com os elementos da matriz 1 [%d][%d]:",i+1,j+1);
            scanf("%d", &mat1[i][j]);

            printf(" Entre com os elementos da matriz 2 [%d][%d]:",i+1,j+1);
            scanf("%d", &mat2[i][j]);

            if(n == 1)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
            else if(n == 2)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }


        }
    }

    switch(n)
    {
    //soma
    case 1:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 3 (soma) criada*/
        printf("\n\nA matriz soma é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat3[i][j]);
            printf("\n\n");
        }

        break;

    //subtração
    case 2:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 3 (subtração) criada*/
        printf("\n\nA matriz subtração é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat3[i][j]);
            printf("\n\n");
        }

        break;

    //União
    case 3:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            {
                printf("%3.d\t",mat1[i][j]);
                printf("\n\n");
            }
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            {
                printf("%3.d\t",mat2[i][j]);
                printf("\n\n");
            }
        }

        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            {
                vet1[k] = mat1[i][j];
                k++;
            }
        }

        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            {
                vet1[k] = mat2[i][j];
                k++;
            }
        }

        printf("\n\nA união é: \n\n");
        for(i=0; i<k; i++)
        {
            printf("%d", vet1[i]);
        }
        printf("\n\n");

        break;

    //Intersecção
    case 4:
        system("cls");
        for (i = 0; i < linhas; i++)
        {
            for (j = 0; j < colunas; j++)
            {
                vet[k] = mat1[i][j];
                k++;
            }

        }
        for (i = 0; i < linhas; ++i)
        {
            for (j = 0; j < colunas; ++j)
            {
                vet2[k2] = mat2[i][j];
                k2++;
            }
        }

        //CHECAGEM DE QUAL O MAIOR VETOR PARA USAR NO FOR

        if (k >= k2)
        {
            k3 = k;
        }
        else
        {
            k3 = k2;
        }

        //CHECANDO A INTERSECCAO

        for (i = 0; i < k3; i++)
        {
            for (j = 0; j < k3; j++)
            {
                if (vet[i] == vet2[j])
                {
                    vet3[y] = vet[i];
                    y++;
                }
            }
        }

        //TIRANDO OS NUMEROS IGUAIS

        for (i = 0; i < y; i++)
        {
            for (j = i+1; j < y; j++)
            {
                if (vet3[i] == vet3[j])
                {
                    for (m = j; m < y - 1; m++)
                    {
                        vet3[m] = vet3[m+1];
                    }
                    y = y-1;
                }
            }
        }


        system("cls");
        printf("Primeira Matriz:\n");
        for (i = 0; i < linhas; i++)
        {
            for (j = 0; j < colunas; j++)
            {
                printf("[%d] ", mat1[i][j]);
            }
            printf("\n");
        }
        printf("Segunda Matriz:\n");
        for (i = 0; i < linhas; i++)
        {
            for (j = 0; j < colunas; j++)
            {
                printf("[%d] ", mat2[i][j]);
            }
            printf("\n");
        }
        printf("====================================================================\n");
        printf("\n RESULTADO DA INTERSECCAO DAS DUAS MATRIZES : \n\n");
        printf("====================================================================\n");
        for (i = 0; i < y; i++)
        {
            printf("%d ", vet3[i]);
        }
        printf("\n");

        break;

    //Operação de Matriz Individual
    case 5:
    	system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }
        
        system("cls");
        printf("1 - Somar um número a matriz \n");
        printf("2 - Multiplicar pela matriz \n");        
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Você deseja adicionar um número a matriz 1 ou a matriz 2? \n");
            scanf("%d", &c);
            if(c == 1)
            {
                system("cls");
                printf("A matriz 1 é selecionada \n");
                printf("======================================================= \n\n");
                printf("Informe o número que deseja adicionar: \n");
                scanf("%d", &u);
                printf("======================================================= \n\n");
                printf("\n\nA matriz 1 criada é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)                   
                    printf("%3.d\t",mat1[i][j]);
                    printf("\n\n");
                }
                
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    mat3[i][j] = mat1[i][j] + u;                    
                }
                
                printf("\n\nA nova matriz 1 é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    printf("%3.d\t", mat3[i][j]);
                    printf("\n\n");
                }


            }

            else if(c == 2)
            {
                system("cls");
                printf("A matriz 2 é selecionada \n");
                printf("======================================================= \n\n");
                printf("Informe o númmero que deseja adicionar: \n");
                scanf("%d", &u);
                printf("======================================================= \n\n");
                printf("\n\nA matriz 2 criada é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)                    
                    printf("%3.d\t",mat2[i][j]);
                    printf("\n\n");
                }
                
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    mat3[i][j] = mat2[i][j] + u;                    
                }

                
                printf("\n\nA nova matriz 1 é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    printf("%3.d\t", mat3[i][j]);
                    printf("\n\n");
                }

            }

            else
            {
                printf("Erro, valor incorreto");
                system("pause");
                return 0;
            }
        }

        if(b == 2)
        {
            printf("Você deseja adicionar um número a matriz 1 ou a matriz 2? \n");
            scanf("%d", &c);
            if(c == 1)
            {
                system("cls");
                printf("======================================================= \n");
                printf("               A matriz 1 é selecionada \n");
                printf("======================================================= \n\n");
                printf("Informe o número que deseja adicionar: \n");
                scanf("%d", &u);
                printf("======================================================= \n\n");
                printf("\n\nA matriz 1 criada é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)                    
                    printf("%3.d\t",mat1[i][j]);
                    printf("\n\n");
                }
                
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    mat3[i][j] = mat1[i][j] * u;                    
                }
                
                printf("\n\nA nova matriz 1 é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    printf("%3.d\t", mat3[i][j]);
                    printf("\n\n");
                }


            }

            else if(c == 2)
            {
                system("cls");
                printf("======================================================= \n\n");
                printf("A matriz 2 é selecionada \n");
                printf("======================================================= \n\n");
                printf("Informe o número que deseja adicionar: \n");
                scanf("%d", &u);
                printf("======================================================= \n\n");
                printf("\n\nA matriz 2 criada é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)                    
                    printf("%3.d\t",mat2[i][j]);
                    printf("\n\n");
                }
                
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    mat3[i][j] = mat2[i][j] * u;                    
                }

                printf("\n\nA nova matriz 1 é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                    printf("%3.d\t", mat3[i][j]);
                    printf("\n\n");
                }

            }            

            break;

        //Quantidade de vezes que um numero aparece na matriz
        case 6:
            system("cls");
            printf("\n\nA matriz 1 é: \n\n");
            /*Mostra a matriz 1 criada*/
            for (i=0; i<linhas; i++)
            {
                for(j=0; j<colunas; j++)
                printf("%3.d\t",mat1[i][j]);
                printf("\n\n");
            }

            /*Mostra a matriz 2 criada*/
            printf("\n\nA matriz 2 é: \n\n");
            for (i=0; i<linhas; i++)
            {
                for(j=0; j<colunas; j++)
                    printf("%3.d\t",mat2[i][j]);
                printf("\n\n");
            }

            printf("======================================================= \n\n");

            printf("Informe o número que deseja saber quantas vezes aparece na matriz: ");
            scanf("%d", &c);

            for (i=0; i<linhas; i++)
            {
                for(j=0; j<colunas; j++)
                    if(c == mat1[i][j])
                        y++;
            }

            printf("====================================================================\n");
            printf("Na Primeira Matriz o numero %d repetiu : %d vezes\n", c, y);
            printf("====================================================================\n");

            for (i=0; i<linhas; i++)
            {
                for(j=0; j<colunas; j++)
                    if(c == mat2[i][j])
                        z++;
            }

            printf("====================================================================\n");
            printf("Na Segunda Matriz o numero %d repetiu : %d vezes\n", c, z);
            printf("====================================================================\n");

            t = y + z;

            printf("====================================================================\n");
            printf("Total: %d vezes o número repetiu\n", t);
            printf("====================================================================\n");

            break;

        default:

            printf("Erro\n");

        }
    }

    system("pause>null");

    return 0;
}
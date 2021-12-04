/*
Exemplo0919 - v0.1. - 25 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

/**
notZero - Testar se nenhum valor abaixo da diagonal principal e zero
@return - true, se nenhum dos dados forem iguais a zero;
          false, caso contrario
@param dimensao - dimensao da matriz
@param matriz - matriz de valores reais
*/
bool notZero (int dimensao, float matriz[][dimensao])
{
// definir dados locais
bool result = true;

for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (i>j)
            {
                //testar se valor e zero
                if (matriz[i][j] == 0)
                {
                    result = false;
                }
            }    
        }//end for
    }//end for

// retornar resposta
return ( result );
}// notZero ( )


//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0919 - v0.1");
    //definir dados
    int dimensao;
    //receber o numero de dimensoes
    printf("Insira a dimensao da matriz desejadas:\n");
    scanf("%i", &dimensao);
    //se valor for nulo ou negativo - receber valor novamente
    while (dimensao <= 0)
    {
        printf("Valor nulo ou negativo! \nTente novamente:\n");
        scanf("%i", &dimensao);
    }//end while

    float matriz[dimensao][dimensao];
    printf("Insira os elementos da matriz:\n");
    //receber os elementos da matriz
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
        scanf("%f", &matriz[i][j]);
        } 
    }//end for

     //imprimir matriz
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            printf(" %.2f ", matriz[i][j]);
        }//end for
        printf("\n");
    }//end for

    if((notZero(dimensao, matriz)) == true)
    {
        printf("Nenhum valor abaixo da diagonal principal e zero.\n");
    }
    else if((notZero(dimensao, matriz)) == false)
    {
        printf("Pelo menos um valor abaixo da diagonal principal e zero.\n");
    }

    return 0;
}
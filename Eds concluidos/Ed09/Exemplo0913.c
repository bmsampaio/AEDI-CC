/*
Exemplo0913 - v0.1. - 25 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

/*
 diagonalMatriz - metodo para ler as dimensoes de uma matriz quadrada e seus elementos
 mostrar a diagonal principal da matriz.
*/
void diagonalMatriz()
{
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
    
        printf("A diagonal da matriz quadrada e :\n");
    //imprimir matriz
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (i==j)
            {
                printf(" %.2f ", matriz[i][j]);
            }
            else
            {
                printf("      ");
            }
        }//end for
        printf("\n");
    }//end for
}//end diagonalMatriz()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0913 - v0.1");
    diagonalMatriz();
    return 0;
}
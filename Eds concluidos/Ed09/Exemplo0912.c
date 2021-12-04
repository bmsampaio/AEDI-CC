/*
Exemplo0912 - v0.1. - 24 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

/*
 readMatriz - metodo para ler e guardar em um arquivo as dimensoes de uma matriz e seus elementos
 receber somente valores positivos.
*/

void guardarMatriz(float matriz[][10], FILE *arquivo)
{
    //definir dados
    int coluna, linha;
    //receber o numero de colunas
    printf("Insira a quantidade de colunas desejadas:\n");
    scanf("%i", &coluna);
    //se valor for nulo ou negativo - receber valor novamente
    while (coluna <= 0)
    {
        printf("Valor nulo ou negativo! \nTente novamente:\n");
        scanf("%i", &coluna);
    }//end while
    //receber o numero de linhas
    printf("Insira a quantidade de linhas desejadas:\n");
    scanf("%i", &linha);
    //se valor for nulo ou negativo - receber valor novamente
    while (linha <= 0)
    {
        printf("Valor nulo ou negativo! \nTente novamente:\n");
        scanf("%i", &linha);
    }//end while
    fprintf(arquivo,"Dimensoes - [%d][%d]\n", linha,coluna);
    matriz[linha][coluna];
    printf("Insira os elementos da matriz:\n");
    //receber os elementos da matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%f", &matriz[i][j]);
            //se valor for nulo ou negativo - receber valor novamente
            while (matriz[i][j] <= 0)
            {
                printf("Valor nulo ou negativo! \nTente novamente:\n");
                scanf("%f", &matriz[i][j]);
            }//end while
        }//end for
    }//end for
    //guardar matriz no arquivo
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            fprintf(arquivo," %.2f ", matriz[i][j]);
        }//end for
        fprintf(arquivo,"\n");
    }//end for
}//end guardarMatriz


//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0912 - v0.1");
    //definir dados
    float matriz[10][10];
    FILE *arquivo;
    arquivo = fopen("matriz0912.txt","w");
    guardarMatriz (matriz,arquivo);
    fclose(arquivo);
    return 0;
}
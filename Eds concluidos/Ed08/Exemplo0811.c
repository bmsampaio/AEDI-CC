/*
Exemplo0811 - v0.1. - 09 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

//Funcao principal
int main (void)
{
    //identificar
     IO_id("EXEMPLO0811 - v0.1");
    //definir dados
    int x = 0, c = 0;
        //ler o tamanho do arranjo
        printf("Insira um valor inteiro nao nulo e positivo:\n");
        scanf("%i",&x);
    int A [x];
    //testar se valor e nulo ou negativo
    if (x <= 0)
    {
        printf("Valor inserido nulo ou negativo.\n");
    }//end if
    //se o valor inserido for positivo
    else
    {
        printf("Insira %i numeros inteiros positivos e impares:\n",x);
        for (int i = 0; i < x; i++)
        {
            scanf("%i",&A[i]);
            //se o numero for negativo ou par - repetir scanf
            if (A[i] < 0 || A[i]%2 ==0 )
            {
               scanf("%i",&A[i]);
            }//end if
        }//end for
        
        for(int i = 0; i < x; i++)
        {
            //imprimir arranjo
            printf("Posicao %i - elemento %i\n",i,A[i]);
        }//end for
    }//end else

    return 0;
}
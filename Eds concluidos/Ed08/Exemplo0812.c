/*
Exemplo0812 - v0.1. - 09 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

void readArch ()
{
    int x = 0, contador = 0;
        //ler o tamanho do arranjo
        printf("Insira um valor inteiro nao nulo e positivo para ser o tamanho do arranjo:\n");
        scanf("%i",&x);
    int num [x];
    FILE *arranjo;
    FILE *result12;

        //ler arquivo
        arranjo = fopen("arranjo.txt","r");
        
    //testar se valor e nulo ou negativo
    if (x <= 0)
    {
        printf("Valor inserido nulo ou negativo.\n");
    }//end if
    //se o valor inserido for positivo
    else
    {
        for (int i = 0; i < x; i++)
        {
            fscanf(arranjo,"%i",&num[i]);
            //se o numero for negativo ou par - repetir scanf
            if (num[i] < 0 || num[i]%2 ==0 )
            {
                //ler a quantidade x de numeros do arquivo
               fscanf(arranjo,"%i",&num[i]);
            }//end if
        }//end for

        result12 = fopen("result12.txt","w");
        fprintf(result12, "A quantidade de elementos e : %i\n",x);

        //mostrar a posicao e os elementos do aranjo
        for(int i = 0; i < x; i++)
        {
            //imprimir arranjo
            printf("Posicao %i - elemento %i\n",i,num[i]);
            fprintf(result12, "Posicao %i - elemento %i\n",i,num[i]);
        }//end for
        fclose(result12);
    }//end else
}//end readArch

//Funcao principal
int main (void)
{
    //identificar
     IO_id("EXEMPLO0812 - v0.3");
    readArch();
    return 0;
}
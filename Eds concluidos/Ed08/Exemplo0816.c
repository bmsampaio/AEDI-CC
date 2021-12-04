/*
Exemplo0816 - v0.1. - 19 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

/**
 * contaLinhas - contar a quantidade de linhas de um arquivo
 * @return - quantidade encontrada.
 * @param arch - arquivo para contar as linhas
 **/
int contaLinhas(FILE *arch)
{
    //definir dados
    int conteudo = 0, existeLinha = 0, contador = 0;
    arch = fopen("arranjo.txt", "r");
    while ((conteudo = fgetc(arch)) != EOF)
    {
        existeLinha = 1; //
        //se existir uma quebra de linha - contar+1
        if (conteudo == '\n')
        {
            contador++;
        } //end if
    }     //end while

    // se não houver uma quebra de linha na última linha
    if (existeLinha)
    {
        contador++;
    } //end if

    return contador;

} // end contaLinhas ()

/**
 * mediaArranjo - calcular a media dos valores de um arranjo
 * @return - media.
 * @param arch - arquivo contendo uma quantidade de valores.
 **/
float mediaArranjo (FILE *arch)
{
    //definir dados
    float soma = 0 , media = 0;
    int n = contaLinhas(arch);
    int arranjo[n];

    for (int i = 0; i < n; i++)
    {
        //ler a quantidade n de numeros do arquivo
        fscanf(arch, "%i", &arranjo[i]);
        soma = soma + arranjo[i];
    } //end for

    media = soma/n;
    return (media);
} // end mediaArranjo()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0816 - v0.1");
    //definir dados]
    
    FILE *arch;
    arch = fopen("arranjo.txt", "r");

    int n = contaLinhas(arch);
    float array [n];
    
   for(int i = 0; i < n; i++)
   {
       fscanf(arch,"%f",&array[i]);
       printf("posicao %i - elemento %f\n",i,array[i]);
   }
    float m = mediaArranjo(fopen("arranjo.txt", "r"));

    FILE *acimaMedia;
    acimaMedia = fopen("acimaMedia.txt", "w");
    FILE *abaixoMedia;
    abaixoMedia = fopen("abaixoMedia.txt", "w");
 

    printf("media = %f\n", m);
    fprintf(acimaMedia,"A media dos numeros e %f \n", m);
    fprintf(abaixoMedia,"A media dos numeros e %f \n", m);

   for(int i = 0; i < n; i++)
   {
        
       if(array[i] > m)
       {      
       fprintf(acimaMedia,"O numero %.2f esta acima da media\n",array[i]);
       }
   }
   for(int i = 0; i < n; i++)
   {
       if(array[i] < m)
       {
       fprintf(abaixoMedia,"O numero %.2f esta abaixo da media\n",array[i]);
       }
   }
    
    fclose(acimaMedia);
    fclose(abaixoMedia);
    
    return 0;
}
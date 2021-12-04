/*
Exemplo0817 - v0.1. - 19 / 11 / 2021
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
 * ordenado - testar se arranjo esta ordenado ou nao
 * @return - quantidade encontrada.
 * @param arch - arquivo para contar as linhas
 **/
bool ordenado(int arranjo[])
{
    //definir dados
    

    return ;

} // end ordenado ()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0817 - v0.1");
    //definir dados]
    FILE *arch;
    arch = fopen("arranjo.txt", "r");
    int n = contaLinhas(arch);
    int array [n];
    
   for(int i = 0; i < n; i++)
   {
       fscanf(arch,"%i",&array[i]);
   }
    ordenado(array);
   
    
    return 0;
}
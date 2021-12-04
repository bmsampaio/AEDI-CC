/*
Exemplo0814 - v0.1. - 19 / 11 / 2021
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
    while((conteudo = fgetc(arch)) != EOF)
    {
        existeLinha = 1; //
        //se existir uma quebra de linha - contar+1
        if (conteudo == '\n')
        {
            contador++;
        } //end if
  }//end while
 
  // se não houver uma quebra de linha na última linha
  if(existeLinha)
  {
    contador++;
  }//end if

  return contador;

} // end menorValor ()

/**
 * menorValor - encontrar o menor valor em um arranjo
 * @return - numero encontrado.
 * @param arch - arquivo contendo uma quantidade de valores.
 **/
int menorValor(FILE *arch)
{
    //definir dados
    int menor = 0;
    FILE *result14;
    result14 = fopen ("result14.txt","w");
    int n = contaLinhas(arch);
    fprintf(result14,"O arranjo possui %i posicoes.\n", n);
    int arranjo[n];
    
    for (int i = 0; i < n; i++)
    {
        //ler a quantidade n de numeros do arquivo
        fscanf(arch, "%i", &arranjo[i]);
    } //end for
    for (int i = 0; i < n; i++)
    {
        //mostrar posicao e elemento do arranjo
        fprintf(result14,"posicao %i - elemento %i\n", i,arranjo[i]);
    } //end for

    menor = arranjo[0];

    for (int i = 0; i < n; i++)
    {
        //testar se numero e menor
        if(arranjo[i] < menor)
        {
            menor = arranjo[i];
        }
    } //end for
    fprintf(result14,"Menor numero do arranjo e %i",menor);

    return menor;

} // end menorValor ()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0814 - v0.1");
    //definir dados
    FILE *arch;
    arch = fopen("arranjo.txt", "r");
    menorValor(arch);
    
    return 0;
}
/*
Exemplo0815 - v0.1. - 19 / 11 / 2021
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

} // end contaLinhas ()

/**
 * menorValor - encontrar o maior valor em um arranjo
 * @return - numero encontrado.
 * @param arch - arquivo contendo uma quantidade de valores.
 **/
int maiorValor(FILE *arch)
{
    //definir dados
    int maior = 0;
    FILE *result15;
    result15 = fopen ("result15.txt","w");
    int n = contaLinhas(arch);
    fprintf(result15,"O arranjo possui %i posicoes.\n", n);
    int arranjo[n];
    
    for (int i = 0; i < n; i++)
    {
        //ler a quantidade n de numeros do arquivo
        fscanf(arch, "%i", &arranjo[i]);
    } //end for
    for (int i = 0; i < n; i++)
    {
        //mostrar posicao e elemento do arranjo
        fprintf(result15,"posicao %i - elemento %i\n", i,arranjo[i]);
    } //end for

    maior = arranjo[0];

    for (int i = 0; i < n; i++)
    {
        //testar se numero e maior
        if(arranjo[i] > maior)
        {
            maior = arranjo[i];
        }
    } //end for
    fprintf(result15,"Maior numero do arranjo e %i",maior);

    return maior;

} // end maiorValor ()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0815 - v0.1");
    //definir dados
    FILE *arch;
    arch = fopen("arranjo.txt", "r");
    maiorValor(arch);
    
    return 0;
}
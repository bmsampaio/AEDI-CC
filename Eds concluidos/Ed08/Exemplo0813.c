/*
Exemplo0813 - v0.1. - 18 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

/**
 * aleatorio - gerar um numero inteiro aleatorio dentro de um intervalo.
 * @return - numero inteiro gerado.
 * @param x - inicio do intervalo.
 * @param y - final do intervalo.
 **/
int aleatorio(int x, int y)
{
    int resultado = 0;
    // gerar um numero aleatorio qualquer
    int num = rand();
    //garantir que o numero pertenca ao intervalo definido
    resultado = num % y + x;
    return (resultado);
} // end aleatorio ()

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO08123 - v0.1");
    //definir dados
    FILE *Dados;
    int x , y , n;
    printf("Insira um valor inteiro:\n");
    scanf("%i",&x); 
    printf("Insira um valor inteiro maior que o anterior:\n");
    scanf("%i",&y); 
    printf("Insira a quantidade de numeros a serem gerados:\n");
    scanf("%i",&n);
    int random [n];
        //gerar n numeros aleatorios
        for(int i = 0; i < n; i++)
        {
            random[i] = aleatorio(x,y);
        }//end for
    //abrir arquivo para escrita
    Dados = fopen("DADOS.txt","w");
    fprintf(Dados, "A quantidade de numeros gerados e : %i\n", n);
    fprintf(Dados, "Os numeros percentem ao intervalo definido por {%i, %i} \n", x,y);
        //mostrar a posicao e os elementos do aranjo
        for (int i = 0; i < n; i++)
        {
            //imprimir arranjo
            printf("Posicao %i - elemento %i\n", i, random[i]);
            fprintf(Dados, "Posicao %i - elemento %i\n", i, random[i]);
        } //end for
    //fechar arquivo
    fclose(Dados);

    return 0;
}
/*
Exemplo0716 - v0.1. - 12 / 11 / 2021
Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include "io.h"

//Funcao principal
int main(void)
{
    //identificar
    IO_id("EXEMPLO0716 - v0.1");
    //definir dados
    int x = 0, contador = 0;
    float n = 0, resultado = 0, soma = 0;
    
    FILE *Exemplo0715;
    //LER aquivo
    Exemplo0715 = fopen("Exemplo0715.txt", "r");
    FILE *RESULTADO06;
    //criar aquivo
    RESULTADO06 = fopen("RESULTADO06.txt", "w");
    //ler a quantidade de numeros
    printf("Insira um valor inteiro nao nulo e positivo:\n");
    scanf("%i", &x);
    
    do
    {
        fscanf(Exemplo0715,"%f",&n);
        fprintf(RESULTADO06, "%.4f\n", n);
        soma = soma + n;
        contador++;

    }while (contador<x);
    
        fprintf(RESULTADO06, "Soma e igual = %.4f\n", soma);
   
    //fechar arquivo
    fclose(RESULTADO06);
    return 0;
}
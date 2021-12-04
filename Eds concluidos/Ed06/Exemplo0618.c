/*
 Exemplo0618 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Funcao para somar os primeiros termos pares da sequencia de Fibonacci,
 de forma recursiva.
 @return - soma dos primeiros numeros .
 @param x - quantidade de numeros impares a ser somados.
*/
float fibonacci ( int x)
{
    if (x == 1) 
    {
    return (1);
    }
  
    if (x == 2) 
    {
    return(1);
    }
  
    if(x%2==0)
    {
    return fibonacci(x-1) + fibonacci(x-2);
    }
} // end fibonacci()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0618 - Funcao fibonacci - v0.1");
     printf("A soma dos 10 primeiros numeros pares da sequencia de fibonacci e %i.",somaImpares(10));

    return 0;
}
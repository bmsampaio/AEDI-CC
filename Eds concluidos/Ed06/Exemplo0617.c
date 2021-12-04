/*
 Exemplo0617 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Funcao para somar os inversos dos primeiros numeros impares comecando de 3,
 de forma recursiva.
 @return - soma dos inversos dos primeiros numeros impares.
 @param x - quantidade de numeros impares a ser somados.
*/
float somaImparesInversos( int x)
{
    // testar se x maior que zero
    if (x > 0)
    {
        return ((somaImparesInversos (x - 1)) + (1.0/(2.0*x+1.0)));
    } // end if
} // end somaImparesInversos()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0617 - Funcao somaImparesInversos - v0.1");
     printf("A soma dos 10 primeiros numeros impares começando de 3 e %f.",somaImparesInversos(10));

    return 0;
}
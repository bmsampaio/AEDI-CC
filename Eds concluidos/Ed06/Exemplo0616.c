/*
 Exemplo0616 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Funcao para somar os primeiros numeros impares comecando de 3,
 de forma recursiva.
 @return - soma dos primeiros numeros impares.
 @param x - quantidade de numeros impares a ser somados.
*/
int somaImpares( int x)
{
    // testar se x maior que zero
    if (x > 0)
    {
        return ((2 * x) + 1 + somaImpares( x - 1)); 
    } // end if
} // end somaImpares()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0616 - Funcao somaImpares - v0.1");
     printf("A soma dos 10 primeiros numeros impares começando de 3 e %i.",somaImpares(10));

    return 0;
}
/*
 Exemplo0612 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Metodo mostrar uma quantidade x de numeros impares decrescente terminando em 3, 
 de forma recursiva.
 @param x - quantidade de numeros.
*/
void valoresImparesDescrescente(int x)
{
    // testar se x maior que zero
    if (x > 0)
    {
        printf("O numero %i e impar. \n", ((2 * x) + 1));
        //chamar a propria funcao
        valoresImparesDescrescente(x - 1);
        
    } // end if
} // end valoresImparesDescrescente()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0612 - Metodo valoresImparesDecrescente - v0.1");
    //definir dados
    int x = 0;
    int contador = 0;
        printf("%s\n", "Insira a quantidade de valores a serem gerados: ");
        //receber a quantidade de valores a serem testados
        scanf("%d", &x);
        valoresImparesDescrescente(x);

    return 0;
}
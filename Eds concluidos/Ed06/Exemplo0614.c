/*
 Exemplo0614 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Metodo mostrar uma quantidade x de numeros inversos ao cubo, 
 de forma recursiva.
 @param x - quantidade de numeros.
*/
void inversosAoCubo(int x)
{
    float denominador = 0;
    // testar se x maior que zero
    if (x >= 0)
    {
        denominador = pow(3,x);
        printf("O numero 1/%.f = %f \n", denominador , (1/denominador));
        //chamar a propria funcao
        inversosAoCubo(x - 1);
        
    } // end if
} // end inversosAoCubo()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0614 - Metodo inversosAoCubo - v0.1");
    //definir dados
    int x = 0;
    int contador = 0;
        printf("%s\n", "Insira a quantidade de valores a serem gerados: ");
        //receber a quantidade de valores a serem testados
        scanf("%d", &x);
        inversosAoCubo(x);

    return 0;
}
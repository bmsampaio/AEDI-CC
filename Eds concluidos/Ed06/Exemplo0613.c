/*
 Exemplo0613 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Metodo mostrar uma quantidade x de numeros multiplos de 5 comecando de 1,
 de forma recursiva.
 @param x - quantidade de numeros.
*/
void multiplosDe5(int x)
{
    // testar se x maior que zero
    if (x > 0 )
    {
        //chamar a propria funcao
        multiplosDe5(x - 1);
        printf("O numero %i e multiplo de 5. \n", (5 * x));
    } // end if
} // end multiplosDe5()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0613 - Metodo multiplosDe5 - v0.1");
    //definir dados
    int x = 0;
    int contador = 0;
        printf("%s\n", "Insira a quantidade de valores a serem gerados: ");
        //receber a quantidade de valores a serem testados
        scanf("%d", &x);
        multiplosDe5(x);

    return 0;
}
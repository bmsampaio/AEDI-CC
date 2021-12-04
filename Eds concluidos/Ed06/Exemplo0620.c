/*
 Exemplo0619 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 funcao para contar as letras maiusculas da cadeia,
 de forma recursiva.
 @return - quantidade de letras maiusculas
 @param y - posicao.
 @param x - cadeia de caracteres.
*/
int contarMaiusculas(int y, char x [y])
{
    int quantidade = 0;
    // testar se y e menor que o tamanho total da cadeia
    if (y > 0 )
    {
        //testar se digito e uma letra maiuscula
        if (x [y] >='A' && x [y] <='Z') 
        {
        //chamar a propria funcao
        quantidade = 1 + contarMaiusculas(y - 1, x);
        }//end if
       
    } // end if
    return (quantidade);
} // end contarMaiusculas()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0620 - Funcao contarMaiusculas - v0.1");
    //definir dados
    int y = 0;
    char x [y];
    
        printf("%s\n", "Insira o tamanho da cadeia de caracteres ");
        //receber o tamanho da cadeia
        scanf("%i",&y);
        printf("%s\n", "Insira a cadeia de caracteres ");
        //receber a cadeia
        scanf("%s",x);
        printf("O numero de letras maiusculas e %i", contarMaiusculas(y,x));

    return 0;
}
/*
 Exemplo0619 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Metodo para contar os digitos pares da cadeia,
 de forma recursiva.
 @param y - posicao.
 @param x - cadeia de caracteres.
*/
int contarPares(int y, char x [y])
{
    int contador = 0;
    // testar se y e menor que o tamanho total da cadeia
    if (y < strlen(x))
    {
        //testar se digito e par
        if (x [y] % 2 == 0) 
        {
        contador++;
        //chamar a propria funcao
        contador = contador + contarPares(y+1, x);
        }//end if
    } // end if
    return (contador);
} // end contarPares()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0619 - Funcao contarPares - v0.1");
    //definir dados
    int y = 0;
    char x [y];
    
        printf("%s\n", "Insira o tamanho da cadeia de caracteres ");
        //receber o tamanho da cadeia
        scanf("%i",&y);
        printf("%s\n", "Insira a cadeia de caracteres ");
        //receber a cadeia
        scanf("%s",x);
        printf("A soma dos digitos pares da cadeia e %i", contarPares(y,x));

    return 0;
}
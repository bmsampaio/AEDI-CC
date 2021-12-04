/*
 Exemplo0615 - v0.1. - 30 / 10 / 2021
 Author: Barbara Maria Sampaio Portes - 631948

*/
// dependencias
#include "io.h" // para definicoes proprias

/**
 Metodo dividir uma cadeia de caracteres em um caracter por cada linha,
 de forma recursiva.
 @param y - posicao.
 @param x - cadeia de caracteres.
*/
void linhas(int y, char x [y])
{
    // testar se y e menor que o tamanho total da cadeia
    if (y < strlen(x))
    {
        //imprimir uma letra em cada linha
        printf("%c\n", x [y]);
        //chamar a propria funcao
        linhas(y + 1 , x);
    } // end if
} // end linhas()
//Funcao principal
int main(void)
{
    IO_id("EXEMPLO0615 - Metodo linhas - v0.1");
    //definir dados
    int y = 0;
    char x [y];
    
        printf("%s\n", "Insira o tamanho da cadeia de caracteres ");
        //receber o tamanho da cadeia
        scanf("%i",&y);
        printf("%s\n", "Insira a cadeia de caracteres ");
        //receber a cadeia
        scanf("%s",x);
        linhas(y,x);

    return 0;
}
#include "io.h"
/**
  * Exercicio09.
  * Metodo para classificar a ordem dos caracteres.
  */
void exercicio09()
{
    // identificar
    printf("\nExercicio09");
    //definir dados
    char x [20];
    char y [20];
    char z [20];
    char alfabetocrescrente [26];
    char alfabetodecrescrente [26];

    //ler valor do teclado
    printf("\nInsira uma cadeia de caracteres:\n");
    scanf("%s",x);
    printf("\nInsira uma cadeia de caracteres:\n");
    scanf("%s",y);
    printf("\nInsira uma cadeia de caracteres:\n");
    scanf("%s",z);

    for (int i = 0; i < 26; i++)
    {
        for (int c = 65; c < 91; c++)
    {
        alfabetocrescrente[i] = c;
        printf("%c\n",alfabetocrescrente[i]);
    }
    printf("%c\n",alfabetocrescrente[i]);
    }//end for

} //end exercicio09 ( )
int main(void)
{
    exercicio09();
    return 0;
}
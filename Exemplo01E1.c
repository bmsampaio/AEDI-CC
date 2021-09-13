/*
 Exemplo01E1 - v0.1. - 11 / 09 / 2021
 Author: Barbara Maria Sampaio Portes - 631948
*/
// dependencias
#include <stdio.h>
#include <math.h> //Para operacoes matematicas
int main (void)
{
    // identificar
    printf ( "%s\n", "Exemplo01E1 - Programa = v0.1" );
    printf ( "%s\n", "Autor: Barbara Maria Sampaio Portes - 631948" );
    printf ( "\n" ); // mudar de linha

    //definir dado
    float A = 0;
    float a = 0;
    float r = 0;

    //Ler um valor do teclado
    printf ("Digite um valor real A :");
    scanf("%f",&A);

    /* Seja a, sendo a metade de A, a area de uma circunferencia,
    o raio de uma circunferencia pode ser calculado por,
    r= raiz quadrada de (a/pi)
    */
    printf ("Seja a, sendo a metade de A, a area de uma circunferencia,\n");
    a = A/2;
    r = sqrt(a/(M_PI));
    printf ("O raio dessa circunferencia e %f.\n",r);

    return(0);
}

/*
 Exercicio_A01 - v0.0. - 25 / 10 / 2020
 Matricula: 631948 Author: Barbara Maria Sampaio Portes
*/
// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define bool  int
#define false 0
#define true (!false)

 /*
   Questao_01.

   Exemplos:
   1. N = 7
      TETO = 50
      resultados = 48 (6) [SIM]
   2. N = 7
      TETO = 75
      resultados = 63 (7) [NAO]
   3. N = 7
      TETO = 15
      resultados = 12 (3) [SIM]
 */
 void questao01 ( void )
 {
    int   N      = 0;
    int   TETO   = 0;
    int   SOMA   = 0;
    int   USADOS = 0;
    char *SIM    = "SIM";
    int contador = 0;

    printf ( "\nQuestao_01\n" );

    scanf  ( "%d", &N );
    scanf  ( "%d", &TETO );
    printf ( "\nN = %d TETO = %d\n", N, TETO );

    for (int i = 1; i <= N; i++)
    {
      do
      {
       SOMA = SOMA + 4;
       contador++;
      }while(contador<1);   // OBS.: REPETICAO SEM SENTIDO.
      do
      {
       SOMA = SOMA + 1;
       contador++;
      }while(contador<1);   // OBS.: REPETICAO SEM SENTIDO.
     
    }
    
    

    printf ( "\nresultado = %d (%d) [%s]\n", SOMA, USADOS, SIM );
 }

  /*
    Questao_02.

    Exemplos:
    1. X = 1
       Y = 2
       RESPOSTA = 1
    2. X = 21
       Y = 13
       RESPOSTA = 13
    3. X = 125
       Y = 421
       SEM RESPOSTA
  */
 void questao02 ( void )
 {
    int X = 0;
    int Y = 0;
    int Z = 0;
    int contadorx = 0, contadory = 0;

    printf ( "\nQuestao_02\n" );

    scanf  ( "%d", &X );
    scanf  ( "%d", &Y );

    printf ( "\nX = %d Y = %d\n", X, Y );

    if (X % 2 != 0)         // OBS.: TESTAR CADA ALGARISMO
    {
       if (X % 3 != 0 )
       {
          if (X % 5 != 0)
          {
            contadorx++;
          }
       }
    }
    if (Y % 2 != 0)         // OBS.: TESTAR CADA ALGARISMO
    {
       if (Y % 3 != 0 )
       {
          if (Y % 5 != 0)
          {
            contadory++;
          }
       }
    }

   if (contadorx>contadory)
   {
      printf ( "\nRESPOSTA = %d\n", contadorx );
   }                      // OBS.: MELHOR COLOCAR else.
   if (contadorx<contadory)
   {
      printf ( "\nRESPOSTA = %d\n", contadory );
   }
                          // OBS.: E QUANDO NAO TIVER RESPOSTA?

 }

 /*
   Modelo de funcao para tratar vogais minusculas.
 */
 int filtrar ( char* cadeia)
 {
    int length = strlen(cadeia);
   
   for (int i = 1; i < length-1; i++)
   {
   
       if ( cadeia[i] =='a'|| cadeia[i] =='e'|| cadeia[i] =='i' || cadeia[i] =='o' || cadeia[i] =='u')
         {
            cadeia[i]= '_';
         }
        
   }
     return printf ( "\nSaida   = %s\n", cadeia );
 }

 /*
   Questao_03

   Exemplos:
   1. chars s1 = filtrar ( "abacaxi" ); // s1 = "ab_c_xi"
   2. chars s2 = filtrar ( "abacAxi" ); // s2 = "ab_cAxi"
   3. chars s3 = filtrar ( "acerola" ); // s3 = "_c_r_l_"
   4. chars s4 = filtrar ( "Acerola" ); // s4 = "Ac_r_la"
 */
 void questao03 ( void )
 {
    char  sx [ 80 ];
    char  sy [ 80 ];
    //strcpy ( sy, filtrar(sx) );

    printf ( "\nQuestao_03\n" );

    scanf  ( "%s", sx );
    printf ( "\nEntrada = %s\n", sx );

    filtrar(sx);

   
    
 }

 /*
  _____________________________________

               ATENCAO !!!
        O codigo abaixo contem,
           intencionalmente,
      comandos que NAO funcionam!
  _____________________________________

 */
 double f ( int x, double y )
 {
       y = M_PI * pow ( x, 2 );
       return ( (1.0/3.0)  * y );
 }

 /*
    Questao_04.

    Exemplos:
    x = 5
    
    y = f ( 4 ) = 16.755161
    
    y = f ( 3 ) = 9.424778
    
    y = f ( 2 ) = 4.188790

    y = f ( 1 ) = 1.047198

    y = f ( 0 ) = 0.000000
  */
  void questao04 ( void )
  {
    int    x = 0;
    double    y = 0;
    bool   z = false;

    scanf  ( "%d", &x );
    printf ( "\nx = %d\n", x );
    do
    {
       x = x - 1;
       y = f ( x, y );
       printf ( "\ny = f ( %d ) = %lf\n", x,y );
       z = x != y;
    }
    while ( z );
 }

 /*
   Acao principal
 */
 int main ( void )
 {
     int option = 0;
     printf ( "A01 - 631948 - Barbara Maria Sampaio Portes" );
     do
     {
//     printf ( "\n\nOption?\n" );
       scanf  ( "%d", &option );
       printf ( "\nOpcao = %d\n", option );
       switch ( option )
       {
         case 0: break;
         case 1: questao01 ( ); break;
         case 2: questao02 ( ); break;
         case 3: questao03 ( ); break;
         case 4: questao04 ( ); break;
       }
     }
     while ( option != 0 );
     return ( 0 );
 }

 /*
     Testes e anotacoes
 */
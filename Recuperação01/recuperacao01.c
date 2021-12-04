/**
  * ---------------------------------------------- Documentacao preliminar
  * Pontificia Universidade Catolica de Minas Gerais
  * Curso de Ciencia da Computacao
  * Algoritmos e Estruturas de Dados I
  *
  * Trabalho de recuperacao
  *
  * Autor: Barbara Maria Sampaio Portes  Matricula: 631948 
  * Versao:  1.0                Data: 01/11/2021
  *
  */

// ---------------------------------------------- classes nativas
//                                                ou auxiliares

#include "io.h"

  /**
  * Exercicio01.
  * Metodo para classificar os numeros como positivo ou negativo,
  * impar ou par, ou 0.
  */
void exercicio01()
{
    // identificar
    printf("\nExercicio01");
    //definir dados
    int n = 0, y = 0;
    //ler valor do teclado
    printf("\nInsira um valor inteiro:\n");
    scanf("%i", &n);
    int x[n];
    printf("Insira %i numeros:\n", n);

    for (int i = 0; i < n; i++)
    {
        // ler n numeros inteiros
        scanf("%i", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /*Classificar os numeros como positivo ou negativo,
     impar ou par, ou 0.*/
        //testar se e 0
        if (x[i] == 0)
        {
            printf("O numero %i e zero.\n", x[i]);
        } //end if
        //testar se e positivo
        if (x[i] > 0)
        {
            //testar se par
            if (x[i] % 2 == 0)
            {
                printf("O numero %i e positivo e par.\n", x[i]);
            } //end if
            //se nao for par -- impar
            else
            {
                printf("O numero %i e positivo e impar.\n", x[i]);
            } //end else
        }     //end if
        //testar se e negativo
        if (x[i] < 0)
        {
            //testar se par
            if (x[i] % 2 == 0)
            {
                printf("O numero %i e negativo e par.\n", x[i]);
            } //end if
            //se nao for par -- impar
            else
            {
                printf("O numero %i e negativo e impar.\n", x[i]);
            } //end else
        }     //end else
    }         //end for

} //end exercicio01 ( )

/**
  * Exercicio02.
  * Metodo para contar os numeros positivo ou negativo,
  * impar ou par, ou 0, e dizer qual e o de maior quantidade.
  */
void exercicio02()
{
    // identificar
    printf("\nExercicio01");
    //definir dados
    int n = 0;
    int contadorPos = 0, contadorNeg = 0, contadorZero = 0, contadorPar = 0, contadorImp = 0;
    //ler valor do teclado
    printf("\nInsira um valor inteiro:\n");
    scanf("%i", &n);
    int x[n];
    printf("Insira %i numeros:\n", n);

    for (int i = 0; i < n; i++)
    {
        // ler n numeros inteiros
        scanf("%i", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /*Classificar os numeros como positivo ou negativo,
     impar ou par, ou 0.*/
        //testar se e 0
        if (x[i] == 0)
        {
            contadorZero++;
        } //end if
        //testar se e positivo
        else if (x[i] > 0)
        {
            contadorPos++;
        } //end if
        //testar se e negativo
        else
        {
            contadorNeg++;
        } //end else

        //testar se par
        if (x[i] % 2 == 0 && x[i] != 0)
        {
            contadorPar++;
        } //end if
        //se nao for par -- impar
        else if (x[i] % 2 != 0 && x[i] != 0)
        {
            contadorImp++;
        } //end else
    }     //end for

    //testar se o numero de zeros e maior
    if (contadorZero > contadorPos && contadorZero > contadorNeg &&
        contadorZero > contadorPar && contadorZero > contadorImp)
    {
        printf("A quantidade de numeros zeros e %i, ela maior que o de numeros negativos, positivos, impares ou pares.", contadorZero);
    } //end if
    //testar se o numero de positivos e maior
    if (contadorPos > contadorZero && contadorPos > contadorNeg &&
        contadorPos > contadorPar && contadorPos > contadorImp)
    {
        printf("A quantidade de numeros positivos e %i, ela maior que o de numeros zeros, negativos, impares ou pares.", contadorPos);
    } //end if
    //testar se o numero de negativos e maior
    if (contadorNeg > contadorPos && contadorNeg > contadorZero &&
        contadorNeg > contadorPar && contadorNeg > contadorImp)
    {
        printf("A quantidade de numeros negativos e %i, ela maior que o de numeros zeros, positivos, impares ou pares.", contadorNeg);
    } //end if
    //testar se o numero de pares e maior
    if (contadorPar > contadorPos && contadorPar > contadorNeg &&
        contadorPar > contadorZero && contadorPar > contadorImp)
    {
        printf("A quantidade de numeros pares e %i, ela maior que o de numeros zeros, negativos, positivos e impares", contadorPar);
    } //end if
      //testar se o numero de impares e maior
    if (contadorImp > contadorPos && contadorImp > contadorNeg &&
        contadorImp > contadorZero && contadorImp > contadorPar)
    {
        printf("A quantidade de numeros impares e %i, ela maior que o de numeros zeros, negativos, positivos e pares", contadorImp);
    } //end if

} //end exercicio02 ( )

/**
  * Exercicio03.
  * Metodo para classificar os caracteres.
  */
void exercicio03()
{
    // identificar
    printf("\nExercicio03");
    //definir dados
    char cadeia[30];
    printf("Insira uma cadeia de caracteres:\n");
    scanf("%s", cadeia);
    int length = strlen(cadeia);

    for (int i = 0; i < length; i++)
    {
        //testar se e letra
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z' || cadeia[i] >= 'A' && cadeia[i] <= 'Z')
        {
            printf("O caracter %c e uma letra.\n", cadeia[i]);
        } //end if
        //testar se e letra
        else if (cadeia[i] >= '0' && cadeia[i] <= '9')
        {
            printf("O caracter %c e um digito.\n", cadeia[i]);
        } //end if
        //testar se e operador logico
        else if (cadeia[i] == '&' || cadeia[i] == '|' || cadeia[i] == '!')
        {
            printf("O caracter %c e um operador logico.\n", cadeia[i]);
        } //end if
        //testar se e operador aritimetico
        else if (cadeia[i] == '+' || cadeia[i] == '-' || cadeia[i] == '*' || cadeia[i] == '/' || cadeia[i] == '%')
        {
            printf("O caracter %c e um operador aritimetico.\n", cadeia[i]);
        } //end if
        //testar se e operador relacional
        else if (cadeia[i] == '=' || cadeia[i] == '<' || cadeia[i] == '>')
        {
            printf("O caracter %c e um operador relacional.\n", cadeia[i]);
        } //end if
        //testar se e separador
        else if (cadeia[i] == ' ' || cadeia[i] == '.' || cadeia[i] == ',' || cadeia[i] == ';' || cadeia[i] == '_' || cadeia[i] == ':')
        {
            printf("O caracter %c e um separador.\n", cadeia[i]);
        } //end if
        //outros simbolos
        else
        {
            printf("O caracter %c e um outro tipo de simbolo.\n", cadeia[i]);
        } //end else
    }     //end for
} //end exercicio03 ()

/**
  * Exercicio03.
  * Metodo para contar cada tipo de caracter
  */
void exercicio04()
{
    // identificar
    printf("\nExercicio04");
    //definir dados
    int contletra = 0, contdig = 0, contlog = 0, contari = 0, contsep = 0, contrel = 0, contsim = 0;
    char cadeia[30];
    printf("Insira uma cadeia de caracteres:\n");
    scanf("%s", cadeia);
    int length = strlen(cadeia);

    for (int i = 0; i < length; i++)
    {
        //testar se e letra
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z' || cadeia[i] >= 'A' && cadeia[i] <= 'Z')
        {
            contletra++;
        } //end if
        //testar se e digito
        else if (cadeia[i] >= '0' && cadeia[i] <= '9')
        {
            contdig++;
        } //end if
        //testar se e operador logico
        else if (cadeia[i] == '&' || cadeia[i] == '|' || cadeia[i] == '!')
        {
            contlog++;
        } //end if
        //testar se e operador aritimetico
        else if (cadeia[i] == '+' || cadeia[i] == '-' || cadeia[i] == '*' || cadeia[i] == '/' || cadeia[i] == '%')
        {
            contari++;
        } //end if
        //testar se e operador relacional
        else if (cadeia[i] == '=' || cadeia[i] == '<' || cadeia[i] == '>')
        {
            contrel++;
        } //end if
        //testar se e separador
        else if (cadeia[i] == ' ' || cadeia[i] == '.' || cadeia[i] == ',' || cadeia[i] == ';' || cadeia[i] == '_' || cadeia[i] == ':')
        {
            contsep++;
        } //end if
        //outros simbolos
        else
        {
            contsim++;
        } //end else
    }     //end for
    printf("O numero de letras e %i.\n", contletra);
    printf("O numero de digitos e %i.\n", contdig);
    printf("O numero de operadores logicos e %i.\n", contlog);
    printf("O numero de operadores aritimeticos e %i.\n", contari);
    printf("O numero de operadores relacionais e %i.\n", contrel);
    printf("O numero de separadores e %i.\n", contsep);
    printf("O numero de outros tipos de simbolos %i.\n", contsim);
} //end exercicio04 ()

void exercicio05()
{
   // identificar
   printf("\nExercicio05");
   //definir dados
   int n = 0, y = 0;
   int cont1 = 0, cont2 = 0, cont3 = 0;
   float media1 = 0, media2 = 0, media3 = 0;
   //ler valor do teclado
      printf("\nInsira um valor inteiro:\n");
      scanf("%i", &n);
   int x[n];
      printf("Insira %i numeros:\n", n);
   
   for (int i = 0; i < n; i++)
   {
      // ler n numeros inteiros
      scanf("%i", &x[i]);
   }
   for (int i = 0; i < n; i++)
   {
      //testar se numero e menor que -13.75
      if (x[i] < -13.75)
      {
         media1 = media1 + x[i];
         cont1++;
      }//end if
      //testar se numero e maior que -13.75 e menor que 85.25
      if (x[i] >= -13.75 && x[i] <= 85.25 )
      {
         media2 = media2 + x[i];
         cont2++;
      }//end if
      //testar se numero e menor que -13.75
      if (x[i] > 85.25)
      {
         media3 = media3 + x[i];
         cont3++;
      }//end if
   }//end for

    printf("A media dos numeros menores que -13.75 e %f\n",media1/cont1);
    printf("A media dos numeros maiores que -13.75 e menores que 85.25 e %f\n",media2/cont2);
    printf("A media dos numeros maiores que 85.25 e %f\n",media3/cont3);

   //testar se media1 e a menor
   if (media1 < media2 && media1 < media3)
   {
      printf("A menor media e a media %f\n",media1/cont1);
   }//end if
   //testar se media2 e a menor
   if (media2 < media1 && media2 < media3)
   {
      printf("A menor media e a media %f\n",media2/cont2);
   }//end if
   //testar se media3 e a menor
   if (media3 < media2 && media3 < media1)
   {
      printf("A menor media e a media %f\n",media3/cont3);
   }//end if
} //end exercicio05 ( )

/**
  * Exercicio06.
  * Metodo para verificar se o numero pertence a um intervalo,
  * e calcular a soma dos inversos desses numeros.
  */
void exercicio06()
{
    // identificar
    printf("\nExercicio06");
    //definir dados
    int a = 0, b = 0, y = 0; 
    double potencia = 0, soma = 0, inverso = 0;
    int x[50];
        //ler valor do teclado
        printf("\nInsira um valor inteiro:\n");
        scanf("%i", &a);
        printf("Insira um valor inteiro:\n");
        scanf("%i", &b);
        printf("Insira outros valores, sendo o ultimo numero -1:\n");

    do
    {
        y++;
        // ler n numeros inteiros
        scanf("%i", &x[y]);
    }while (x[y] != -1);
   
    for (int i = 0; i < y; i++)
    {
        //testar se numero pertence ao intervalo
        if(x[i] > a && x[i] < b && x[i] != 0 )
        {
            potencia = pow(x[i],3);
            inverso = 1/pow(x[i],3);
            soma = soma + inverso;
            printf("O cubo de %i e %.lf\n",x[i],potencia);
            printf("O inverso de 1/%.lf e %lf\n",potencia,inverso);
        }//end if
        // testar se numero e 0
        if (x[i]==0)
        {
            printf("Impossivel calcular o inverso de 0.\n");
        }//end if
    }//end for  
    printf("A soma dos inversos dos cubos e %lf\n",soma);
} //end exercicio06 ( )

/**
  * Exercicio07.
  * Metodo para calcular a porcentagem de numeros que estao fora do intervalo definido.
  */
void exercicio07()
{
    // identificar
    printf("\nExercicio07");
    //definir dados
    int contadordentro = 0, contadorfora = 0, contadoracima = 0, contadorabaixo = 0, y = 0;
    double a = 0, b = 0, porcentagem1 = 0, porcentagem2 = 0, total = 0;
    double x[50];
    //ler valor do teclado
    printf("\nInsira um valor real:\n");
    scanf("%lf", &a);
    printf("Insira um valor real:\n");
    scanf("%lf", &b);
    printf("Insira outros valores reais, sendo o ultimo numero 0:\n");

    do
    {
        y++;
        // ler n numeros inteiros
        scanf("%lf", &x[y]);
    } while (x[y] != 0);

    for (int i = 0; i < y; i++)
    {
        //testar se numero e 0
        if (x[i] == 0)
        {
            //fazer nada
        }//end if
        //testar se numero pertence ao intervalo
        else if (x[i] > a && x[i] < b)
        {
            contadordentro++;
        } //end else if
        else
        {
            contadorfora++;
            //testar se numero esta acima do intervalo
            if (x[i] >= b)
            {
                contadoracima++;
            }//end if
            //testar se numero esta abaixo do intervalo
            if (x[i] <= a)
            {
                contadorabaixo++;
            }//end if
        }//end else

    } //end for

    /*
    Para calcularmos a porcentagem de valores acima ou abaixo do intervalo basta fazer uma regra de 3,
       total de numeros     ------ 100
    quantidade acima/abaixo ------  porcentagem
    total de numeros * porcentagem = quantidade acima/abaixo * 100
    porcentagem = (quantidade acima/abaixo * 100)/total de numeros
    */
    total = contadordentro + contadorfora;
    porcentagem1 = (contadoracima * 100) / total;
    printf("A porcentagem de numeros acima do intervalo e %lf\n", porcentagem1);

    total = contadordentro + contadorfora;
    porcentagem2 = (contadorabaixo * 100) / total;
    printf("A porcentagem de numeros abaixo do intervalo e %lf\n", porcentagem2);
} //end exercicio07 ( )

/**
  * Exercicio08.
  * Metodo para classificar a ordem dos numeros.
  */
void exercicio08()
{
    // identificar
    printf("\nExercicio08");
    //definir dados
    double x = 0, y = 0, z = 0;
    //ler valor do teclado
    printf("\nInsira um valor real:\n");
    scanf("%lf", &x);
    printf("Insira um valor real:\n");
    scanf("%lf", &y);
    printf("Insira um valor real:\n");
    scanf("%lf", &z);

    //testar se numeros estao em ordem crescente
    if (x < y && y < z)
    {
        printf("Os numeros estao em ordem crescente.\n");
    } //end if
    //testar se numeros estao em ordem decrescente
    else if (z < y && y < x)
    {
        printf("Os numeros estao em ordem decrescente.\n");
    } //end else if
    //os numeros nao estao em ordem
    else
    {
        printf("Os numeros nao estao em ordem.\n");
        //testar qual e o menor numeros
        if (x < y && x < z)
        {
            printf("O menor numero e %2.lf\n", x);
        }
        if (y < x && y < z)
        {
            printf("O menor numero e %2.lf\n", y);
        }
        if (z < y && z < z)
        {
            printf("O menor numero e %2.lf\n", z);
        }
        //testar qual e o maior numero
        if (x > y && x > z)
        {
            printf("O maior numero e %2.lf\n", x);
        }
        if (y > x && y > z)
        {
            printf("O maior numero e %2.lf\n", y);
        }
        if (z > y && z > z)
        {
            printf("O maior numero e %2.lf\n", z);
        }
    }//end else

} //end exercicio08 ( )

/**
  * Exercicio09.
  * Metodo para classificar a ordem dos caracteres.
  */
void exercicio09()
{
    // identificar
    printf("\nExercicio09");
    //definir dados
    char x = '-';
    char y = '-';
    char z = '-';
    //ler valor do teclado
    printf("\nInsira um caracter:\n");
    x = getchar();
    x = getchar();
    printf("\nInsira um caracter:\n");
    y = getchar();
    y = getchar();
    printf("\nInsira um caracter:\n");
    z = getchar();
    z = getchar();

    //testar se caracteres estao em ordem crescente
    if (x < y && y < z)
    {
        printf("Os caracteres estao em ordem alfabetica crescente.\n");
    } //end if
    //testar se caracteres estao em ordem decrescente
    else if (z < y && y < x)
    {
        printf("Os caracteres estao em ordem alfabetica decrescente.\n");
    } //end else if
    //os caracteres nao estao em ordem
    else
    {
        printf("Os caracteres nao estao em ordem.\n");

    } //end else

} //end exercicio09 ( )

int main(void)
{
    // definir dados
    int opcao = 0;


    IO_clrscr();  // para limpar a tela
    printf("\n"); // para saltar linha
    printf("Recuperacao - v.0.1 - 01/11/2021\n");
    printf("Matricula: 631948 Nome: Barbara Maria Sampaio Portes\n");
    printf("\n"); // para saltar linha

    // mostrar opcoes
    printf("Opcoes:\n");
    printf("0 - parar\n");
    printf("01 - exercicio 01\n");
    printf("02 - exercicio 02\n");
    printf("03 - exercicio 03\n");
    printf("04 - exercicio 04\n");
    printf("05 - exercicio 05\n");
    printf("06 - exercicio 06\n");
    printf("07 - exercicio 07\n");
    printf("08 - exercicio 08\n");
    printf("09 - exercicio 09\n");
    printf("10 - exercicio 10\n");
    printf("\n"); // para saltar linha

    // ler opcao
    printf("Qual a sua opcao? \n");
    scanf("%i", &opcao);

    // escolher acao
    switch (opcao)
    {
    case 0:
        break;
    case 1:
        exercicio01();
        break;
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 5:
        exercicio05();
        break;
    case 6:
        exercicio06();
        break;
    case 7:
        exercicio07();
        break;
    case 8:
        exercicio08();
        break;
    case 9:
        exercicio09();
        break;
    case 10:
        //    exercicio10();
        break;
    default:
        printf("\nERRO: Opcao invalida.\n");
        break;
    } // fim escolher

    return 0;
} //end main ()
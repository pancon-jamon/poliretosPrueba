/*
Autor: Claudia Coello
Descripcion: Series numericas
*/
#include <stdio.h>
//serie 1
string coelloSerieNumericaFibonacci(int cantidad)
{
    printf ("Serie 1.1:\t ");
    int a =0, b=1, c=1;
    for (int i = 0; i < cantidad; i++)
    {
        printf("%i",&c);
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    printf("\t");
    cantidad =0;
    printf("\n");
}

//serie 2
string coelloCaracterFibonacciMas(int cantidad)
{
    printf ("Serie 2.2: ");
    int a =0, b=1, c=1;
    for (int i = 0; i < cantidad; i++)
    {
        printf(" +");
        for (int s = 0; s < c; s++)
            printf ("+");
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    cantidad =0;
    printf("\ncoelloCaracterFibonacciMas.cantida %i",cantidad); 
    printf("\n");
}

//serie 3

string coelloCaracterFibonacciMasDesde2(int cantidad)
{
    printf ("Serie 2.2: ");
    int a =0, b=1, c=1;
    for (int i = 1; i < cantidad; i++)
    {
        printf(" +");
        for (int s = 0; s < c; s++)
            printf ("+");
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    cantidad =0;
    printf("\n %i",cantidad); 
    printf("\n");
}

stringcoelloCaracterAlternado(int n)// + - + - ...//
{
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
        printf (" \n ");

}

stringcoelloSerieNumericaParImparConCeros(int n)
{
    for (int i=0; i<=n; i++)
        {
            if (i%2==0) 
                printf (" 0 ");
            else
                printf (" %i ",i);
        }
    printf (" \n ");

}

stringcoelloSeriePotencias(int n)
{
    printf("Serie 1.6: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s=0;
            s=i*j;
            printf ("%i\t",&s);
        }
        
    }
    printf ("\n");

}

stringcoelloSerieMasTres(int n){
    printf ("Serie numerica 1.7 \t");
    for (int i = 1; i < n; i+3)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

stringcoelloSerieMasCinco(int n){
    printf ("Serie numerica 1.8 \t");
    for (int i = 3; i < n; i+5)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

stringcoelloSeriePorDos(int n){
    printf ("Serie numerica 1.9 \t");
    for (int i = 1; i < n; i*2)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

stringcoelloSeriePorTres(int n){
    printf ("Serie numerica 1.10 \t");
    for (int i = 1; i < n; i*3)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}



stringMenu()
{
    coelloSerieNumericaFibonacci();
    coelloCaracterAlternado();
    coelloSerieNumericaParImparConCeros();
    coelloSerieMasTres();
    coelloSerieMasCinco();
    coelloSeriePorDos();
    coelloSeriePotencias();
    coelloCaracterFibonacciMasDesde2();
    coelloCaracterFibonacciMas();

}


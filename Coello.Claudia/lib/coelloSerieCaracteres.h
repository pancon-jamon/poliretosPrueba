/*
Autor: Claudia Coello
Descripcion: Series de caracteres
*/
#include <stdio.h>
#include <iostream>
using namespace std;

string coelloCaracterAlternado(int n)// + - + - ...//
{
    printf ("serie 2.2: \t");
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
    printf ("\n");
}

string serieCaracterFigura2(int num)
{
    for (int i=0; i<num; i++)
    {
        printf (" \\ | / - | ");
    } 
    printf ("\n");
}



string coelloSerieCaracterFiguraMasMenos(int num)
{
    printf ("serie 2.3: \t");
    for (int i=0; i<num; i++)
    {
        printf (" + - * / \t");
    } 
    printf ("\n");
}

string coelloCaracteresMasFibonacci(int n){

    int a=0, b=1, c=1;
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < c; x++)
        {
            printf ("+\t");
            c=a+b;
            a=b;
            b=c;
            printf (" ");
        }
        
    }
    
}

string imprimirCaracteres()
{
    int numero=0;
    coelloCaracterAlternado(numero);
    serieCaracterFigura2(numero);
    serieCaracterAbecedario(numero);
    coelloSerieCaracterFiguraMasMenos(numero);

}
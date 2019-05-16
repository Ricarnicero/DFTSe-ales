#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#ifndef _TDF
#define _TDF
double PI = 3.14159265359;
//Obtiene la parte Real e Imaginaria (double[0] y double[1])
//del sumando de la sumatoria
double getSumandoReal(int x, int fx, int u, int N);
double getSumandoImg(int x, int fx, int u, int N);

double getSumandoReal(int x, int fx, int u, int N){
    double real,img,aux;
    aux=(2*PI*u*x)/N;

    real = cos(aux);
    real *= fx;
    printf("\t%d(cos(2pi(%d)(%d)/%d) ",fx,u,x,N);
    return real;
}
double getSumandoImg(int x, int fx, int u, int N){
    double real,img,aux;
    aux=(2*PI*u*x)/N;

    img = (-1)*sin(aux);
    img *= fx;
    printf("+ j sen(2pi(%d)(%d)/%d) ) + \n",u,x,N);
    return img;
}
#endif

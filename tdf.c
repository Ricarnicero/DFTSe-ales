#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tdf.h"

int main(int argc, char **argv) {
    if(argc != 2){
        printf("Escribe una sola cadena de numeros separadas por ','\n");
        printf("Por ejemplo ./tdf 2,3,4,4\n\n");
        return -1;
    }
    const char s[2] = ",";
    char *token;
    int N = 0;
    int datos[1000];
   
    /* get the first token */
    token = strtok(argv[1], s);
    
    /* walk through other tokens */
    printf("f(x) = {");
    while( token != NULL ) {
        printf( "%s, ", token );
        datos[N] = atoi(token);
        N+=1;
        token = strtok(NULL, s);
    }
    printf("}\n\n");
    double real,img;
    for(int u = 0; u < N; u++){        
    real = img = 0.0;
    printf("Para F(%d) = 1/%d [\n",u,N);
        for(int x = 0; x < N; x++){
            real += getSumandoReal(x,datos[x],u,N);
            img += getSumandoImg(x,datos[x],u,N);
        }
        printf("\t]\n");
        printf("F(%d) = 1/%d[%.2f + j (%.2f)] = ",u,N,real,img);
        real /= N;
        img /= N;
        printf(" %.2f + j (%.2f)\n\n",real,img);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_NUMBER 6

int par (int numero[]) {
    int a, contadorPar = 0;
    
    for (a = 0; a < MAX_NUMBER; a++) {
        if (numero[a] % 2 == 0) {
            contadorPar++;
        }
    }
    return contadorPar;
}

int impar (int numero[]) {
    int a, contadorImpar = 0;
    
    for (a = 0; a < MAX_NUMBER; a++) {
        if (numero[a] % 2 != 0) {
            contadorImpar++;
        }
    }
    return contadorImpar;
}


int main ( ) {
    setlocale (LC_ALL, "");
    
    int a;
    int valor[MAX_NUMBER], pares, impares;
    
    for (a = 0; a < MAX_NUMBER; a++) {
        printf ("Digite o %dº número: ", a+1);
        scanf ("%d", &valor[a]);
        
        pares = par(valor);
        impares = impar(valor);
    }
    
    printf ("\nQuantidade de números pares: %d\n", pares);
    printf ("Quantidade de números ímpares: %d\n", impares);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define MAX_NUMBER 5

int main ( ) {
    setlocale (LC_ALL, "portuguese");
    
    int a;
    int valor[MAX_NUMBER];
    int maior = INT_MIN, menor = INT_MAX;
    int negativo = 0, contadorPar = 0, somaPar = 0, somaGeral = 0;
    float media_Geral, media_Par;
    
    for (a = 0; a < MAX_NUMBER; a++) {
        printf ("Digite o %dº número: ", a+1);
        scanf ("%d", & valor[a]);
        
        if (valor[a] < 0) {
            negativo++;
        }
        
        if (valor[a] % 2 == 0) {
            contadorPar++;
            somaPar += valor[a];
        }
        
        maior = valor[a] > maior ? valor[a] : maior;
        menor = valor[a] < menor ? valor[a] : menor;
        somaGeral += valor[a];
    }
    
    if (contadorPar > 0) {
        media_Par = (float)somaPar / (float)contadorPar;    
    
    } else {
        media_Par = 0;
    }
    
    media_Geral = (float) somaGeral / (float) MAX_NUMBER;
    
    system ("clear");
    
    printf ("\nQuantidade de números pares: %d\n", contadorPar);
    printf ("Quantidade de números negativos: %d\n", negativo);
    printf ("Maior número: %d\nMenor número: %d\n", maior, menor);
    printf ("Média de números pares: %.2f\n", media_Par);
    printf ("Média de todos os números: %.2f\n", media_Geral);
    
    return 0;
}

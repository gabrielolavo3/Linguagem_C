#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"");


// Declaração de variáveis

    int a;
    int tamanho = 3;
    float nota[tamanho], media, soma;

// Solicitando dados

    for (a = 0; a < tamanho; a++) {
        printf ("Digite a %dª nota: ", a + 1);
        scanf ("%f", &nota[a]); 
        
        soma += nota[a]; 
        } 
    
    media = soma / tamanho; 

        system ("cls");
    for (a = 0; a < tamanho; a++) {
        printf ("%dª nota: %.2f\n", a+1, nota[a]); }
        printf ("%.2f", media);

    return 0;
}
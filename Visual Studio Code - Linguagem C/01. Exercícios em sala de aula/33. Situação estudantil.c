#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"");


// Declara√ß√£o de vari√°veis

    int a;
    int tamanho = 4;
    float nota[tamanho], media, soma;

// Solicitando dados
    
    for (a = 0; a < tamanho; a++) {

    do
    {
    
        printf ("Digite a %d™ nota: ", a + 1);
        scanf ("%f", &nota[a]); 
        
        soma += nota[a]; 
         
    } while (nota[a]< 0 || nota[a] > 10); }
    
    media = soma / tamanho; 

        system ("cls");
    for (a = 0; a < tamanho; a++) {
        printf ("%d™ nota: %.2f\n", a+1, nota[a]); }
        printf ("%.2f", media);

        if (media >=7) {
            printf ("Aprovado");
        } else if (media>=5) }
        

    return 0;
}
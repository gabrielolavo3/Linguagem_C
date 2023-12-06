#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    
// Declarando vari veis

    int a, numero;

// Solicitando dados

    printf ("Informe um valor: ");
    scanf ("%d", &numero);

// Elaborando a tabuada

    for (a = 1; a <= 10; a++) {
        printf ("%d x %d = %d \n", numero, a , a * numero); 
    } 
    
    return 0;
}

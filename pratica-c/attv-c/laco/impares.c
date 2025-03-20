#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

int a; 

// Versão  1 
for (a = 1; a <= 15; a+=2) {
    printf ("%d \n", a); } 

// Versão 2
for (a = 1; a <= 15; a++) {
    if ( a % 2 != 0) 
    printf ("%d \n", a); }
    
    return 0;
}

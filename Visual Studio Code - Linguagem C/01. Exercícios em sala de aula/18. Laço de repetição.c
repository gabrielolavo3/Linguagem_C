#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main (){
    setlocale (LC_ALL, "portuguese");

    int i;
/*
    for (i = 1; i < 10; i++) {
        printf ("5 x %d = %d \n", i, i*5); 
    
    ,
    } for (i = 1; i < 10; i++) {
        printf ("\n 7 x %d = %d \n", i, i*7);
    } */

// Mostrar de 10 até 1
    for (i = 10; i >= 1; i--) {
        printf ("%d \n", i); }

// Mostrar de 1 até 10
    for (i = 1; i <= 10; i++) {
        printf ("%d \n", i); }

    return 0;
}

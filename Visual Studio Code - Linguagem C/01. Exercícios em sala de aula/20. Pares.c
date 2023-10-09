#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
    int a;

// Fórmula 1
    for (a = 2; a <= 20; a+=2) {
        printf ("%d", a); }

// Fórmula 2
    for (a = 2; a <= 20; a+=2) {
        if (a % 2 == 0) {
            printf ("%d \n", a);
        }
    return 0;
}
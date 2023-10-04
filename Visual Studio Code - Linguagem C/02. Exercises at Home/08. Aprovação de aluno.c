#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    
// Declaração de variáveis

    float primeiraNota, segundaNota, media;
    char conceito [250];
    char resultado [250];

// Solicitando dados

    printf ("Informe a 1º nota: ");
    scanf ("%f", &primeiraNota);
    printf ("Informe a 2º nota: ");
    scanf ("%f", &segundaNota);

// Calculando média e limpando terminal

media = (primeiraNota + segundaNota) / 2;
system ("cls");

// Aplicando conceito de nota através da média

if (media > 9 && media <= 10) {
    strcpy (conceito, "Nota A");

} else if (media > 7.5 && media <= 9) {
    strcpy (conceito, "Nota B");

} else if (media > 6 && media <= 7.5) {
    strcpy (conceito, "Nota C"); 

} else if (media > 4 && media <= 6) {
    strcpy (conceito, "Nota D"); 

} else if (media > 0 && media <= 4) {
    strcpy (conceito, "Nota E"); }

// Tela de resultado

    printf ("Primeira nota: %.2f \n", primeiraNota);
    printf ("Segunda nota: %.2f \n", segundaNota);
    printf ("Média final: %.2f \n", media);
    printf ("Classificação da nota: %s \n", conceito);
    
    return 0;
}
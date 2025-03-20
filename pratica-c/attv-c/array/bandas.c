#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a,b;
    char nome_Banda [3][250]; 
    char integrante[3][5][250];

// Solicitando dados

    for (a = 0; a < 3; a++) {
        printf ("Informe o nome da %dª banda: ", a+1);
        gets (nome_Banda[a]);

        for (b = 0; b < 5; b++) {
            printf ("Digite o nome do %dº integrante: ", b+1);
            gets (integrante[a][b]); }

        printf ("\n");
        fflush(stdin);
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < 3; a++) {
        printf ("Nome da banda: %s\n", nome_Banda[a]);

        for (b = 0; b < 5; b++) {
            printf ("Nome do %dº integrante: %s\n", b+1,integrante[a][b]); }

        printf ("\n");
    }

    return 0;
}

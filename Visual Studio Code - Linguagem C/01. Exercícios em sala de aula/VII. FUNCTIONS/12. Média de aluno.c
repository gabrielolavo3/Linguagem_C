#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de funções e constante

#define G 3

void titulo ( ) {
    system ("cls || clear");
    printf ("COLÉGIO JOHN BROWN! Calculadora de Média Estudantil\n\n");
}

float mediaFinal (float valor[]) {
    int a;
    float soma = 0, media;

    for (a = 0; a < G; a++) {
        soma += valor[a]; }

    return media = soma / G;
}

/* O asterisco cria uma cadeia de caracteres */

char* situacao (float conclusao) {
    char resultado[250];
    resultado[250] = conclusao >= 7 ? strcpy (resultado, "Aprovado!") : strcpy (resultado, "Reprovado!");
    return resultado;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float notas[G], media;

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        do {
            printf ("Informe a %dª nota: ", a+1);
            scanf ("%f", &notas[a]);

            if (notas[G] < 0 || notas[G] > 10) {
                printf ("\nNOTA INVÁLIDA! Informe uma nota entre 0  e 10\n\n"); }
            
        } while (notas[G] < 0 || notas[G] > 10);
    }

    media = mediaFinal(notas);

// Tela de resultado
    
    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("%dª nota: %.2f\n", a+1, notas[a]);
    }
    printf ("\nMédia final: %.2f\n", media);
    printf ("Situação estudantil: %s\n", situacao(media));

    return 0;
}

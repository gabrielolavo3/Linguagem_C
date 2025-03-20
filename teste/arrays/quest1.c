/* 
Descrição  : Ler o nome, a idade, o peso e a altura de 5 pessoas com vetor e imprimir esses dados junto com: 1- a maior altura e a menor altura; 
2 - maior peso e menor peso; 3 - a maior idade e a menor idade! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define b 5

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int idade[b];
    char nome[b][250];
    float peso[b], altura[b];
    int idade_maxima = INT_MIN, idade_minima = INT_MAX;
    float altura_maxima = INT_MIN, altura_minima = INT_MAX;
    float peso_maximo = INT_MIN, peso_minimo = INT_MAX;

// Solicitando dados

    printf ("CONCRETE WALL! Centro de Tratamento de Dados\n\n");
    for (a = 0; a < b; a++) {
        fflush (stdin);
        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (nome[a]);

        do {
            printf ("Informe a idade: ");
            scanf ("%d", &idade[a]);

            if (idade[a] <= 0 || idade[a] > 160) {
                printf ("\nIDADE INVÁLIDA! Informe a sua idade real, entre 1 e 160 anos\n\n");}

        } while (idade[a] <= 0 || idade[a] > 160);

        do {
            printf ("Informe o peso: ");
            scanf ("%f", &peso[a]);

            if (peso[a] < 10 || peso[a] > 250) {
                printf ("\nPESO INVÁLIDO! Informe a sua peso entre 10Kg e 250Kg\n\n");}

        } while (peso[a] < 10 || peso[a] > 250);

        do {
            printf ("Informe o altura: ");
            scanf ("%f", &altura[a]);

            if (altura[a] < 0.80 || altura[a] > 2.20) {
                printf ("\nALTURA INVÁLIDA! Informe a altura entre 80cm e 2,20m\n\n"); }

        } while (altura[a] < 0.80 || altura[a] > 2.20);

        printf ("\n");

/* Aplicando a maior e menor idade */

        idade_maxima = idade[a] > idade_maxima ? idade[a] : idade_maxima;
        idade_minima = idade[a] < idade_minima ? idade[a] : idade_minima;

/* Aplicando a maior e menor altura */

        altura_maxima = altura[a] > altura_maxima ? altura[a] : altura_maxima;
        altura_minima = altura[a] < altura_minima ? altura[a] : altura_minima;

/* Aplicando o maior e menor peso */

        peso_maximo = peso[a] > peso_maximo ? peso[a] : peso_maximo;
        peso_minimo = peso[a] < peso_minimo ? peso[a] : peso_minimo;
    }

// Tela de resultado

system ("cls || clear");

    printf ("CONCRETE WALL! Conclusão das Informações\n\n");
    for (a = 0; a < b; a++) {
        printf ("Nome da %dª pessoa: %s\n", a+1, nome[a]);
        printf ("Idade da pessoa: %d\n", idade[a]);
        printf ("Peso da pessoa: %.2f\n", peso[a]);
        printf ("Altura da pessoa: %.2f\n", altura[a]);
        printf ("\n");
    }
    printf ("\n");
    printf ("Maior e menor idade: %d e %d\n", idade_maxima, idade_minima);
    printf ("Maior e menor altura: %.2f e %.2f\n", altura_maxima, altura_minima);
    printf ("Maior e menor peso: %.2f e %.2f\n", peso_maximo, peso_minimo);
    
    return 0;
}

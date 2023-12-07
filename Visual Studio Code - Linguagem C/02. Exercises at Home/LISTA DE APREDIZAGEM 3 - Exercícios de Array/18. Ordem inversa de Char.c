/* 
Descrção   : Ler um vetor com 5 nomes e imprimir os nomes na ordem digitada e na ordem inversa, ambos linha por linha! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    char nome[5][250];

// Solicitando dados

    printf ("INSTITUTO INFORMATION STORAGE! Centro Brasileiro de Armazenamento de Dados\n\n");
    for (a = 0; a < 5; a++) {
        fflush (stdin);
        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (nome[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO INFORMATION STORAGE!\n\n");
    for (a = 0; a < 5; a++) {
        printf ("%dº nome coletado: %s\n", a+1, nome[a]); }

    printf ("\nCriptografando as informações...\n\n");
    sleep (3);

    for (a = 4; a >= 0; a--) {
        printf ("%dº nome: %s\n",a+1, nome[a]); }

    return 0;
}
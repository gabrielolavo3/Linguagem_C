/* 
Descr��o   : Ler um vetor com 5 nomes e imprimir os nomes na ordem digitada e na ordem inversa, ambos linha por linha! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    char nome[5][250];

// Solicitando dados

    printf ("INSTITUTO INFORMATION STORAGE! Centro Brasileiro de Armazenamento de Dados\n\n");
    for (a = 0; a < 5; a++) {
        fflush (stdin);
        printf ("Informe o nome da %d� pessoa: ", a+1);
        gets (nome[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO INFORMATION STORAGE!\n\n");
    for (a = 0; a < 5; a++) {
        printf ("%d� nome coletado: %s\n", a+1, nome[a]); }

    printf ("\nCriptografando as informa��es...\n\n");
    sleep (3);

    for (a = 4; a >= 0; a--) {
        printf ("%d� nome: %s\n",a+1, nome[a]); }

    return 0;
}
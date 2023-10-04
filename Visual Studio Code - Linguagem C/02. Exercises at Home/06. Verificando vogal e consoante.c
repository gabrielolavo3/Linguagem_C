#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declarção de variáveis

    char letra;

// Solicitando dados

    printf ("BEM-VINDO AO IDENTIFICADOR DE VOCAL E CONSOANTE \n\n");
    printf ("Informe uma letra: ");
    scanf ("%c", &letra);

// Verificando a letra

if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf ("\nResultado: Essa letra é uma vogal");
} else {
    printf ("\nResultado: Essa letra é uma consoante"); }

    return 0;

}

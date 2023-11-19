#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

int nota = -1;

while (nota < 0 || nota > 10) {
    printf ("Digite a nota do aluno: ");
    scanf ("%d", &nota);

    if (nota < 0 || nota > 10) {
    printf ("Nota inválida.\n\n"); }
}

    printf ("Nota: %d \n", nota);

    return 0;
}

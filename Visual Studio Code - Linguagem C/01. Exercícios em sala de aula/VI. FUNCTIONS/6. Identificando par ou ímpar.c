#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis
    int numero;

// Coletando resultado    

    printf ("Informe um n�mero: ");
    scanf ("%d", &numero);

// Tela de resultado

    if (numero % 2 == 0) {
        printf ("O valor � par");
    }
    else {
        printf ("O valor � impar");
    }

return 0;
    
}
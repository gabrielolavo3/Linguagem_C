#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis
    int numero;

// Coletando resultado    

    printf ("Informe um número: ");
    scanf ("%d", &numero);

// Tela de resultado

    if (numero % 2 == 0) {
        printf ("O valor é par");
    } else {
        printf ("O valor é impar");
    }

return 0;
    
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis
    int numero;

// Solicitando dados

    printf ("Informe um n�mero: ");
    scanf ("%d", &numero);

// Comando SE

if (numero >= 10) {
    printf ("O n�mero � igual ou maior do que 10!");
} else { 
    printf ("O n�mero � menor do que 10!");
} 

return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis
    int numero;

// Solicitando dados

    printf ("Informe um número: ");
    scanf ("%d", &numero);

// Comando SE

if (numero >= 10) {
    printf ("O número é igual ou maior do que 10!");
} else { 
    printf ("O número é menor do que 10!");
} 

return 0;

}

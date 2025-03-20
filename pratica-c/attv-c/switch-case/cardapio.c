#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int codigo;
    char prato [250];
    float valor;

// Solicitando dados

    printf ("------------- | Restaurante Pizza Planet | -------------\n\n");
    printf ("------------------ | Cadárpio do Dia | ------------------\n\n");
    printf ("Codigo \tPrato \t\tPreco \n"); // \t equivale a tab
    printf ("01 \tPicanha \tR$ 25,00 \n");
    printf ("02 \tLasanha \tR$ 20,00 \n");
    printf ("03 \tStrogonoff \tR$ 18,00 \n");
    printf ("04 \tBife acebolado \tR$ 15,00 \n");
    printf ("05 \tPão com ovo \tR$ 5,00 \n\n");
    printf ("Informe o número do código para selecionar seu prato: ");
    scanf ("%d", &codigo);

// Validando a escolha

switch (codigo) {
case 1:
    strcpy (prato, "Picanha");
    valor = 25.00;
break;

case 2:
    strcpy (prato, "Lasanha");
    valor = 20.00;
break;

case 3:
    strcpy (prato, "Strogonoff");
    valor = 18.00;
break;

case 4:
    strcpy (prato, "Bife acebolado");
    valor = 15.00;
break;

case 5:
    strcpy (prato, "Pão com ovo");
    valor = 5.00;
break;

default: 
    printf ("Opção selecionada inválida!");
break; }

system ("cls");

// Tela de resultado

    printf ("RESTAURANTE PIZZA PLANET!\n\n");
    printf ("Número do código: %i\n", codigo);
    printf ("Nome do prato: %s\n", prato);
    printf ("Valor do prato: %.2f\n", valor);

    return 0;
}

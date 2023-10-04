#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int numero;
    char mes [250];

// Solicitando dados

    printf ("INDICADOR DE MESES DO ANO! \n\n");
    printf ("Informe um número correspondente a um mês do ano: ");
    scanf ("%d", &numero);

// Convertendo o número em meses

    switch (numero) {
    case 1:
        strcpy (mes, "Janeiro");
    break;

    case 2:
        strcpy (mes, "Fevereiro");
    break;

    case 3:
        strcpy (mes, "Março");
    break;

    case 4:
        strcpy (mes, "Abril");
    break;

    case 5:
        strcpy (mes, "Maio");
    break;

    case 6:
        strcpy (mes, "Junho");
    break;

    case 7:
        strcpy (mes, "Julho");
    break;

    case 8:
        strcpy (mes, "Agosto");
    break;

    case 9:
        strcpy (mes, "Setembro");
    break;

    case 10:
        strcpy (mes, "Outubro");
    break;

    case 11:
        strcpy (mes, "Novembro");
    break;
    
    case 12:
        strcpy (mes, "Dezembro");
    break;

    default:
        printf ("Número informado é inválido!");
    break; }

system ("cls");

// Tela de resulatdo

    printf ("Número informado: %i \n", numero);
    printf ("Mês correspondente: %s \n", mes);
    
    return 0;
}
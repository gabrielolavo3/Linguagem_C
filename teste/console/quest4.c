/* 
Descrição  : Ler a idade do usuário. Caso seja igual ou maior de 18, imprimir 'Acesso permitido', senão,
'Acesso negado'! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int idade;

// Solicitando dados

    printf ("CENTRO LOGÍSTICO STONE\nInsira o dado para obter acesso ao local\n\n");
    printf ("Informe a sua idade: ");
    scanf ("%d", &idade);

// Tela de resultado

    if (idade >= 18) {
        printf ("Acesso permitido! BEM-VINDO.");
    
    } else {
        printf ("Acesso negado!"); }
    
    return 0;
}

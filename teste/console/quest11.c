/* 
Descrição  : Solicitar ao usuário um código de acesso para entrar em um edifício. 
O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char senhadeAcesso [250] = "Stone@522";
    char senhaDigitada [250];

// Solicitando dados

do {
    printf ("CENTRO LOGÍSTCO STONE\n\n");
    printf ("Informe a senha de acesso: ");
    gets (senhaDigitada);
    
// Tela de resultado

    if (strcmp (senhadeAcesso, senhaDigitada) != 0) {
        system ("cls");
        printf ("Senha INVÁLIDA! Insira novamente...\n\n");  
    
    } else {
        printf ("\nAcesso permitido. BEM-VINDO!\n"); }

} while (strcmp (senhadeAcesso, senhaDigitada) != 0);
    
    return 0;
}

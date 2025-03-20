/* 
Descrição  : Ler a escolha de idioma do usuário e imprimir uma mensagem de Boas-vindas no idioma esolhido.
Usar 1 - Inglês, 2 - Espanhol e 3 - Francês! (função)
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

    int idioma;
    char idioma_selecionado [250], mensagem [250];

// Solicitando dados

    printf ("INSTITUTO DE ENSINO HOLMES\n\n");

do {
    printf ("Escolha um idioma\n");
    printf ("Digite 1 para o idioma Inglês\n");
    printf ("Digite 2 para o idioma Espanhol\n");
    printf ("Digite 3 para o idioma Francês\n\n");
    printf ("Selecione a língua desejada: ");
    scanf ("%d", &idioma);

// Imprimindo mensagem de boas-vindas

    switch (idioma) {
    case 1:
        break;
        strcpy (idioma_selecionado, "Inglês");
        strcpy (mensagem, "Welcome student!");
    
    case 2:
        strcpy (idioma_selecionado, "Espanhol");
        strcpy (mensagem, "Bienvenido estudiante!");
        break;
    
    case 3:
        strcpy (idioma_selecionado, "Francês");
        strcpy (mensagem, "Bienvenue étudiant!");
        break;
    
    default:
        printf ("\nOpção INVÁLIDA! Selecione novamente..\n\n");
        break; }
        
} while (idioma <= 0 || idioma > 3);

// Tela de resultado

system ("cls");
    
    printf ("INSTITUTO DE ENSINO HOLMES\n\n");
    printf ("Idioma selecionado: %s\n", idioma_selecionado);
    printf ("%s", mensagem);

    return 0;
}

/* 
Descrição  : Ler os dados de usuário e senha inseridos e verificar as informações! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 19/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    char usuario [250], login [250], senha [250], password [250];

// Solicitando dados

    printf ("BEM VINDO AO SITE DO INSTITUTO DE ESTATISTICA NACIONAL (IEN) \n\n");
    printf ("Vejo que você é novo por aqui. Por favor, crie um cadastro \n\n");
    printf ("Crie um nome para o usuário: ");
    gets (usuario);
    printf ("Crie uma senha para o seu novo nome de usuário: ");
    gets (senha);
    printf ("\nCom o seu novo cadastro, realize a login em nosso site \n");

system ("pause");
system ("cls || clear");

// Validação dos dados de cadastro e tela de resultado

do {
    printf ("BEM VINDO AO INSTITUTO DE ESTATISTICA NACIONAL (IEN) \n\n");
    printf ("Informe o nome de usuário: ");
    gets (login);
    printf ("Informe a senha de usuário: ");
    gets (password);

    if (strcmp (usuario, login) == 0 && strcmp (senha, password) == 0) {
        printf ("Login confirmado. SEJA BEM-VINDO! \n"); 
    } else {
        printf ("Senha ou usuário INVÁLIDOS! Por favor, informe os dados novamente \n\n");
        sleep (1); }
    
} while (strcmp (usuario, login) != 0 || strcmp (senha, password) != 0); 
  
    return 0;
}
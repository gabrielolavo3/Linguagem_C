/* 
Descri��o  : Realizar um cadastro online e verificar o acesso correto a conta atrav�s dos dados exatos! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    char usuario [200];
    char chave [200];
    char login [200];
    char senha [200];

// Solicitando dados

    printf ("BEM-VINDO AO SITE DO BC! Realize o seu cadastro. \n\n");
    printf ("Crie um nome para o usu�rio: ");
    gets (usuario);
    printf ("Crie uma senha para o usu�rio %s: ", usuario);
    gets (chave);
    printf ("\nCom o seu novo cadastro, realize o seu 1� login em nosso site.\n");

// Pausando e limpando o terminal

system ("pause");
system ("cls || clear");

// Tela de resultado

    printf ("BEM-VINDO AO SITE DO BC! \n\n");
    printf ("Nome de usu�rio: ");
    gets (login);
    printf ("Senha de usu�rio: ");
    gets (senha);

// Validando o cadastro e o login com StringCompare

    if (strcmp (login, usuario) == 0 && strcmp (senha, chave) == 0) {
    printf ("\nBEM-VINDO AO SITE DO BC!");
    } else {
    printf ("\nLOGIN OU SENHA INV�LIDO! Insira seus dados novamente\n\n");
    printf ("Nome de usu�rio: ");
    gets (login);
    printf ("Senha de usu�rio: ");
    gets (senha); 

    if (strcmp (login, usuario) == 0 && strcmp (senha, chave) == 0) {
    printf ("\nDados coincidem. BEM-VINDO AO SITE DO BC!");
    } else {
    printf ("\nACESSO NEGADO! Seu acesso foi suspenso temporiamente"); } }

    return 0;
}
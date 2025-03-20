/* 
Descrição  : Realizar um cadastro online e verificar o acesso correto a conta através dos dados exatos! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char usuario [200];
    char chave [200];
    char login [200];
    char senha [200];

// Solicitando dados

    printf ("BEM-VINDO AO SITE DO BC! Realize o seu cadastro. \n\n");
    printf ("Crie um nome para o usuário: ");
    gets (usuario);
    printf ("Crie uma senha para o usuário %s: ", usuario);
    gets (chave);
    printf ("\nCom o seu novo cadastro, realize o seu 1º login em nosso site.\n");

// Pausando e limpando o terminal

system ("pause");
system ("cls || clear");

// Tela de resultado

    printf ("BEM-VINDO AO SITE DO BC! \n\n");
    printf ("Nome de usuário: ");
    gets (login);
    printf ("Senha de usuário: ");
    gets (senha);

// Validando o cadastro e o login com StringCompare

    if (strcmp (login, usuario) == 0 && strcmp (senha, chave) == 0) {
    printf ("\nBEM-VINDO AO SITE DO BC!");
    } else {
    printf ("\nLOGIN OU SENHA INVÁLIDO! Insira seus dados novamente\n\n");
    printf ("Nome de usuário: ");
    gets (login);
    printf ("Senha de usuário: ");
    gets (senha); 

    if (strcmp (login, usuario) == 0 && strcmp (senha, chave) == 0) {
    printf ("\nDados coincidem. BEM-VINDO AO SITE DO BC!");
    } else {
    printf ("\nACESSO NEGADO! Seu acesso foi suspenso temporiamente"); } }

    return 0;
}

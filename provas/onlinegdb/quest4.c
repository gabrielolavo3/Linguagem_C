/* 
Descri��o  : Ler o nome, idade, n�mero de telefone e e-mail do usu�rio. Com isso fazer um menu e imprimir os dados com fun��es. O menu deve ter: 
1 - Mostrar nome e idade; 2 - Mostrar nome e e-mail; 3 - Mostrar nome e telefone; 4 - Mostrar todas as informa��es; 0 - Sair do programa. Caso seja inserido 
um n�mero diferente dos do menu, exibir mensagem de erro, limpa o terminal e exibir o menu novamente! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Declara��o de constante e fun��es

#define G 250

void titulo ( ) {
    system ("cls || clear");
    printf ("OFF PAPER! Salvamento de Informa��es Online\n\n");
}

void nomeE_idade (char* nome, int idade) {
    printf ("Nome do usu�rio: %s\n", nome);
    printf ("Idade do usu�rio: %d\n\n", idade);
}

void nomeE_email (char* nome, char* email) {
    printf ("Nome do usu�rio: %s\n", nome);
    printf ("E-mail do usu�rio: %s\n\n", email);
}

void nomeE_telefone (char* nome, char* telefone) {
    printf ("Nome do usu�rio: %s\n", nome);
    printf ("N�mero de telefone do usu�rio: %s\n\n", telefone);
}

void todasInformacoes (char* nome, int idade, char* telefone, char* email) {
    printf ("Nome do usu�rio: %s\n", nome);
    printf ("Idade do usu�rio: %d\n", idade);
    printf ("N�mero de telefone: %s\n", telefone);
    printf ("E-mail: %s\n\n", email);
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis 

    int menu;
    int idade;
    char nome[G], email[G], telefone[16];

// Solicitando dados

    titulo ( );
    printf ("Digite o seu nome: ");
    gets (nome);
    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);
    setbuf (stdin, 0);
    printf ("Digite o seu n�mero de telefone: ");
    gets (telefone);
    printf ("Digite o seu e-mail: ");
    gets (email);
 
// Menu de sele��o e tela de resultado

    titulo ( );
    do {
        printf ("C�digo | Descri��o\n");
        printf ("   1   | Mostrar nome e idade\n");
        printf ("   2   | Mostrar nome e e-mail\n");
        printf ("   3   | Mostrar nome e telefone\n");
        printf ("   4   | Mostrar todas as informa��es\n");
        printf ("   0   | Sair do programa\n\n");
        printf ("Selecione a op��o desejada: ");
        scanf ("%d", &menu);
        
        switch (menu) {
            case 1:
                titulo ( );
                nomeE_idade(nome, idade);
                break;
            
            case 2:
                titulo ( );
                nomeE_email(nome, email);
                break;
            
            case 3:
                titulo ( );
                nomeE_telefone(nome, telefone);
                break;
            
            case 4:
                titulo ( );
                todasInformacoes(nome, idade, telefone, email);
                break;
            
            case 0:
                printf ("\nOBRIGADO POR USAR O OFF PAPER! O programa foi encerrado");
            break;
            default:
                printf ("\nOp��o incorreta, tente novamente\n\n");
                sleep (2);
                titulo ( );
            break;
        }
        
    } while (menu != 0);
    
    return 0;
}
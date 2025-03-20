/* 
Descrição  : Ler o nome, idade, número de telefone e e-mail do usuário. Com isso fazer um menu e imprimir os dados com funções. O menu deve ter: 
1 - Mostrar nome e idade; 2 - Mostrar nome e e-mail; 3 - Mostrar nome e telefone; 4 - Mostrar todas as informações; 0 - Sair do programa. Caso seja inserido 
um número diferente dos do menu, exibir mensagem de erro, limpa o terminal e exibir o menu novamente! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Declaração de constante e funções

#define G 250

void titulo ( ) {
    system ("cls || clear");
    printf ("OFF PAPER! Salvamento de Informações Online\n\n");
}

void nomeE_idade (char* nome, int idade) {
    printf ("Nome do usuário: %s\n", nome);
    printf ("Idade do usuário: %d\n\n", idade);
}

void nomeE_email (char* nome, char* email) {
    printf ("Nome do usuário: %s\n", nome);
    printf ("E-mail do usuário: %s\n\n", email);
}

void nomeE_telefone (char* nome, char* telefone) {
    printf ("Nome do usuário: %s\n", nome);
    printf ("Número de telefone do usuário: %s\n\n", telefone);
}

void todasInformacoes (char* nome, int idade, char* telefone, char* email) {
    printf ("Nome do usuário: %s\n", nome);
    printf ("Idade do usuário: %d\n", idade);
    printf ("Número de telefone: %s\n", telefone);
    printf ("E-mail: %s\n\n", email);
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis 

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
    printf ("Digite o seu número de telefone: ");
    gets (telefone);
    printf ("Digite o seu e-mail: ");
    gets (email);
 
// Menu de seleção e tela de resultado

    titulo ( );
    do {
        printf ("Código | Descrição\n");
        printf ("   1   | Mostrar nome e idade\n");
        printf ("   2   | Mostrar nome e e-mail\n");
        printf ("   3   | Mostrar nome e telefone\n");
        printf ("   4   | Mostrar todas as informações\n");
        printf ("   0   | Sair do programa\n\n");
        printf ("Selecione a opção desejada: ");
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
                printf ("\nOpção incorreta, tente novamente\n\n");
                sleep (2);
                titulo ( );
            break;
        }
        
    } while (menu != 0);
    
    return 0;
}
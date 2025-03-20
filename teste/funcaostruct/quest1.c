/* 
Descrição  : Criar uma agenda de contatos usando uma struct para armazenar o nome do contato, número do telefone e email de 3 contados informados pelo usuário.
Após, solicite do usuário o nome do contato que quer ver o número de telefone. Em seguida, com função receba o nome como parâmetro, 
e retorne a impressão do número de telefone correspondente a esse nome! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 11/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, função e struct

#define MAX_PEOPLE 3
#define MAX_CHARACTER 250

struct informacao {
    char nome[MAX_CHARACTER];
    char numero_de_telefone[16];
    char email[MAX_CHARACTER];
};

void titulo ( ) {
    system ("cls || clear");
    printf ("AGENDA DE CONTATOS IN BOX!\n\n");
}

void busca_de_contato(struct informacao contato[], char* localiza_Contato) {
    int a, contador;

    for (a = 0; a < MAX_PEOPLE; a++) {
        if (strcmp(contato[a].nome, localiza_Contato) == 0) {
            titulo ( );
            printf("Contato: %s\nNúmero: %s\nE-mail: %s", contato[a].nome, contato[a].numero_de_telefone, contato[a].email);
            break;

        } else {
            contador++; } 
    }

    if (contador == MAX_PEOPLE) {
        printf("O nome do contato informado não possui registro na Agenda!"); }
}

int main() {
    setlocale(LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a;
    char localiza_Contato[MAX_CHARACTER];
    struct informacao contato[MAX_PEOPLE];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_PEOPLE; a++) {
        printf("Digite o nome do %dº contato: ", a + 1);
        gets(contato[a].nome);
        printf("Digite o número do contato: ");
        gets(contato[a].numero_de_telefone);
        printf("Digite o email contato: ");
        gets(contato[a].email);

        printf("\n");
    }

    printf("Informe o nome do contato que deseja ligar: ");
    gets(localiza_Contato);

// Tela resultado

    busca_de_contato(contato, localiza_Contato);

    return 0;
}
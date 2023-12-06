#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct e constante

#define G 3

struct endereco {
    char rua[250], numero[250];
    char bairro[250], cidade[250];
    char estado[250]; };

struct informacao {
    char nome[250];
    char data_de_emissao[250];
    char matricula[250];
    struct endereco endereco; };

struct dados {
    char nome[250];
    char data_de_nascimento[250];
    struct endereco endereco; };

 int main ( ) {
     setlocale (LC_ALL, "");
     
// Declaração de variáveis comuns e de acesso
    
    system ("cls || clear");
    
    int a;
    struct dados cliente[G];
    struct informacao funcionario[G];

// Solicitando dados

    for (a = 0; a < G; a++) {
        printf ("Informe o nome do %dº funcionário: ", a+1);
        gets (funcionario[a].nome);
        printf ("Informe a data de emissão: ");
        gets (funcionario[a].data_de_emissao);
        setbuf (stdin, 0);
        printf ("Informe o número de matrícula: ");
        gets (funcionario[a].matricula);
        setbuf (stdin, 0);
        printf ("\nDigite os dados de endereço\n");
        printf ("Informe a sua rua: ");
        gets (funcionario[a].endereco.rua);
        setbuf (stdin, 0);
        printf ("Informe o número de residência: ");
        gets (funcionario[a].endereco.numero);
        setbuf (stdin, 0);
        printf ("Informe o nome do bairro: ");
        gets (funcionario[a].endereco.bairro);
        setbuf (stdin, 0);
        printf ("Informe a cidade: ");
        gets (funcionario[a].endereco.cidade);
        setbuf (stdin, 0);
        printf ("Informe o nome do estado: ");
        gets (funcionario[a].endereco.estado);
        setbuf (stdin, 0);
        printf ("\n"); }
    
    for (a = 0; a < G; a++) {
        printf ("Informe o nome do %dº cliente: ", a+1);
        gets (cliente[a].nome);
        printf ("Informe a data de nascimento: ");
        gets (cliente[a].data_de_nascimento);
        setbuf (stdin, 0);
        printf ("\nDigite os dados de endereço\n");
        printf ("Informe a sua rua: ");
        gets (funcionario[a].endereco.rua);
        setbuf (stdin, 0);
        printf ("Informe o número de residência: ");
        gets (funcionario[a].endereco.numero);
        setbuf (stdin, 0);
        printf ("Informe o nome do bairro: ");
        gets (funcionario[a].endereco.bairro);
        setbuf (stdin, 0);
        printf ("Informe a cidade: ");
        gets (funcionario[a].endereco.cidade);
        setbuf (stdin, 0);
        printf ("Informe o nome do estado: ");
        gets (funcionario[a].endereco.estado);
        setbuf (stdin, 0);
        printf ("\n"); }
    
// Tela de resultado

system ("cls || clear");

    for (a = 0; a < G; a++) {
        printf ("Nome do %dº funcionário: %s\n", a+1, funcionario[a].nome);
        printf ("Data de emissão: %s\n", funcionario[a].data_de_emissao);
        printf ("Número de matrícula: %s\n", funcionario[a].matricula);
        printf ("Endereço: rua %s, nº %s, bairro - %s, %s\n", funcionario[a].endereco.rua, funcionario[a].endereco.numero, funcionario[a].endereco.bairro, funcionario[a].endereco.cidade, funcionario[a].endereco.estado); }
    
    for (a = 0; a < G; a++) {
        printf ("Nome do %dº cliente: %s\n", a+1, cliente[a].nome);
        printf ("Data de data_de_nascimento: %d\n", cliente[a].data_de_nascimento);
        printf ("Endereço: rua %s, nº %s, bairro - %s, %s\n", funcionario[a].endereco.rua, funcionario[a].endereco.numero, funcionario[a].endereco.bairro, funcionario[a].endereco.cidade, funcionario[a].endereco.estado); }

     return 0;
 }

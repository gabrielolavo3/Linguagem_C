#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct

struct informacao {
    int idade;
    char nome[250];
    char CPF[250];
};

 int main ( ) {
     setlocale (LC_ALL, "");
     
// Declaração de variáveis de acesso
    
    int opcao;
    struct informacao consumidor;
    struct informacao colaborador;

// Solicitando dados

    printf ("Código | Descrição\n");
    printf ("   1   | Funcionário\n");
    printf ("   2   | Cliente\n\n");
    printf ("Selecione a opção desejada: ");
    scanf ("%d", &opcao);
    
    switch (opcao) {
            case 1: 
            setbuf (stdin, 0);
            printf ("Informe o seu nome: ");
            gets (consumidor.nome);
            printf ("Informe a sua idade: ");
            scanf ("%d", &consumidor.idade);
            setbuf (stdin, 0);
            printf ("Informe o CPF: ");
            gets (consumidor.CPF);
        break;
        
        case 2:
            setbuf (stdin, 0);
            printf ("Informe o seu nome: ");
            gets (colaborador.nome);
            printf ("Informe a sua idade: ");
            scanf ("%d", &colaborador.idade);
            setbuf (stdin, 0);
            printf ("Informe o CPF: ");
            gets (colaborador.CPF);
        break;
        
        default:
            printf ("OPÇÃO INVÁLIDA!\n\n");
        break;
    }
    
// Tela de resultado

system ("cls || clear");

    if (consumidor.idade > 0) {
        printf ("Nome do cliente: %s\n", consumidor.nome);
        printf ("Idade do cliente: %d\n", consumidor.idade);
        printf ("CPF do cliente: %s\n", consumidor.CPF);
    
    } else if (colaborador.idade > 0){
        printf ("Nome do funcionário: %s\n", colaborador.nome);
        printf ("Idade do funcionário: %d\n", colaborador.idade);
        printf ("CPF do funcionário: %s\n", colaborador.CPF);
    }

     return 0;
 }

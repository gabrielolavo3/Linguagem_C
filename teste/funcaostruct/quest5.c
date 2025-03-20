#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, função e struct

#define MAX_CHARACTER 250

struct informacao {
    char nome[MAX_CHARACTER];
    char cargo[MAX_CHARACTER];
    float salario;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("COREBRAS! Calculadora de Média Salárial\n\n");
}

float media_Salarial (struct informacao funcionario[]) {
    int a;
    int contador;
    float soma = 0;

    for (a = 0; a < MAX_CHARACTER; a++) {
            if (strcmp (funcionario[a].cargo, "Programador") == 0) {
            contador++;
            soma += funcionario[a].salario; }   
        }   
        return soma / (float) contador;
    }

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int opcao;
    int a = 0;
    struct informacao funcionario[MAX_CHARACTER];

// Solicitando dados

    do {
    titulo ( );
       printf ("Código | Descrição\n");
       printf ("   1   | Adicionar informação\n");
       printf ("   2   | Sair e eixbir\n\n");
       printf ("Selecione a opção desejada: ");
       scanf ("%d", &opcao);

        switch (opcao) {
            case 1:
                setbuf (stdin, 0);
                printf ("\nDigite o nome do %dº funcionário: ", a+1);
                gets (funcionario[a].nome);
                printf ("Digite o nome do cargo: ");
                gets (funcionario[a].cargo);
                printf ("Digite o valor do salario: ");
                scanf ("%f", &funcionario[a].salario);
                a++;
                break;
        }

    } while (opcao != 2);

// Tela de resultado

    titulo ( );
    printf ("Média salarial dos programadores: R$ %.2f\n", media_Salarial(funcionario));
                
    return 0;
}

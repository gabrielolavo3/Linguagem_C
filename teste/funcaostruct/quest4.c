#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante, funções e struct

#define MAX_CHARACTER 250

struct conta_Bancaria {
    char nome[MAX_CHARACTER];
    char numero_conta[MAX_CHARACTER];
    char tipo_de_conta[MAX_CHARACTER];
    float saldo;
    float retira, entrada;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("BANCO HOLMES! Cadastre, Deposite e Saque com o Banco Holmes\n\n");
}

float deposito (float valor_Inicial, float valor_Deposito) {
    return valor_Inicial + valor_Deposito;
}

float saque (float valor_Inicial, float valor_Saque) {
    return valor_Inicial - valor_Saque;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int opcao;
    float deposito_bancario, saque_bancario;
    struct conta_Bancaria dados;

// Solicitando dados

    do {
        titulo ( );
        printf ("Código | Descrição\n");
        printf ("   1   | Inserir dados bancários\n");
        printf ("   2   | Depositar dinheiro\n");
        printf ("   3   | Sacar dinheiro\n");
        printf ("   0   | Encerrar algoritmo\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &opcao);

        switch (opcao) {
        case 1:
            fflush (stdin);
            printf ("Digite o nome do titular: ");
            gets (dados.nome);
            printf ("Digite o número da conta: ");
            gets (dados.numero_conta);
            printf ("Digite o tipo da conta: ");
            gets (dados.tipo_de_conta);
            printf ("Digite o saldo atual da conta: ");
            scanf ("%f", &dados.saldo);
            break;
        
        case 2:
            printf ("Informe o valor do depósito: ");
            scanf ("%f", &dados.entrada);

            deposito_bancario = deposito(dados.saldo, dados.entrada);

            titulo ( );
            printf ("Nome do titular: %s\n", dados.nome);
            printf ("Número da conta: %s\n", dados.numero_conta);
            printf ("Tipo da conta: %s\n", dados.tipo_de_conta);
            printf ("Saldo pré-depósito: %.2f\n\n", dados.saldo);
            printf ("Saldo atual da conta: %.2f\n", deposito_bancario);
            system ("pause");
            break;

        case 3:
            printf ("Informe o valor da saque: ");
            scanf ("%f", &dados.retira);

            saque_bancario = saque(dados.saldo, dados.retira);

            titulo ( );
            printf ("Nome do titular: %s\n", dados.nome);
            printf ("Número da conta: %s\n", dados.numero_conta);
            printf ("Tipo da conta: %s\n", dados.tipo_de_conta);
            printf ("Saldo pré-saque: %.2f\n\n", dados.saldo);
            printf ("Saldo atual da conta: %.2f\n", saque_bancario);
            system ("pause");
            break;
        
        default:
            printf ("Opção Inválida!\n\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
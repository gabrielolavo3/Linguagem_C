/* 
Descrição  : Criar uma struct e ler um vetor com os dados de 5 carros: nome, marca, ano e preço. Em seguida, leia um valor N e imprima 
todos os dados dos carros com valor menor do que N! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constantes, função e struct

#define MAX_CAR 5
#define MAX_CHARACTER 250

void titulo ( ) {
    system ("cls || clear");
    printf ("CONCESSIONÁRIA AUTOMOBILE! Cotação Online de Veículos Automotores\n\n");
}

struct caracteristica {
    int ano;
    char marca[MAX_CHARACTER];
    char nome[MAX_CHARACTER];
    float preco;
}; 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a, contador = 0;
    float cotacao;
    struct caracteristica carro[MAX_CAR];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_CAR; a++) {
        fflush (stdin);
        printf ("Digite o nome do %dº veículo: ", a+1);
        gets (carro[a].nome);
        printf ("Digite a marca do veículo: ");
        gets (carro[a].marca);
        printf ("Digite o ano de lançamento do modelo: ");
        scanf ("%d", &carro[a].ano);
        printf ("Digite o valor da compra (em R$): ");
        scanf ("%f", &carro[a].preco);
        printf ("\n");  
    }

    printf ("Informe o valor máximo de compra do veículo: ");
    scanf ("%f", &cotacao);

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_CAR; a++) {
        if (carro[a].preco <= cotacao) {
            printf ("Nome do veículo: %s\n", carro[a].nome);
            printf ("Marca do veículo: %s\n", carro[a].marca);
            printf ("Ano de lançamento do modelo: %d\n", carro[a].ano);
            printf ("Valor da compra: R$ %.2f\n", carro[a].preco); 
            printf ("\n");
        
        } else {
            contador++; }
    }

    if (contador == MAX_CAR) {
        printf ("Infelizmente, não há veículos disponíveis para a faixa de preço solicitada!\n"); }

    return 0;
}
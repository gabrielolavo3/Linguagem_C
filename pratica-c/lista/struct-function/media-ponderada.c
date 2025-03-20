/* 
Descrição  : Crie um algoritmo que mostre um menu com 3 opções: calcular a média simples, ponderada e encerrar. Com a struct, armazene as variáveis necessárias e, através da 
passagem de parâmetro da funções, retorne todos os cálculos. Verifique a possibilidade de opção inválida e de dado incorreto, mostrando uma mensagem! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Declaração de constantes, funções e struct

#define G 3
#define A 2

struct valores {
    int peso[G];
    float notaSimples, notaPonderada;
};

struct valor_Final {
    float mediaSimples, mediaPonderada;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("VORTEX MEAN! Calculadora Virtual de Média\n\n");
}

void erroNa_notaSimples (struct valores simples[]) {
    int a;

    for (a = 0; a < A; a++) {
        if (simples[a].notaSimples < 0 || simples[a].notaSimples > 10) {
            printf ("\nNota inválida! Informe a nota entre 0 e 10\n\n"); }
    }
}

void erroNa_notaPonderada (struct valores ponderada[]) {
    int a;

    for (a = 0; a < G; a++) {
        if (ponderada[a].notaPonderada < 0 || ponderada[a].notaPonderada > 10) {
            printf ("\nNota inválida! Informe a nota entre 0 e 10\n\n"); }  
    }
}

void erroNo_Peso (int peso[]) {
    int a;

    for (a = 0; a < 1; a++) {
        if (peso[a] < 0 || peso[a] > 10){
            printf ("\nPeso inválido! Informe peso entre 0 e 10\n\n"); }
    }
}

/* Cálculo das médias por funções */

float media_Aritmetica (struct valores simples[]) {
    int a;
    float soma = 0;
    
    for (a = 0; a < A; a++) {
        soma += simples[a].notaSimples;
    }
    return soma / (float) A;
}

float mediaAritmetica_Ponderada (struct valores ponderada[]) {
    int a, b;
    int soma_Peso = 0;
    float soma = 0;

    for (a = 0; a < G; a++) {
        for (b = 0; b < 1; b++) {
            soma += ponderada[a].notaPonderada * ponderada[a].peso[b];    
            soma_Peso += ponderada[a].peso[b];
        }
    }
    return soma / (float)soma_Peso;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int menu, a, b;
    struct valor_Final medias;
    struct valores simples[A];
    struct valores ponderada[G];
    
// Solicitando dados e menu de seleção
    
    titulo ( );
    do {
        printf ("Código | Descrição\n");
        printf ("   1   | Média aritmética\n");
        printf ("   2   | Média ponderada\n");
        printf ("   3   | Encerrar algoritmo\n\n");
        printf ("Selecione a opção desejada de acordo ao código de acesso: ");
        scanf ("%d", &menu);
        
        switch (menu) {
            case 1:
                printf ("\n");
                for (a = 0; a < A; a++) {
                    do {
                        printf ("Digite a %dª nota: ", a+1);
                        scanf ("%f", &simples[a].notaSimples);

                        erroNa_notaSimples(simples);
                        
                    } while (simples[a].notaSimples < 0 || simples[a].notaSimples > 10);
                    
                    medias.mediaSimples = media_Aritmetica(simples);
                }

// Tela de resultado 1                

                titulo ( );
                for (a = 0; a < A; a++) {
                    printf ("%dª nota: %.2f\n", a+1, simples[a].notaSimples);
                }
                printf ("Média final: %.2f\n\n", medias.mediaSimples);
            break;
            
            case 2:
                printf ("\n");
                for (a = 0; a < G; a++) {
                    do {
                        printf ("Digite a %dª nota: ", a+1);
                        scanf ("%f", &ponderada[a].notaPonderada);

                        erroNa_notaPonderada(ponderada);
                        
                    } while (ponderada[a].notaPonderada < 0 || ponderada[a].notaPonderada > 10);
                    
                    for (b = 0; b < 1; b++) {
                        do {
                            printf ("Digite o peso da nota: ");
                            scanf ("%d", &ponderada[a].peso[b]);

                            erroNo_Peso(ponderada[a].peso);
                            
                        } while (ponderada[a].peso[b] < 0 || ponderada[a].peso[b] > 10);
                    }
                    medias.mediaPonderada = mediaAritmetica_Ponderada(ponderada);
                }

// Tela de resultado 2                

                titulo ( );
                for (a = 0; a < G; a++) {
                    printf ("%dª nota: %.2f\n", a+1, ponderada[a].notaPonderada);
                    
                    for (b = 0; b < 1; b++) {
                        printf ("Peso da nota: %d\n\n", ponderada[a].peso[b]);
                    }
                }
                printf ("Média final: %.2f\n\n", medias.mediaPonderada);
            break;
            
            case 3:
                printf ("\nVORTEX MEAN agredece o seu uso do algoritmo\n");
            break;
            
            default:
                printf ("\nOpção selecionada é inválida! Retorne ao menu e escolha um opção disponível\n");
                sleep (2);
                titulo ( );
            break;
        }
    } while (menu != 3);
        
    return 0;
}
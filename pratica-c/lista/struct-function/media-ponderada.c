/* 
Descri��o  : Crie um algoritmo que mostre um menu com 3 op��es: calcular a m�dia simples, ponderada e encerrar. Com a struct, armazene as vari�veis necess�rias e, atrav�s da 
passagem de par�metro da fun��es, retorne todos os c�lculos. Verifique a possibilidade de op��o inv�lida e de dado incorreto, mostrando uma mensagem! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Declara��o de constantes, fun��es e struct

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
    printf ("VORTEX MEAN! Calculadora Virtual de M�dia\n\n");
}

void erroNa_notaSimples (struct valores simples[]) {
    int a;

    for (a = 0; a < A; a++) {
        if (simples[a].notaSimples < 0 || simples[a].notaSimples > 10) {
            printf ("\nNota inv�lida! Informe a nota entre 0 e 10\n\n"); }
    }
}

void erroNa_notaPonderada (struct valores ponderada[]) {
    int a;

    for (a = 0; a < G; a++) {
        if (ponderada[a].notaPonderada < 0 || ponderada[a].notaPonderada > 10) {
            printf ("\nNota inv�lida! Informe a nota entre 0 e 10\n\n"); }  
    }
}

void erroNo_Peso (int peso[]) {
    int a;

    for (a = 0; a < 1; a++) {
        if (peso[a] < 0 || peso[a] > 10){
            printf ("\nPeso inv�lido! Informe peso entre 0 e 10\n\n"); }
    }
}

/* C�lculo das m�dias por fun��es */

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

// Declara��o de vari�veis comuns e de acesso

    int menu, a, b;
    struct valor_Final medias;
    struct valores simples[A];
    struct valores ponderada[G];
    
// Solicitando dados e menu de sele��o
    
    titulo ( );
    do {
        printf ("C�digo | Descri��o\n");
        printf ("   1   | M�dia aritm�tica\n");
        printf ("   2   | M�dia ponderada\n");
        printf ("   3   | Encerrar algoritmo\n\n");
        printf ("Selecione a op��o desejada de acordo ao c�digo de acesso: ");
        scanf ("%d", &menu);
        
        switch (menu) {
            case 1:
                printf ("\n");
                for (a = 0; a < A; a++) {
                    do {
                        printf ("Digite a %d� nota: ", a+1);
                        scanf ("%f", &simples[a].notaSimples);

                        erroNa_notaSimples(simples);
                        
                    } while (simples[a].notaSimples < 0 || simples[a].notaSimples > 10);
                    
                    medias.mediaSimples = media_Aritmetica(simples);
                }

// Tela de resultado 1                

                titulo ( );
                for (a = 0; a < A; a++) {
                    printf ("%d� nota: %.2f\n", a+1, simples[a].notaSimples);
                }
                printf ("M�dia final: %.2f\n\n", medias.mediaSimples);
            break;
            
            case 2:
                printf ("\n");
                for (a = 0; a < G; a++) {
                    do {
                        printf ("Digite a %d� nota: ", a+1);
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
                    printf ("%d� nota: %.2f\n", a+1, ponderada[a].notaPonderada);
                    
                    for (b = 0; b < 1; b++) {
                        printf ("Peso da nota: %d\n\n", ponderada[a].peso[b]);
                    }
                }
                printf ("M�dia final: %.2f\n\n", medias.mediaPonderada);
            break;
            
            case 3:
                printf ("\nVORTEX MEAN agredece o seu uso do algoritmo\n");
            break;
            
            default:
                printf ("\nOp��o selecionada � inv�lida! Retorne ao menu e escolha um op��o dispon�vel\n");
                sleep (2);
                titulo ( );
            break;
        }
    } while (menu != 3);
        
    return 0;
}
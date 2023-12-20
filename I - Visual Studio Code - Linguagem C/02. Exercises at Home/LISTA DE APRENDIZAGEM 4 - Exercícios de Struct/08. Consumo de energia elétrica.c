/* 
Descri��o  : Criar uma struct e ler um vetor com os dados de 5 eletrodom�stico: nome, pot�ncia(kWh), horas e dias de uso. Em seguida, imprimir todas as 
informa��es e o c�lculo de consumo de energia de cada aparelho e o consumo total! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de struct, constantes e fun��o

#define MAX_ELETRONIC 2
#define MAX_CHARACTER 250

void titulo ( ) {
    system ("cls || clear");
    printf ("COMPANHIA DE ENERGIA VOLTAGE! Calculadora de Consumo M�dio de Energia\n\n");
}

struct eletrodomestico {
    int dias;
    float horas;
    float potencia, consumo_Medio;
    char nome[MAX_CHARACTER];
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis comuns e de acesso

    int a;
    float consumo_Total = 0;
    struct eletrodomestico consumo[MAX_ELETRONIC];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_ELETRONIC; a++) {
        fflush (stdin);
        printf ("Informe o nome do %d� eletrodom�stico: ", a+1);
        gets (consumo[a].nome);
        printf ("Informe o pot�ncial el�trico do aparelho (kWh): ");
        scanf ("%f", &consumo[a].potencia);

        do {
            printf ("Informe o tempo em minutos ou horas di�rias em que o aparelho � utilizado: ");
            scanf ("%f", &consumo[a].horas);

            if (consumo[a].horas < 0.01 || consumo[a].horas > 24) {
                printf ("\nCONSUMO POR HORAS INV�LIDO! Insira o tempo entre 1 minuto e 24h\n\n"); }

        } while (consumo[a].horas < 0.01 || consumo[a].horas > 24);

        do {
            printf ("Informe a quantidade de dias mensais em que o aparelho � utilizado: ");
            scanf ("%d", &consumo[a].dias);

            if (consumo[a].dias < 1 || consumo[a].dias > 30) {
                printf ("\nCONSUMO POR MENSAL INV�LIDO! Insira o intervalo de tempo entre 1 dia e 30 dias\n\n"); }

        } while (consumo[a].dias < 1 || consumo[a].dias > 30);
        printf ("\n");

// Calculando o consumo m�dio de energia e o consumo total

        consumo[a].consumo_Medio = consumo[a].potencia * (consumo[a].horas * consumo[a].dias) / 1000;
        consumo_Total += consumo[a].consumo_Medio;
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_ELETRONIC; a++) {
        printf ("Nome do %d� eletrodom�stico: %s\n\n", a+1, consumo[a].nome);
        printf ("Pot�ncial el�trico do aparelho: %.2f kWh\n", consumo[a].potencia);
        printf ("Tempo de uso di�rio e mensal do aparelho: %.2f horas por %d dias\n", consumo[a].horas, consumo[a].dias);
        printf ("Consumo m�dio de energia: %.2f kWh\n\n", consumo[a].consumo_Medio);
    }
    printf ("Consumo total de energia: %.2f KiloWatts/h\n", consumo_Total);

    return 0;
}
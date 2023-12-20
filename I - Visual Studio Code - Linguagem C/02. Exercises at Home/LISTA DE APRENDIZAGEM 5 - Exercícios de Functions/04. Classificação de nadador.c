/* 
Descri��o  : Criar que ler a idade de um nadador e retorna a categoria desse nadador de acordo com a faixa et�ria: 
1 - Idade entre 5 e 7: Infantil A; 2 - Idade entre 8 e 10: Infantil B; 3 - Idade entre 11 e 13: Juvenil A; 
3 - Idade entre 11 e 13: Juvenil B; 4 - a partir de 18: Adulto! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declara��o de fun��es

void titulo ( ) {
    system ("cls || clear");
    printf ("PISCINA OL�MPICA UNDERLINE! Classificador de Nata��o\n\n");
}

void classe (int anos, char* resultado) {
    
    if (anos < 5) {
        strcpy (resultado, "Faixa et�ria indispon�vel!");

    } else if (anos >= 5 && anos <= 7) {
        strcpy (resultado, "Infantil A!");
    
    } else if (anos >= 8 && anos <= 10) {
        strcpy (resultado, "Infantil B!");
    
    } else if (anos >= 11 && anos <= 13) {
        strcpy (resultado, "Juvenil A!");
    
    } else if (anos >= 14 && anos <= 17) {
        strcpy (resultado, "Juvenil B!");
    
    } else {
        strcpy (resultado, "Adulto!"); }
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int idade;
    char classificacao[250];

// Solicitando dados e efetuando a passagem de par�metro

    titulo ( );
    printf ("Informe a idade do nadador: ");
    scanf ("%d", &idade);

    classe (idade, classificacao);

// Tela de resultado

    titulo ( );
    printf ("Idade do nadador: %d\n", idade);
    printf ("Categoria de nata��o: %s", classificacao);

    return 0;
}
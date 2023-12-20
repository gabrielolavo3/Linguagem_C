/* 
Descrição  : Criar que ler a idade de um nadador e retorna a categoria desse nadador de acordo com a faixa etária: 
1 - Idade entre 5 e 7: Infantil A; 2 - Idade entre 8 e 10: Infantil B; 3 - Idade entre 11 e 13: Juvenil A; 
3 - Idade entre 11 e 13: Juvenil B; 4 - a partir de 18: Adulto! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de funções

void titulo ( ) {
    system ("cls || clear");
    printf ("PISCINA OLÍMPICA UNDERLINE! Classificador de Natação\n\n");
}

void classe (int anos, char* resultado) {
    
    if (anos < 5) {
        strcpy (resultado, "Faixa etária indisponível!");

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

// Declaração de variáveis

    int idade;
    char classificacao[250];

// Solicitando dados e efetuando a passagem de parâmetro

    titulo ( );
    printf ("Informe a idade do nadador: ");
    scanf ("%d", &idade);

    classe (idade, classificacao);

// Tela de resultado

    titulo ( );
    printf ("Idade do nadador: %d\n", idade);
    printf ("Categoria de natação: %s", classificacao);

    return 0;
}
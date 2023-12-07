#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void titulo ( ) {
    system ("cls || claer");
    printf ("CALCULADORA DE INFLAÇÃO!\n\n");
}

float preco_Inflacionado (float inflacao) {
    return inflacao = inflacao < 100 ? inflacao + (inflacao * 0.10) : inflacao + (inflacao * 0.20);
    /* return inflacao = inflacao < 100 ? inflacao * 1.1 : inflacao * 1.2; */
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float preco, resultado;

// Solicitando dados

    titulo ( );
    printf ("Informe um valor (em R$): ");
    scanf ("%f", &preco);

    resultado = preco_Inflacionado (preco);

// Tela de resultado

    titulo ( );
    printf ("Valor: R$ %.2f\n", preco);
    printf ("Novo valor do preço: R$ %.2f\n", resultado);

    return 0;
}

/* 
Descrição  : Ler o nome de 2 funcionários e o valor do salário de cada. Com isso, imprimir o valor do salário, percentual e valor de aumento, o novo valor
do salário. Para o calculo: 1 - até R$ 208,00: aumento de 20%; de R$ 281,00 a R$700,00: aumento de 15%; de R$ 701,00 a R$ 1500,00: aumento de 10%; a partir de 
R$ 1500,00: aumento de 5%. Use struct para armazenar as variáveis! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 07/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct e constante

#define G 2

struct informacao {
    char nome[250];
    int percentual[G];
    float salario[G], novo_Salario[G], aumento[G]; 
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a, b;
    struct informacao profissional[G];

// Solicitando dados

    printf ("INSTITUTO DE PESQUISAS HOLMES! Reajuste Salarial 2023\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o nome do %dº funcionário: ", a+1);
        gets (profissional[a].nome);

        for (b = 0; b < 1; b++) {
            printf ("Informe o valor do atual salário: ");
            scanf ("%f", &profissional[a].salario[a]); }
        
        printf ("\n");
        fflush (stdin);

        if (profissional[a].salario[a] <= 280.00) {
            profissional[a].percentual[a] = 20;
            profissional[a].aumento[a]  = profissional[a].salario[a] * 0.2;
            profissional[a].novo_Salario[a] = profissional[a].salario[a] + profissional[a].aumento[a];
        
        } else if (profissional[a].salario[a] >= 281.00 && profissional[a].salario[a] <= 700.00) {
            profissional[a].percentual[a] = 15;
            profissional[a].aumento[a]  = profissional[a].salario[a] * 0.15;
            profissional[a].novo_Salario[a] = profissional[a].salario[a] + profissional[a].aumento[a];
        
        } else if (profissional[a].salario[a] >= 701.00 && profissional[a].salario[a] <= 1500.00) {
            profissional[a].percentual[a] = 10;
            profissional[a].aumento[a]  = profissional[a].salario[a] * 0.10;
            profissional[a].novo_Salario[a] = profissional[a].salario[a] + profissional[a].aumento[a];
        
        } else {
            profissional[a].percentual[a] = 5;
            profissional[a].aumento[a]  = profissional[a].salario[a] * 0.05;
            profissional[a].novo_Salario[a] = profissional[a].salario[a] + profissional[a].aumento[a]; }
    }

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO DE PESQUISAS HOLMES! Conclusão do Reajuste Salarial\n\n");
     for (a = 0; a < G; a++) {
        printf ("Nome do %dº funcionário: %s\n\n", a+1, profissional[a].nome);

        for (b = 0; b < 1; b++) {
            printf ("Valor do atual salário: R$ %.2f\n", profissional[a].salario[a]); }
        
        printf ("Percentual de aumento: %d%%\n", profissional[a].percentual[a]);
        printf ("Valor do aumento: R$ %.2f\n", profissional[a].aumento[a]);
        printf ("Novo salário: R$ %.2f\n", profissional[a].novo_Salario[a]);
        printf ("\n");
     }

    return 0;
}

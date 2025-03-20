/* 
Descrição  : Calcular o IMC com base no peso e altura do usuário e aplicar uma classificação! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 06/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    float imc, altura, massa;
    char classificacao [250];

// Solicitando dados

    printf ("CALCULADORA DE ÍNDICE DE MASSA CORPORAL (IMC)! \n\n");
    printf ("Insira seus dados e descubra o seu peso ideal e classificação no Imc \n\n");
    printf ("Informe o seu peso atual (em Kg): ");
    scanf ("%f", &massa);
    printf ("Informe a sua altura (em M): ");
    scanf ("%f", &altura);

// Calculando o IMC

imc = massa / (altura * altura);

system ("cls || clear");

// Analisando a classificação do IMC

if (imc >= 40) {
    strcpy (classificacao, "Obesidade grau III (mórbida)!");

} else if (imc >= 35.0 && imc <= 39.9) {
    strcpy (classificacao, "Obesidade grau II (severa)!");
    
} else if (imc >= 30.0 && imc <= 34.9) {
    strcpy (classificacao, "Obesidade grau I!"); 
    
} else if (imc >= 25.0 && imc <= 29.9) {
    strcpy (classificacao, "Levemente acima do peso!"); 
     
} else if (imc >= 18.6  && imc <= 24.9) {
    strcpy (classificacao, "Peso ideal!");    
    
} else if (imc < 18.5) {
    strcpy (classificacao, "Abaixo do peso!"); }
    
// Tela de resultado

    printf ("CALCULADORA DE ÍNDICE DE MASSA CORPORAL (IMC)! \n");
    printf ("Resumo da Consulta! \n\n");
    printf ("Peso informado: %.2f KG \n", massa);
    printf ("Altura informada: %.2f M \n", altura);
    printf ("Resultado do IMC: %.2f \n", imc);
    printf ("Classificação do IMC: %s \n", classificacao);

    return 0;
}
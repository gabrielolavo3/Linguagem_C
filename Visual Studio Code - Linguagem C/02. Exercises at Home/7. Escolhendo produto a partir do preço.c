/* 
Descrição  : Analisar o preço de 3 produtos e optar em comprar aquele com menor preço! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeiroProduto, segundoProduto, terceiroProduto;

// Solicitando dados

    printf ("Informe o valor (em R$) do 1º produto: ");
    scanf ("%f", &primeiroProduto);
    printf ("Informe o valor (em R$) do 2º produto: ");
    scanf ("%f", &segundoProduto);
    printf ("Informe o valor (em R$) do 3º produto: ");
    scanf ("%f", &terceiroProduto);

system ("cls || clear");

// Tela de resultado

    printf ("ESCOLHA DO PRODUTO MAIS BARATO! \n\n");
    printf ("Valor do 1º produto: %.2f R$ \n", primeiroProduto);
    printf ("Valor do 2º produto: %.2f R$ \n", segundoProduto);
    printf ("Valor do 3º produto: %.2f R$ \n\n", terceiroProduto);

// Escolhendo qual produto comprar

if (primeiroProduto < segundoProduto && primeiroProduto < terceiroProduto) {
    printf ("Escolha final: O 1º produto deve ser adquirido");

} else { if (segundoProduto < primeiroProduto && segundoProduto < terceiroProduto) {
    printf ("Escolha final: O 2º produto deve ser adquirido"); } 
    
else { (terceiroProduto < segundoProduto && terceiroProduto < primeiroProduto) 
    printf ("Escolha final: O 3º produto deve ser adquirido"); }

}
    return 0;
}  
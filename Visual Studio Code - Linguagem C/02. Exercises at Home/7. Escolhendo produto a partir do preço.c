/* 
Descri��o   : Analisar o pre�o de 3 produtos e optar em comprar aquele com menor pre�o! (fun��o)
Autor(a)    : Gabriel S. Olavo
Data atual  : 02/10/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float primeiroProduto, segundoProduto, terceiroProduto;

// Solicitando dados

    printf ("Informe o valor (em R$) do 1� produto: ");
    scanf ("%f", &primeiroProduto);
    printf ("Informe o valor (em R$) do 2� produto: ");
    scanf ("%f", &segundoProduto);
    printf ("Informe o valor (em R$) do 3� produto: ");
    scanf ("%f", &terceiroProduto);

system ("cls || claer");

// Tela de resultado
    printf ("ESCOLHA DO PRODUTO MAIS BARATO! \n\n");
    printf ("Valor do 1� produto: %.2f R$ \n", primeiroProduto);
    printf ("Valor do 2� produto: %.2f R$ \n", segundoProduto);
    printf ("Valor do 3� produto: %.2f R$ \n\n", terceiroProduto);

// Escolhendo qual produto comprar

if (primeiroProduto < segundoProduto && primeiroProduto < terceiroProduto) {
    printf ("Escolha final: O 1� produto deve ser adquirido");

} else { if (segundoProduto < primeiroProduto && segundoProduto < terceiroProduto) {
    printf ("Escolha final: O 2� produto deve ser adquirido"); } 
    
else { (terceiroProduto < segundoProduto && terceiroProduto < primeiroProduto); 
    printf ("Escolha final: O 3� produto deve ser adquirido"); }

}
    return 0;
}  
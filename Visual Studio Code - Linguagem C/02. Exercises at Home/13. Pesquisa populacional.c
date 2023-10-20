/* 
Descrição  : Com base em uma pesquisa populacioanl com X entrevistados, solicitar o sexo, idade e salároi de cada entrevistado.
Com isso, imprimir a quantidade de pessoas, a maior e menor idade, e a quantidade de mulheres com salário a partir de R$ 5.000,00! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <time.h> // Permite usar a função Sleep

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, opcao, entrevistado, idade, maiorIdade = 0, menorIdade = 300, quantidadeDeMulheres = 0;
    char sexo; 
    float salario, somadeSalario = 0, mediaSalarial;

// Solicitando dados

do {
    printf ("PESQUISA POPULACIONAL - INSTITUTO DE ESTATÍSTICA NACIONAL (IEN)\n\n");
    printf ("Código | \tDescrição\n");
    printf ("   1   | Adicionar informações\n");
    printf ("   2   | Sair e exibir resultados\n\n");
    printf ("Selecione a opção desejada: ");
    scanf ("%d", &opcao);

switch (opcao) {
case 1:
    printf ("Informe a quantidade de entrevistados: ");
    scanf ("%d", &entrevistado);

// Inserindo as perguntas sobre sexo, idade e salário em Loop de acordo com a quantidade de entrevistados

for (a = 1; a <= entrevistado; a++) {

// Definindo o título conforme a quantidade de entrevistados

if (entrevistado > 1) {
    printf ("\nINSIRA OS DADOS DO %dº ENTREVISTADO \n", a); 
} else {
    printf ("\nINSIRA OS DADOS DO ENTREVISTADO \n"); }

// Limpando o cache, lendo o sexo e validando a informação

do {
    fflush (stdin);
    printf ("\nInsira o sexo \n");
    printf ("Digite 'M' para o sexo masculino ou 'F' para o sexo feminino \n\n");
    printf ("Informe o sexo do(a) entrevistado(a): ");
    scanf (" %c", &sexo);
    sexo = toupper (sexo);

switch (sexo) {
case 'M':
    break;

case 'F':
    break;
    
default:
    printf ("O sexo informado é INVÁLIDO! Digite 'F' para feminino ou 'M' para masculino \n");
    break; }

} while (sexo != 'M' && sexo != 'F'); 

// Lendo a idade e validando a informação

do {
    printf ("Informe a idade do(a) entrevistado(a): ");
    scanf ("%d", &idade);

    if (idade < 0 || idade > 300) {
    printf ("\nA idade dos entrevistados é LIMITADA entre 0 e 300 anos! Digite a idade novamente \n"); }  
} while (idade < 0 || idade > 300);

// Lendo o salário e validando a informação

do {
    printf ("Informe o salário mais recente do(a) entrevistado(a): ");
    scanf ("%f", &salario);

    if (salario < 0) {
    printf ("\nO valor do salário é INVÁLIDO! Digite o valor novamente \n"); }
} while (salario < 0);

// Acumulando os valores de salários e limpando o terminal
    
    system ("cls || clear");
    somadeSalario += salario; 

// Analisando a maior, menor idade e a quantidade de mulheres com salário a partir de R$ 5.000,00

    maiorIdade = idade > maiorIdade ? idade : maiorIdade;
    menorIdade = idade < menorIdade ? idade : menorIdade;
    
    if (sexo == 'F' && salario >= 5000.00) 
        quantidadeDeMulheres++; }
    break;

case 2:
// Tela de resultado

system ("cls || clear");
mediaSalarial = (float) somadeSalario / (float) entrevistado;

// Validando se há informações do Case 1 para obter o acesso ao Case 2

if (entrevistado > 0) {

    printf ("INSTITUTO DE ESTATÍSTICA NACIONAL (IEN)\n");
    printf ("RESULTADOS DA PESQUISA POPULACIONAL \n\n");
    printf ("Quantidade de entrevistados: %d \n", entrevistado);
    printf ("Maior idade entre os entrevistados: %d \n", maiorIdade);
    printf ("Menor idade entre os entrevistados: %d \n", menorIdade);
    printf ("Mulheres com salário acima de R$ 5000,00: %d \n", quantidadeDeMulheres);
    printf ("Média salarial: %.2f \n", mediaSalarial);
    break;

} else {
    opcao = 1;
    break; }

default:
system ("cls || clear");
    printf ("OPÇÃO SELECIONDA É INVÁLIDA! Retorne à tela de ações. \n\n");
    sleep(2); // Executa o próximo comando no tempo determinado em parênteses
    break; }
    
} while (opcao != 2);

    return 0;
}

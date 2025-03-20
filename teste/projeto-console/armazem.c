/* 
Descrição  : Criar um software com 4 funcionalidades para um sistema de gestão de estoque! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel Santos Olavo e Andrei Vieira Santos
Data atual : 12/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define MAX_CHARACTER 250

struct Ordem_de_Campra {
    int quantidade;
    float valor;
    char nome[MAX_CHARACTER], numero_Order[MAX_CHARACTER], data_emissao[MAX_CHARACTER];
};

struct Fornecedor {
    char telefone[16], CNPJ[MAX_CHARACTER], endereco[MAX_CHARACTER];
};

struct Estoque {
    float preco, precoTotal;
    int quantidade;
    char nome[MAX_CHARACTER], codigo_Produto[MAX_CHARACTER], data_de_Entrada[MAX_CHARACTER];
};

struct Reposicao {
    char nome[MAX_CHARACTER];
    int quantidade_inicial, quantidade_saida, quantidade_final;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("CENTRO DE DISTRUIBUIÇÃO FAST EXPRESS! Sistema de Gerenciamento de Estoque LOC7S\n\n");
}

int Atualizacao_mercadoria (int valor1, int valor2) {
    return valor1 - valor2;
}

char* situacao (int valor) {
    char situacao[MAX_CHARACTER];

    if (valor >= 51) {
        strcpy (situacao, "Quantidade no estoque estar em excesso!");
    
    } else if (valor >= 300 && valor <= 500) {
        strcpy (situacao, "Quantidade em estoque suficiente para 3 semanas!"); 
        
    } else if (valor >= 190 && valor <= 299) {
        strcpy (situacao, "Quantidade em estoque é suficiente para 2 semanas! Atente-se com a ordem de compra"); 
    
    } else if (valor >= 90 && valor <= 189) {
        strcpy (situacao, "Quantidade em estoque é suficiente para 1 semana! Recomenda-se a aquisição de produtos"); 
    
    } else {
        strcpy (situacao, "Quantidade em estoque é insuficiente! Faça a aquisição de novos produtos"); }
    
    return situacao;
}

float valor_Final (int quantity, float value) {
    return quantity * value;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

    int menu, a;
    int quantidade_Ordem, produtos_Recebidos, analise;

    struct Ordem_de_Campra Order[MAX_CHARACTER];
    struct Fornecedor Aquisicao[MAX_CHARACTER];
    struct Estoque Recebimento[MAX_CHARACTER];
    struct Reposicao Verificacao[MAX_CHARACTER];

    do {
        titulo ( );
        printf ("Código de Acesso | Descrição da Função\n");
        printf ("        1        | Entrada de mercadoria\n");
        printf ("        2        | Verificar produtos recebidos\n");
        printf ("        3        | Verificar reposição de mercadoria\n");
        printf ("        4        | Emitir ordem de compra\n");
        printf ("        5        | Encerrar algoritmo\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &menu);

        switch (menu) {
            case 1:
            titulo ( );
                do {
                    printf ("Informe a quantidade produtos recebidos no almoxarifado: ");
                    scanf ("%d", &produtos_Recebidos);

                    if (produtos_Recebidos <= 0) {
                        if ("\nQUANTIDADE DE RECEBIMENTO INVÁLIDA! Por favor, informe a quantidade a partir de 1\n\n"); }

                } while (produtos_Recebidos <= 0);
                
                for (a = 0; a < produtos_Recebidos; a++) {
                    produtos_Recebidos == 1 ? printf ("\nDigite o nome do produto: ") : printf ("\nDigite o nome do %dº produto: ", a+1); 
                    
                    fflush (stdin);                    
                    gets (Recebimento[a].nome);
                    printf ("Digite o código do produto: ");
                    gets (Recebimento[a].codigo_Produto);
                    printf ("Digite a data de entrada do produto no estoque: ");
                    gets (Recebimento[a].data_de_Entrada);
                    
                    do {
                        printf ("Digite o total de produto recebido: ");
                        scanf ("%d", &Recebimento[a].quantidade);

                        if (Recebimento[a].quantidade <= 0) {
                            printf ("\nQUANTIDADE INVÁLIDA! Por favor, informe a quantidade real de mercadoria\n\n"); }

                    } while (Recebimento[a].quantidade <= 0);

                    do {
                        printf ("Digite o valor unitário: ");
                        scanf ("%f", &Recebimento[a].preco);

                        if (Recebimento[a].quantidade <= 0) {
                            printf ("\nPREÇO UNITÁRIO INVÁLIDO! Por favor, informe o valor real de mercadoria\n\n"); }

                    } while (Recebimento[a].preco <= 0);
                }
                
            break;

            case 2:
            if (a > 0) {
            titulo ( );
                for (a = 0; a < produtos_Recebidos; a++) {
                    printf ("Nome do produto: %s\n", Recebimento[a].nome);
                    printf ("Código do produto: %s\n", Recebimento[a].codigo_Produto);
                    printf ("Data de entrada do produto no estoque: %s\n", Recebimento[a].data_de_Entrada);
                    printf ("Quantidade de produto recebido: %d | Valor unitário: %.2f\n\n", Recebimento[a].quantidade, Recebimento[a].preco);
                    printf ("Valor total em estoque do produto %s: %.2f\n", Recebimento[a].nome, Recebimento[a].precoTotal = valor_Final(Recebimento[a].quantidade, Recebimento[a].preco)); 
                    system ("pause"); }
            
            } else {
                system ("cls || clear");
                printf ("Não há dados para exibir. SELECIONE a 1º opção para adicionar informações!\n\n");
                system ("pause");
                menu = 1;
            break; }

            case 3:
            titulo ( );
                do {
                    printf ("Informe quantos produtos deseja verificar: ");
                    scanf ("%d", &analise);

                    if (analise <= 0 || analise > 501) {
                        printf ("\nQUANTIDADE INVÁLIDA! Por favor, informe a quantidade real para a verificação\n\n"); }

                } while (analise <= 0 || analise > 501);

                for (a = 0; a < analise; a++) {
                    analise == 1 ? printf ("\nDigite o nome do produto: ") : printf ("\nDigite o nome do %dº produto: ", a+1);
                    fflush (stdin);
                    gets (Verificacao[a].nome);

                    do {
                        printf ("Digite a quantidade de entrada do produto: ");
                        scanf ("%d", &Verificacao[a].quantidade_inicial);

                        if (Verificacao[a].quantidade_inicial <= 0) {
                            printf ("\nQUANTIDADE INVÁLIDA! Por favor, informe a quantidade real de mercadoria\n\n"); }

                    } while (Verificacao[a].quantidade_inicial <= 0);

                    do {
                        printf ("Digite a quantidade de saída do produto: ");
                        scanf ("%d", &Verificacao[a].quantidade_saida);

                        if (Verificacao[a].quantidade_saida <= 0 || Verificacao[a].quantidade_saida > Verificacao[a].quantidade_inicial) {
                            printf ("\nQUANTIDADE INVÁLIDA! Por favor, informe a quantidade real de saída da mercadoria\n\n"); }

                    } while (Verificacao[a].quantidade_saida <= 0 || Verificacao[a].quantidade_saida > Verificacao[a].quantidade_inicial);

                }

                titulo ( );
                for (a = 0; a < analise; a++) {
                    printf ("Nome do produto: %s\n\n", Verificacao[a].nome);
                    printf ("Quantidade atual em estoque: %d\n", Verificacao[a].quantidade_final = Atualizacao_mercadoria(Verificacao[a].quantidade_inicial, Verificacao[a].quantidade_saida));
                    printf ("Situação do produto: %s\n", situacao(Verificacao[a].quantidade_final));
                    printf ("\n");
                }
                system ("pause");
            
            break; 

            case 4:
            titulo ( );
                do {
                    printf ("Informe a quantidade de ordens de compra para emissão e inserção de dados: ");
                    scanf ("%d", &quantidade_Ordem);

                    if (quantidade_Ordem <= 0 || quantidade_Ordem > 10) {
                        printf ("\nOps! O software permite a criação de até 10 Ordens de Compras! Por favor, escolha a quantidade entre 1 e 10\n\n"); }

                } while (quantidade_Ordem <= 0 || quantidade_Ordem > 10);

                for (a = 0; a < quantidade_Ordem; a++) {
                    quantidade_Ordem == 1 ? printf ("\n#Ordem de Compra\n\n") : printf ("\n#Ordem de Compra %d\n\n", a+1); 

                    fflush (stdin);
                    printf ("Digite o número da ordem de compra: "); 
                    gets (Order[a].numero_Order);
                    printf ("Digite a data de emissão da ordem de compra: ");
                    gets (Order[a].data_emissao);
                    fflush (stdin);
                    printf ("\nInsira os dados do fornecedor\n");
                    printf ("CNPJ do fornecedor: ");
                    gets (Aquisicao[a].CNPJ);
                    printf ("Telefone de contato do fornecedor: ");
                    gets (Aquisicao[a].telefone);
                    printf ("Endereço do fornecedor: ");
                    gets (Aquisicao[a].endereco);
                    printf ("\nInsira os dados do produto(s)\n");
                    printf ("Nome do material: ");
                    gets (Order[a].nome);
                    printf ("Quantidade do material: ");
                    scanf ("%d", &Order[a].quantidade);
                    printf ("Valor unitário do material: ");
                    scanf ("%f", &Order[a].valor);
                }
                printf ("\nSalvando as informações e enviando para o setor de compras");
                for (a = 0; a < 3; a++) {
                    printf (".");
                    sleep(2); }
                
                titulo ( );
                printf ("Resumo das Ordens de Compra\n");
                for (a = 0; a < quantidade_Ordem; a++) {
                    quantidade_Ordem == 1 ? printf ("\n#Ordem de Compra\n\n") : printf ("\n#Ordem de Compra %d\n\n", a+1); 

                    printf ("Número da ordem de compra: %s\n", Order[a].numero_Order);
                    printf ("Data de emissão da ordem de compra: %s\n\n", Order[a].data_emissao);
                    printf ("Informações do fornecedor\n\n");
                    printf ("CNPJ: %s | Telefone de contato: %s\n", Aquisicao[a].CNPJ, Aquisicao[a].telefone);
                    printf ("Endereço do fornecedor: %s\n\n", Aquisicao[a].endereco);
                    printf ("Informações do produto(s)\n\n");
                    printf ("Nome do material: %s | Quantidade do material: %d | Valor unitário: R$ %.2f\n\n", Order[a].nome, Order[a].quantidade, Order[a].valor);
                }
                    system ("pause");
                
            break;

            case 5:
            titulo ( );
                printf ("\nEncerrando o software!");
                break;

            default:
                printf ("Opção inválida!");
            break;
        }
    } while (menu != 5);

    return 0;
}
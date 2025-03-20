/* 
Descrição  : Por meio de um menu, crie uma calculadora para salário. Com uma struct, armazene as variáveis necessárias para ler os dados do usuário 
e, por meio passagem de parâmetro, use funções para efetuar e retornar os cálculos necessários. O menu deve ter opções para novo salário, salário de férias, 
13º salário e sair do programa. Na 1ª opção, o acréscimo é de 15% para até R$ 350; 10% de R$ 351 até R$ 600; e acima de R$ 600, é 5%! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// Declaração de funções e struct

struct dados_Trabalhista {
    int meses_Trabalhados;
    float salario, new_Salario, decimo_Terceiro;
    float salario_Ferias;  
};

void titulo ( ) {
    system ("cls || clear");
    printf ("SALARIUM IN BOX! CALCULADORA VIRTUAL DE SALÁRIOS\n\n");
}

void mensagem (struct dados_Trabalhista funcionario) {
    if (funcionario.meses_Trabalhados <= 0 || funcionario.meses_Trabalhados > 12) {
        printf ("\nQuantidade Inválida! Insira a quantidade entre 1 e 12\n\n"); }
}

void erroDe_Salario (struct dados_Trabalhista funcionario) {
    if (funcionario.salario < 1 || funcionario.salario > 80000) {
        printf ("\nValor Inválido! Insira o valor do salário entre R$ 1,00 e R$ 80.000,00\n\n"); }
}

float Novo_salario (struct dados_Trabalhista funcionario) {
    
    if (funcionario.salario <= 350.00) {
        return funcionario.salario * 1.15;
        
    } else if (funcionario.salario >= 351.00 && funcionario.salario <= 600.00) {
        return funcionario.salario * 1.1;
        
    } else {
        return funcionario.salario * 1.05; }
}

char* porcentagem_Acrescimo (struct dados_Trabalhista funcionario) {
    char acrescimo[250];
    
    if (funcionario.salario <= 350.00) {
        return strcpy (acrescimo, "15%");
        
    } else if (funcionario.salario >= 351.00 && funcionario.salario <= 600.00) {
        return strcpy (acrescimo, "10%");
        
    } else {
        return strcpy (acrescimo, "05%"); }
}

float Decimo_Terceiro (struct dados_Trabalhista funcionario) {
    return (funcionario.salario * funcionario.meses_Trabalhados) / 12;
}

float ferias (struct dados_Trabalhista funcionario) {
    return (funcionario.salario / 3) + funcionario.salario;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis de acesso

    int menu;
    struct dados_Trabalhista funcionario;

// Solicitando dados e tela de resultado

    titulo ( );
    do {
        printf ("Identificador | Descrição\n");
        printf ("      1       | Acréscimo de salário\n");
        printf ("      2       | Cálculo do salário de férias\n");
        printf ("      3       | Cálculo do 13º salário\n");
        printf ("      4       | Encerrar algoritmo\n\n");
        printf ("Selecione a opção desejada de acordo com o identificador: ");
        scanf ("%d", &menu);
        
        switch (menu) {
            case 1:
                do {
                    printf ("\nDigite o valor do seu atual salário(em R$): ");
                    scanf ("%f", &funcionario.salario);
                
                    erroDe_Salario (funcionario);
                        
                } while (funcionario.salario < 1 || funcionario.salario > 80000);
                
                titulo ( );
                printf ("Valor do atual salario: R$ %.2f\n", funcionario.salario);
                printf ("Percentual de acréscimo: %s\n", porcentagem_Acrescimo(funcionario));
                printf ("Valor do novo salario: R$ %.2f\n\n", funcionario.new_Salario = Novo_salario(funcionario));
            break;
            
            case 2:
                do {
                    printf ("\nDigite o valor do seu atual salário(em R$): ");
                    scanf ("%f", &funcionario.salario);
                    
                    erroDe_Salario (funcionario);
                    
                } while (funcionario.salario < 1 || funcionario.salario > 80000);
                
                titulo ( );
                printf ("Salário do período de férias: R$ %.2f\n\n", funcionario.salario_Ferias = ferias(funcionario));
            
            break;
            
            case 3:
                do {
                    printf ("\nDigite o valor do seu atual salário(em R$): ");
                    scanf ("%f", &funcionario.salario);
                    
                    erroDe_Salario (funcionario);
                    
                } while (funcionario.salario < 1 || funcionario.salario > 80000);

                do {
                    printf ("Digite a quantidade de meses no qual você trabalhou: ");
                    scanf ("%d", &funcionario.meses_Trabalhados);
                    
                    mensagem (funcionario);
                    
                } while (funcionario.meses_Trabalhados <= 0 || funcionario.meses_Trabalhados > 12);

                titulo ( );
                printf ("Valor do atual salario: R$ %.2f\n", funcionario.salario);
                printf ("Quantidade de meses de serviço: %d\n", funcionario.meses_Trabalhados);
                printf ("Valor do 13º salário: R$ %.2f\n\n", funcionario.decimo_Terceiro = Decimo_Terceiro(funcionario));
            break;
            
            case 4:
                printf ("\nOBRIGADO POR UTILIZAR O SALARIUM IN BOX! Até a próxima\n");
            break;
            
            default:
                printf ("\nOpção Inválida! Retorne ao menu e selecione uma opção disponível\n");
                sleep (2);
                titulo ( );
            break;
        }
    } while (menu != 4);
    
    return 0;
}

/* 3.19 Calculadora de comissão de vendas. Uma grande
companhia química paga seus vendedores por comissão.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exemplo,
um vendedor que comercialize R$ 5.000,00 em produtos
químicos em uma semana receberá R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receberá um
total de R$ 650,00. Desenvolva um programa que peça os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor deverá receber.
Processe os valores referentes a um vendedor por vez.
Veja um exemplo do diálogo de entrada/saída: */

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float valor;

    printf("Informe a venda em reais (-1 para terminar): ");
    scanf("%f", &valor);

    while(valor != -1){
        printf("O pagamento é de: R$ %.2f\n\n", 200 + (valor * 0.09));

        printf("Informe a venda em reais (-1 para terminar): ");
        scanf("%f", &valor);
    }

    return 0;
}

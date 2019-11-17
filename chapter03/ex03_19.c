/* 3.19 Calculadora de comiss�o de vendas. Uma grande
companhia qu�mica paga seus vendedores por comiss�o.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exemplo,
um vendedor que comercialize R$ 5.000,00 em produtos
qu�micos em uma semana receber� R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receber� um
total de R$ 650,00. Desenvolva um programa que pe�a os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor dever� receber.
Processe os valores referentes a um vendedor por vez.
Veja um exemplo do di�logo de entrada/sa�da: */

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float valor;

    printf("Informe a venda em reais (-1 para terminar): ");
    scanf("%f", &valor);

    while(valor != -1){
        printf("O pagamento � de: R$ %.2f\n\n", 200 + (valor * 0.09));

        printf("Informe a venda em reais (-1 para terminar): ");
        scanf("%f", &valor);
    }

    return 0;
}

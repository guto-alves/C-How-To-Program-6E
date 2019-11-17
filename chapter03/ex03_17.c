/* 3.17 Consumo de gasolina. Os motoristas se preocupam
com o consumo de combust�vel de seus autom�veis.
Um motorista manteve um registro do n�mero de abastecimentos
que fez, registrando tamb�m o n�mero de
quil�metros rodados e de litros obtidos a cada abastecimento.
Desenvolva um programa que pe�a o n�mero de
quil�metros dirigidos e a quantidade de litros obtidos a
cada abastecimento. O programa dever� calcular e exibir
a quantidade de quil�metros rodados por litros usados.
Depois de processar toda a informa��o, o programa dever�
calcular e exibir o total combinado de quil�metros
por litro para todos os abastecimentos. Veja um exemplo
do di�logo de entrada/sa�da:

Informe quantos litros abasteceu (-1 para terminar): 25,6
Informe quantos km dirigiu: 287
O consumo atual � de 11,210937 km/l

Informe quantos litros abasteceu (-1 para terminar): 20,6
Informe quantos km dirigiu: 200
O consumo atual � de 9,708738 km/l

Informe quantos litros abasteceu (-1 para terminar): 10
Informe quantos km dirigiu: 120
O consumo atual � de 12,000000 km/l

Informe quantos litros abasteceu (-1 para terminar):
-1

O consumo geral foi de 10,800712 km/l */

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float litros, litrosTotal, km, kmTotal, consumoAtual, consumoGeral;

    kmTotal = 0;
    litrosTotal = 0;

    printf("Informe quantos litros abastecu (-1 para terminar): ");
    scanf("%f", &litros);

    while(litros != -1){
        printf("Informe quantos km dirigiu: ");
        scanf("%f", &km);

        consumoAtual = km / litros;

        printf("O consumo atual � de %f km/l\n\n", consumoAtual);

        litrosTotal += litros;
        kmTotal += km;

        printf("Informe quantos litros abastecu (-1 para terminar): ");
        scanf("%f", &litros);
    }

    if(kmTotal != 0){
        consumoGeral = kmTotal / litrosTotal;
        printf("\nO consumo geral foi de %f km/l\n", consumoGeral);
    }else
        printf("\nN�o houve consumo\n");

    return 0;
}

/*
 * 2.24 Par ou ímpar. Escreva um programa que leia um inteiro,
 * determine e imprima se ele é par ou ímpar. [Dica:
 * use o operador módulo. Um número par é um múltiplo
 * de dois. Qualquer múltiplo de dois gera resto zero
 * quando dividido por 2.]
*/

#include <stdio.h>

int main(){
    int number;

    printf("Enter a number integer: ");
    scanf("%d", &number);

    printf("%d is %s", number, number %2 == 0? "even" : "odd");

    return 0;
}

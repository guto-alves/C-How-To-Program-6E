/*
 * 2.24 Par ou �mpar. Escreva um programa que leia um inteiro,
 * determine e imprima se ele � par ou �mpar. [Dica:
 * use o operador m�dulo. Um n�mero par � um m�ltiplo
 * de dois. Qualquer m�ltiplo de dois gera resto zero
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

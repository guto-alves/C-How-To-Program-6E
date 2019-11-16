/* 2.30 Separando dígitos em um inteiro. Escreva um programa
que leia um número de cinco dígitos, separe o número
em dígitos individuais e imprima os dígitos separados um
do outro por três espaços cada um. [Dica: use combinações
da divisão inteira e da operação módulo.] Por exemplo, se o
usuário digitar 42139, o programa deverá exibir
    4 2 1 3 9
*/

#include <stdio.h>

int main(){
    int number;
    int digit1, digit2, digit3, digit4, digit5;

    printf("Enter a five digit number: ");
    scanf("%d", &number);

    if(number / 10000 <= 0 || number / 10000 > 9)
        printf("Invalid number");
    else{
        digit1 = number / 10000;
        digit2 = number % 10000 / 1000;
        digit3 = number % 1000 / 100;
        digit4 = number % 100 / 10;
        digit5 = number % 10;

        printf("%d   %d   %d   %d   %d", digit1, digit2, digit3, digit4, digit5);
    }

    return 0;
}

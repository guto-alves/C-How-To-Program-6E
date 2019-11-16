/* 2.26 Múltiplos. Escreva um programa que leia dois inteiros,
determine e imprima se o primeiro for um múltiplo do
segundo. [Dica: use o operador módulo.] */

#include <stdio.h>

int main(void){
    int number1, number2;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if(number1 % number2 == 0)
        printf("%d is a multiple of %d\n", number1, number2);

    if(number1 % number2 != 0)
        printf("%d isn't a multiple of %d\n", number1, number2);

    return 0;
}

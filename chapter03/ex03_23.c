/* 3.23 Imprimindo n�meros por um loop. Escreva um
    programa que utilize o looping para imprimir os n�meros
    de 1 a 10 lado a lado na mesma linha, com tr�s espa�os
    entre os n�meros. */

#include <stdio.h>

int main(void){
    int counter = 1;

    while(counter <= 10)
        printf("%d   ", counter++);

    return 0;
}

/* 3.23 Imprimindo números por um loop. Escreva um
    programa que utilize o looping para imprimir os números
    de 1 a 10 lado a lado na mesma linha, com três espaços
    entre os números. */

#include <stdio.h>

int main(void){
    int counter = 1;

    while(counter <= 10)
        printf("%d   ", counter++);

    return 0;
}

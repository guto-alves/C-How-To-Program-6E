/*
 * 2.23 Maiores e menores inteiros. Escreva um programa
 * que leia cinco inteiros e depois determine e imprima o
 * maior e o menor inteiro no grupo. Use apenas as técnicas
 * de programação que você aprendeu neste capítulo.
 */

#include <stdio.h>

int main(){
    int number1, number2, number3, number4, number5;
    int largest, smallest;

    printf("Enter five number integers: \n");
    scanf("%d %d %d %d %d", &number1, &number2, &number3, &number4, &number5);

    // determines the largest number
    largest = number1;

    if(number2 > largest)
        largest = number2;

    if(number3 > largest)
        largest = number3;

    if(number4 > largest)
        largest = number4;

    if(number5 > largest)
        largest = number5;

    // determines the smallest number
    smallest = number1;

    if(number2 < smallest)
        smallest = number2;

    if(number3 < smallest)
        smallest = number3;

    if(number4 < smallest)
        smallest = number4;

    if(number5 < smallest)
        smallest = number5;

    printf("Highest is %d\nLowest is %d\n", largest, smallest);

    return 0;
}

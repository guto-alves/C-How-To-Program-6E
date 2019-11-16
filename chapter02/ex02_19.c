/*
 * 2.19 Aritmética, maior e menor valor. Escreva um programa
 * que leia três inteiros diferentes do teclado, depois
 * apresente a soma, a média, o produto, o menor e o maior
 * desses números. Use apenas a forma de seleção única da
 * instrução if que você aprendeu neste capítulo. O diálogo
 * na tela deverá aparecer da seguinte forma:

 * Digite três inteiros diferentes: 13 27 14
 * A soma é 54
 * A média é 18
 * O produto é 4914
 * O menor é 13
 * O maior é 27
 */

#include <stdio.h>

int main(void){
    int number1, number2, number3;
    int sum, product;
    double average;
    int larger, smaller;

    printf("Enter three integers:\n");
    scanf("%d %d %d", &number1, &number2, &number3);

    sum = number1 + number2 + number3;
    average = sum / 3.0;
    product = number1 * number2 * number3;

    smaller = number1;
    if(number2 < smaller)
        smaller = number2;
    if(number3 < smaller)
        smaller = number3;

    larger = number1;
    if(number2 > larger)
        larger = number2;
    if(number3 > larger)
        larger = number3;

    printf("The sum is %d\n", sum);
    printf("The average is %.2f\n", average);
    printf("The product is %d\n", product);
    printf("The larger is %d\n", larger);
    printf("The smaller is %d\n", smaller);

    return 0;
}

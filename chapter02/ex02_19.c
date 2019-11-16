/*
 * 2.19 Aritm�tica, maior e menor valor. Escreva um programa
 * que leia tr�s inteiros diferentes do teclado, depois
 * apresente a soma, a m�dia, o produto, o menor e o maior
 * desses n�meros. Use apenas a forma de sele��o �nica da
 * instru��o if que voc� aprendeu neste cap�tulo. O di�logo
 * na tela dever� aparecer da seguinte forma:

 * Digite tr�s inteiros diferentes: 13 27 14
 * A soma � 54
 * A m�dia � 18
 * O produto � 4914
 * O menor � 13
 * O maior � 27
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

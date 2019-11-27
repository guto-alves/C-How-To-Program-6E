/*  b) Escreva um programa que calcule o valor da constante
    matemática e usando a fórmula:
    e = 1 + (1/1!) + (1/2!) + (1/2!) + ..
*/

#include <stdio.h>

int main(void)
{
    int number;
    double e = 0;

    printf("Enter a integer: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++)
        e += (double)1 / calculateFactorial(i);

    printf("e = %lf", e);

    return 0;
}

int calculateFactorial(int number)
{
    int factorial = 1;

    for(int i = number; i > 1; i--)
        factorial *= i;

    return factorial;
}

#include <stdio.h>
#include <math.h>

int main(void){
    int number;
    double e = 0;

    printf("Enter a integer: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++)
        e += pow(number, i) / calculateFactorial(i);

    printf("e^%d = %lf", number, e);

    return 0;
}

int calculateFactorial(int number){
    int factorial = 1.0;

    for(int i = number; i > 1; i--)
        factorial *= i;

    return factorial;
}

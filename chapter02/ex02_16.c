/*
 * 2.16 Aritm�tica. Escreva um programa que pe�a ao usu�rio
 * que digite dois n�meros, obtenha esses n�meros e
 * imprima a soma, o produto, a diferen�a, o quociente e o
 * m�dulo (resto da divis�o).
 */

#include <stdio.h>

int main(void){
    int num1;
    int num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("The sum is %d\n", num1 + num2);
    printf("The product is %d\n", num1 * num2);
    printf("The difference is %d\n", num1 - num2);
    printf("The quotient is %d\n", num1 / num2);
    printf("The module is %d\n", num1 % num2);

    return 0;
}

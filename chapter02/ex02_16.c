/*
 * 2.16 Aritmética. Escreva um programa que peça ao usuário
 * que digite dois números, obtenha esses números e
 * imprima a soma, o produto, a diferença, o quociente e o
 * módulo (resto da divisão).
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

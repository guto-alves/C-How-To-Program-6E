/*  3.46 Fatorial. O fatorial de um inteiro não negativo n é escrito
    como n! (pronuncia-se ‘n fatorial’) e é definido da
    seguinte forma:
    n! = n · (n - 1) · (n - 2) · … · 1 (para valores de n
    maiores ou iguais a 1)
    e
    n! = 1 (para n = 0).

    a) Escreva um programa que leia um inteiro não negativo
    e calcule e imprima seu fatorial.
*/

#include <stdio.h>

int main(){
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = number; i > 1; i--)
        factorial *= i;

    printf("%d! = %d\n", number, factorial);
    return 0;
}

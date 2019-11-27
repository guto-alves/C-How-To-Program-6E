/*  3.46 Fatorial. O fatorial de um inteiro n�o negativo n � escrito
    como n! (pronuncia-se �n fatorial�) e � definido da
    seguinte forma:
    n! = n � (n - 1) � (n - 2) � � � 1 (para valores de n
    maiores ou iguais a 1)
    e
    n! = 1 (para n = 0).

    a) Escreva um programa que leia um inteiro n�o negativo
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

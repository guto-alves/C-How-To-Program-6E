/*
 * 2.18 Comparando inteiros. Escreva um programa que
 * pe�a ao usu�rio que digite dois inteiros, obtenha os n�meros
 * e depois imprima o maior n�mero seguido das
 * palavras �� maior�. Se os n�meros forem iguais, imprima
 * a mensagem �Esses n�meros s�o iguais�. Use
 * apenas a forma de sele��o �nica da instru��o if que
 * voc� aprendeu neste cap�tulo.
 */

#include <stdio.h>

int main(){
    int number1, number2;
    printf("Enter two integers:\n");
    scanf("%d %d", &number1, &number2);

    if(number1 > number2)
        printf("%d is larger\n", number1);

    if(number2 > number1)
        printf("%d is larger\n", number2);

    if(number1 == number2)
        printf("These numbers are equal\n");

    return 0;
}

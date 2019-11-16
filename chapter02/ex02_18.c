/*
 * 2.18 Comparando inteiros. Escreva um programa que
 * peça ao usuário que digite dois inteiros, obtenha os números
 * e depois imprima o maior número seguido das
 * palavras ‘é maior’. Se os números forem iguais, imprima
 * a mensagem “Esses números são iguais”. Use
 * apenas a forma de seleção única da instrução if que
 * você aprendeu neste capítulo.
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

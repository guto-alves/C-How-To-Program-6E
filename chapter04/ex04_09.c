/*  4.9 Soma de uma sequ�ncia de inteiros. Escreva um
    programa que some uma sequ�ncia de inteiros. Considere
    que o primeiro inteiro lido com scanf especifique o
    n�mero de valores restantes a serem inseridos. Seu programa
    deve ler apenas um valor toda vez que scanf for
    executado. Uma sequ�ncia de entrada t�pica poderia ser
    5 100 200 300 400 500
    onde o 5 indica que os cinco valores subsequentes devem
    ser somados.
*/

#include <stdio.h>

int main(void){
    int amount;
    int number;
    int sum = 0;

    scanf("%d", &amount);

    for(int i = 0; i < amount; i++){
        scanf("%d", &number);
        sum += number;
    }

    printf("\n%d\n", sum);

    return 0;
}

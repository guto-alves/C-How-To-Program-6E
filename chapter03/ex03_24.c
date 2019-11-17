/* 3.24 Ache o n�mero maior. O processo de achar o n�mero
    maior (ou seja, o m�ximo de um grupo de n�meros)
    � usado com frequ�ncia nas aplica��es de computador.
    Por exemplo, um programa que determina o vencedor
    de uma disputa de vendas ler� o n�mero de unidades
    vendidas por vendedor. O vendedor que tiver vendido
    mais unidades vence a disputa. Escreva um programa
    em pseudoc�digo e depois um programa que leia uma
    s�rie de 10 n�meros, determine e imprima o maior dos
    n�meros. [Dica: seu programa dever� usar tr�s vari�veis
    da seguinte forma]:
    contador: Um contador para contar at� 10 (ou seja,
    registrar quantos n�meros foram informados
    e determinar quando os 10 n�meros
    foram processados)
    n�mero: O n�mero da entrada atual no programa
    maior: O maior n�mero achado at� o momento */

#include <stdio.h>

int main(void){
    int counter = 1;
    int largest;
    int number;

    while(counter <= 10){
        printf("number %d: ", counter);
        scanf("%d", &number);

        if(counter == 1)
            largest = number;
        else{
            if(number > largest)
                largest = number;
        }

        counter++;
    }

    printf("The largest number is %d\n", largest);

    return 0;
}

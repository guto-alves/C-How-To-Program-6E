/* 3.38 Escreva um programa que imprima 100 asteriscos, um de
    cada vez. Ap�s cada d�cimo asterisco, seu programa dever�
    imprimir um caractere de nova linha. [Dica: conte de 1
    at� 100. Use o operador de m�dulo para reconhecer cada
    vez que o contador atingir um m�ltiplo de 10.]
*/

#include <stdio.h>

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 10 == 0)
            printf("* \n");
        else
            printf("* ");
    }

    return 0;
}

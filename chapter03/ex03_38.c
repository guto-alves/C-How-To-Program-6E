/* 3.38 Escreva um programa que imprima 100 asteriscos, um de
    cada vez. Após cada décimo asterisco, seu programa deverá
    imprimir um caractere de nova linha. [Dica: conte de 1
    até 100. Use o operador de módulo para reconhecer cada
    vez que o contador atingir um múltiplo de 10.]
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

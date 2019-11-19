/* 3.41 Múltiplos de 2 com um loop infinito. Escreva um programa
    que continue imprimindo os múltiplos do inteiro 2,
    a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop não
    deverá terminar (ou seja, você deverá criar um loop infinito).
    O que acontece quando você executa esse programa?
*/

#include <stdio.h>
#include <math.h>

int main(){
    int count = 1;

    while(1 == 1){
        printf("%.0lf\n", pow(2.0, count));
        count++;
    }

    return 0;
}

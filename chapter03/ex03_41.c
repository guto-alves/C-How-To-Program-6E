/* 3.41 M�ltiplos de 2 com um loop infinito. Escreva um programa
    que continue imprimindo os m�ltiplos do inteiro 2,
    a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop n�o
    dever� terminar (ou seja, voc� dever� criar um loop infinito).
    O que acontece quando voc� executa esse programa?
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

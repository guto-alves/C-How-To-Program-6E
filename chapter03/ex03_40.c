/*  3.40 Padr�o de asteriscos em xadrez. Escreva um programa
    que apresente o seguinte padr�o de tabuleiro de
    xadrez:

    Seu programa dever� usar apenas tr�s instru��es de sa�da,
    uma de cada das seguintes formas:
    printf( �* � );
    printf( � � );
    printf( �\n� );
*/
#include <stdio.h>

int main(void){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i % 2 == 0)
                printf("* ");
            else if(j == 0){
                printf(" ");
                printf("* ");
            }else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

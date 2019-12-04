/* 4.35 Uma cr�tica ao comando break e ao comando continue
� que eles n�o s�o estruturados. Na realidade, comandos
break e comandos continue sempre podem ser substitu�dos
por comandos estruturados, embora isso possa ser
complicado. Descreva, em geral, como voc� removeria
qualquer comando break de um loop em um programa
e substituiria esse comando por algum equivalente estruturado.
[Dica: o comando break sai de um loop de dentro
do corpo do loop. A outra maneira de sair � falhando no
teste de continua��o do loop. Considere o uso de um segundo
teste no teste de continua��o do loop, que indique
�sa�da antecipada devido a uma condi��o de interrup��o�.]
Use a t�cnica que voc� desenvolveu aqui para remover o
comando break do programa da Figura 4.11.

Fig. 4.11: fig04_11.c */

#include <stdio.h>

int main(void){
    int x; /* contador */
    int number;

    for ( x = 1; x <= 10; x++ ){
        number = x;
        if (x == 5)
            x = 10;
        else
            printf("%d ", number);
    }

    printf("\nSaiu do loop em x == %d\n", number);
    return 0;
}

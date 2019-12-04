/* 4.35 Uma crítica ao comando break e ao comando continue
é que eles não são estruturados. Na realidade, comandos
break e comandos continue sempre podem ser substituídos
por comandos estruturados, embora isso possa ser
complicado. Descreva, em geral, como você removeria
qualquer comando break de um loop em um programa
e substituiria esse comando por algum equivalente estruturado.
[Dica: o comando break sai de um loop de dentro
do corpo do loop. A outra maneira de sair é falhando no
teste de continuação do loop. Considere o uso de um segundo
teste no teste de continuação do loop, que indique
‘saída antecipada devido a uma condição de interrupção’.]
Use a técnica que você desenvolveu aqui para remover o
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

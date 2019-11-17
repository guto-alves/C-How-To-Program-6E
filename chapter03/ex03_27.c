/* 3.27 Ache os dois maiores números. Usando uma técnica
    semelhante à do Exercício 3.24, ache os dois maiores
    valores dos 10 números. [Nota: você poderá informar
    cada número apenas uma vez.]
*/

#include <stdio.h>

int main(void){
    int number;
    int largest1;
    int largest2;
    int counter = 1;

    while(counter <= 10){
        printf("number %d: ", counter);
        scanf("%d", &number);

        if(counter == 1)
            largest1 = number;
        else if(counter == 2){
            if(number > largest1){
                largest2 = largest1;
                largest1 = number;
            }else
                largest2 = number;
        }else{
            if(number > largest1){
                largest2 = largest1;
                largest1 = number;
            }else if(number > largest2)
                largest2 = number;
        }

        counter++;
    }

    printf("The two largest number are %d and %d\n", largest1, largest2);

    return 0;
}

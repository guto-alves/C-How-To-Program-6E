/*  2.20 Di�metro, circunfer�ncia e �rea de um c�rculo.
    Escreva um programa que leia o raio de um c�rculo e
    informe o di�metro, a circunfer�ncia e a �rea do c�rculo.
    Utilize o valor constante 3,14159 para p. Realize cada
    um desses c�lculos dentro das instru��es printf e use
    o especificador de convers�o %f. [Nota: neste cap�tulo,
    discutimos apenas constantes e vari�veis inteiras. No Cap�tulo
    3, discutiremos os n�meros em ponto flutuante,
    ou seja, valores que podem ter pontos decimais.] */

#include <stdio.h>

int main(void){
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Diameter = %lf\n",  radius * 2);
    printf("Circumference = %lf\n", 3.14159 * (radius * 2));
    printf("Area = %lf\n", 3.14159 * (radius * radius));

    return 0;
}

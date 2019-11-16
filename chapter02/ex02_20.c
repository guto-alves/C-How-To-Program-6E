/*  2.20 Diâmetro, circunferência e área de um círculo.
    Escreva um programa que leia o raio de um círculo e
    informe o diâmetro, a circunferência e a área do círculo.
    Utilize o valor constante 3,14159 para p. Realize cada
    um desses cálculos dentro das instruções printf e use
    o especificador de conversão %f. [Nota: neste capítulo,
    discutimos apenas constantes e variáveis inteiras. No Capítulo
    3, discutiremos os números em ponto flutuante,
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

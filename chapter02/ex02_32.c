#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    double imc, pesoEmQuilos, alturaEmMetros;

    printf("Peso: ");
    scanf("%lf", &pesoEmQuilos);

    printf("Altura: ");
    scanf("%lf", &alturaEmMetros);

    imc = pesoEmQuilos / (alturaEmMetros * alturaEmMetros);

    printf("Seu IMC é %.2lf\n\n", imc);
    printf("VALORES DE IMC\nAbaixo do peso: menor que 18,5\nNormal: entre 18,5 e 24,9\nAcima do peso: entre 25 e 29,9\nObeso: 30 ou mais\n");

    return 0;
}

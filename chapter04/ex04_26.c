#include <stdio.h>

int main(void){
    double pi = 0;

    int denominator = 1;

    for (int term = 1; term > 0; term++){
        if(term % 2 == 1)
            pi += (double)4 / denominator;
        else
            pi -= (double) 4 / denominator;

        printf("%d term = %lf\n", term, pi);

        denominator += 2;
    }

    return 0;
}

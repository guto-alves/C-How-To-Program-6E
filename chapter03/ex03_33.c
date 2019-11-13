#include <stdio.h>

int main(){
    int side;

    printf("Enter the square side: ");
    scanf("%d", &side);

    for(int i = 0; i < side; i++){
            for(int j = 0; j < side; j++)
                  printf("*");

            printf("\n");
    }

    return 0;
}

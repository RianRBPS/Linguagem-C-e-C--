#include <stdio.h>
#define ZERO 0

int main(){

    int i;

    printf("For\n");
    for(i=10; i>=ZERO; i--){
        printf("%d ", i);
    }

    printf("\nWhile\n");
    i = 10;
    while(i>=ZERO){
        printf("%d ", i);
        i--;
    }

    printf("\nDo While\n");
    i=10;
    do{
        printf("%d ", i);
        i--;
    }while(i>=ZERO);

    return 0;
}
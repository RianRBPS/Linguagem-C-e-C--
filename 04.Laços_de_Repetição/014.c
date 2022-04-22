#include <stdio.h>
#define DEZ 10
#define VINTE 20

int main(){

    int i = DEZ;

    printf("While\n");
    while(i<=VINTE){
        if(i % 2 == 0){
            printf("%d ", i);
            i++;
        }else{
            i++;
        }
    }

    printf("\nDo While\n");
    i = DEZ;
    do{
        if(i % 2 == 0){
            printf("%d ", i);
            i++;
        }
        else{
            i++;
        }
    }while(i<=VINTE);

    printf("\nFor\n");
    for(i=DEZ; i <= VINTE; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            i++;
        }else{
            i++;
        }
    }


    return 0;
}
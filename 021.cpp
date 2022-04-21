#include <stdio.h>

int main(){

    // 1 2  =  3 4
    // 3 4     1 2

    int matriz[2][2];
    int i;
    int j;
    int t;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    t = matriz[0][0];
    matriz[0][0] = matriz[1][0];
    matriz[1][0] = t;

    t = matriz[0][1];
    matriz[0][1] = matriz[1][1];
    matriz[1][1] = t;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
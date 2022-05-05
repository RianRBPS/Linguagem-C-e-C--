#include <stdio.h>
#include <stdlib.h>

int main(){


    // Ponteiro 
    FILE *arq = NULL;
    
    // Ponteiro apontado pro arquivo
    arq = fopen("46.txt", "r");

    // IMPORTANTE
    // Aspas simples ' ' não funcionam 
    // É preciso utilizar aspas duplas " "

    if(arq == NULL){
        printf("Arquivo nao pode ser aberto ou nao existe\n");
        system("pause");
        return 0;
    }

    int x, y, z;

    fscanf(arq, "%d %d %d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);

    fclose(arq);

    system("pause");

    return 0;
}
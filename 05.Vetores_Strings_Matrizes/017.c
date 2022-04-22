#include <stdio.h>
#define TAM 3

int main(){

    float vetor[3];
    int i;
    float media = 0;

    for(i=0; i<TAM; i++){
        scanf("%f", &vetor[i]);
        media = media + vetor[i];
    }

    printf("A media das 3 posicoes do vetor %.2lf, %.2lf e %.2lf e igual a %.2lf", vetor[0], vetor[1], vetor[2], media / 3);

    return 0;
}
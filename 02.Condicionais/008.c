#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2, opcao;

    scanf("%d", &opcao);

    scanf("%d %d", &valor1, &valor2);
    
    switch(opcao){
        case 1:
            printf("%d", valor1 + valor2);
            break;
        case 2:
            printf("%d", abs(valor1 - valor2) );
            break;
        case 3:
            printf("%d", valor1/valor2);
            break;
        case 4:
            printf("%d", valor1 * valor2);
            break;
    }


    return 0;
}
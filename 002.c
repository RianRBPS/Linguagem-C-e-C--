#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota1, nota2, resultado;

    scanf("%d %d", &nota1, &nota2);

    resultado = abs(nota1-nota2);

    printf("%d", resultado);

    return 0;
}
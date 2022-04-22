#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    printf("Olá!");

    char letra = 't';
    fflush(stdin); // Limpa o BUFFER (Memoria temporaria de leitura)
    scanf("%c", &letra);
    printf("O valor de c mudou para %c\n", letra);

    // 3
    printf("Valor absoluto %d", abs(-3));

    return 0;
}
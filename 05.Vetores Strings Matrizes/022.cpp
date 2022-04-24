#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
    //Definindo Variáveis
    int a;
    float b;
    char c;
    bool d;
 
    //Passando Valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;
 
    //Escrevendo variáveis na tela
    printf("Valor : %d \n", a);
    printf("Valor : %.2f \n", b);
    printf("Valor : %c \n", c);
    printf("Valor : %d \n", d);
 
    //Imprimindo com C++
    cout << "Valor :" << a << "! \n";
 
    //Lendo Valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%c", &c);
    scanf("%d", &d);
 
    //Lendo valores com C++
    cin >> a;
 
    //Imprimindo novo valor
    cout << "Valor :" << a;

    /*
    Caso dê problema na leitura do char:

Após a leitura de um tipo CHAR quando você aperta ENTER o C entende que você inseriu "\n", dessa forma o próximo SCANF é automaticamente preenchido com um '\n' e por isso não funciona e pula a leitura direto,, de forma que sempre que você usar um scanf de char deve colocar em seguida um getchar() ou fflush(stdin), eu particularmente prefiro getchar, mais simples, exemplo:

scanf("%c", &palavra); //insere a palavra;

getchar(); // limpa o \n do enter e agora no futuro, poderá ler outros chars sem problema.
    */
 
    return 0;
}
#include <stdio.h>

int main(){

   int lado1, lado2, lado3;

   scanf("%d %d %d", &lado1, &lado2, &lado3);

   if(lado1 == lado2 && lado1 == lado3){
       printf("Triangulo equilatero");
   }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
       printf("Pelo menos dois lados sao iguais");
   }else{
       printf("Todos os lados do triangulo sao diferentes");
   }

    return 0;
}
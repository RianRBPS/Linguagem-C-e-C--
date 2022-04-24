#include <stdio.h>

int main(){

    float caso_Teste;
    float i;
    float div;
    int primo = 1;

    scanf("%f", &caso_Teste);

    //primo
    // x / 1   x / x

    if(caso_Teste == 1){
        printf("Primo");
    }else{
        for(i=2; i<caso_Teste; i++){
            div = caso_Teste / i;
            //printf("%.2lf ", div);
            if(div == (int)div){
                printf("Nao primo");
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("Primo");
        }
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Crie um algoritmo que informe se o valor lido é primo ou não
    int i, valor, aux = 0;
 
    printf("Digite um valor para saber se ele é primo:");
    scanf("%d", &valor);
 
    for(i = 1; i <= valor ; i++){
 
        //Conferindo quantas vezes houve divisibilidade
        if(valor % i == 0){
            aux++;
        }
 
        //Exibe o resto da divisão na tela
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
     }
 
     if(aux == 2){
        printf("O número é primo!");
    }else{
        printf("O número não é primo! Pois ele tem %d divisores", aux);
    }
}
*/

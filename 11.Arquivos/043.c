#include <stdio.h>

int main(){

    // Cria o ponteiro
    FILE *arq = NULL;

    // Ponteiro aponte em um arquivo no programa 
    arq = fopen("44.txt", "w"); 
    //arq = fopen("C:\\Users\\Italo\\Desktop\\teste.txt", "w"); 

    // Escreve no arquivo
    fprintf(arq, "Insonia");

    // Salva e fecha o arquivo de maneira segura
    fclose(arq);
    
    return 0;
}
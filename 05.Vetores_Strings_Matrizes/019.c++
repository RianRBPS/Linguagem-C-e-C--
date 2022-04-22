#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
 
using namespace std;
// Toda vez que não ter nada antes de cout e cin vai usar std:: por definição
 
//Função principal do programa
int main(){
 
    //Definindo uma String
    string palavra;
 
    //Imrpimindo na tela
    std::cout << "Digite uma palavra: ";
 
    //Lendo uma string
    std::cin >> palavra;
 
    //Imprimindo uma variável
    std::cout << "\nA palavra eh: " << palavra;

    return 0;
 
}
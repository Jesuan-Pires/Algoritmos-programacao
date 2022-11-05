#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "exemplo1.h"

int main(){

    int vetor[10];
    int vetor2[10];
    int vetor3[10];

    system("cls");

    popularVetor(vetor, 10);
    exibirVetor(vetor , 10, "Dados do vetor 1\n");




    return 1;
}
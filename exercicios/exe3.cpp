#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 10

using namespace std;
// 2) Fazer um programa em C++, que recebe o vetor populado e exibido no código anterior, 
//fazendo a operação de ordenação no vetor. Ao final, mostrar o vetor ordenado.

int main(){

    int vetor[N];

    for(int i = 0; i < N; i++){
        vetor[i] = rand() % 101;
    }

    for(int i = 0; i < N; i++){
        cout << vetor[i] << "\t";
    }

    cout << "\n";

    //ordenando o vetor pelo método Bubble Sort(bolha)

    bool houveTroca;
    int aux;

    do{
        houveTroca = false;
        for(int i = 0; i < N; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                houveTroca = true;
            }
        }
    }while(houveTroca);

    //exibindo os valores
    for(int i = 0; i < N; i++){
        cout << vetor[i] << "\t";
    }

    cout << "\n";


    return 1;
}
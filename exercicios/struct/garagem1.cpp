#include <iostream>
#include <string>
#include <cstdlib>
#define TAM 10

using namespace std;

typedef struct
{
    string placa;
    string data;
    string horaE;
    string horaS;
    int tempoPermanencia;
    float valor;
} Garagem;

int main()
{

    int opcao;
    Garagem lista[TAM];
    int totalVeiculos = -1;

    do
    {
        system("cls");
        cout << "Menu veiculo\n";
        cout << "1 - Entrada veiculo\n";
        cout << "2 - Saida veiculo\n";
        cout << "3 - Lista veiculos em garagem\n";
        cout << "4 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;
        cout << "\n";

        switch (opcao)
        {
        case 1:
            cout << "Entrando com veiculo....\n";
            if (totalVeiculos == TAM - 1)
            {
                cout << "Garagem lotada!\n";
            }
            else
            {
                totalVeiculos++;
                cout << "Placa: ";
                cin >> lista[totalVeiculos].placa;
                cout << "Data dd/mm/aaaa: ";
                cin >> lista[totalVeiculos].data;
                cout << "Hora de entrada: ";
                cin >> lista[totalVeiculos].horaE;
                cout << "Hora de saida: ";
                cin >> lista[totalVeiculos].horaS;
                cout << "Tempo de permanencia: ";
                cin >> lista[totalVeiculos].tempoPermanencia;
                cout << "Valor: ";
                cin >> lista[totalVeiculos].valor;
            }

            break;
        case 2:
            cout << "Saindo veiculo....\n";
            if (totalVeiculos == -1)
            {
                cout << "Garagem vazia\n";
            }
            else
            {
                totalVeiculos--;
                cout << "Vagas disponiveis: " << totalVeiculos << endl;
                
            }
            break;
        case 3:
            cout << "Listando Garagem....\n";
            if (totalVeiculos == -1)
            {
                cout << "Garagem vazia!\n";
            }
            else
            {
                for (int i = 0; i <= totalVeiculos; i++)
                {
                    cout << "\nCarro: " << i + 1 << endl;                    
                    cout << "Placa: " << lista[i].placa << endl;
                    cout << "Data: " << lista[i].data << endl;
                    cout << "Horario de entrada: " << lista[i].horaE << endl;
                    cout << "Horario de saida: " << lista[i].horaS << endl;
                    cout << "Tempo de permanencia: " << lista[i].tempoPermanencia << endl;
                    cout << "Valor: " << lista[i].valor << endl;
                    cout << "-----------------------\n";
                }
            }
            break;
        case 4:
            cout << "Obrigado por utilizar o sistema!\n";
            break;

        default:
            cout << "opcao invalida!\n";
            break;
        }
       system("pause");
    } while (opcao != 4);

    return 1;
}
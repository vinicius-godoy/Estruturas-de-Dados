#include <iostream>
#include <cstdlib>
#include <clocale>
#include "filasequencial.h"

using namespace std;

int main()
{
    cout << "Fila em alocação sequencial" << endl;

    unsigned tamanho;
    cout << "Digite o tamanho da pilha: ";
    cin >> tamanho;
    Fila<int> f(tamanho);
    int opc, valor;

    do{
        cout << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Primeiro" << endl;
        cout << "4 - Exibir a fila" << endl;
        cout << "0 - Sair" << endl;

        cout << "\nSelecione: ";
        cin >> opc;

        switch(opc)
        {
        case 0:
            exit(0);
            break;
        case 1:
            if(p.pilhaCheia()){
                cout << "Pilha Cheia..." <<endl;
            }else{
                cout << "Digite o valor: ";
                cin >> valor;
                p.empilha(valor);
                cout << "Empilhado..." << endl;
            }
            system("pause");
            system("cls");
            break;
        case 2:
            if(p.pilhaVazia()){
                cout << "A pilha esta vazia..." << endl;
            }else{
                cout << "Desempilhado: " << p.desempilha() << endl;
            }
            system("pause");
            system("cls");
            break;
        case 3:
            if(p.pilhaVazia()){
                cout << "A pilha esta vazia..." << endl;
            }else{
                cout << "Elemento do topo: " << p.elemTopo() << endl;
            }
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Elementos da pilha" << endl;
            if(p.pilhaVazia()){
                cout << "A pilha esta vazia..." << endl;
            }else{
                for(int i = 0; i <= p.getTopo(); i++){
                    cout << "[" << p.getValor(i) <<  "] ";
                }
                cout << endl;
            }
            system("pause");
            system("cls");
            break;
        default:
            cout << "Opcao invalida" << endl;
            system("pause");
            system("cls");
        }
    }while(opc != 0);

    return 0;
}

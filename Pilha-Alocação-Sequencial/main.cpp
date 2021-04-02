#include <iostream>
#include <cstdlib>
#include "pilhasequencial.h"

using namespace std;

int main()
{
    cout << "Pilha em alocação sequencial" << endl;

    unsigned tamanho;
    cout << "Digite o tamanho da pilha: ";
    cin >> tamanho;
    Pilha<int> p(tamanho);
    int opc, valor;

    do{
        cout << "1 - Empilhar" << endl;
        cout << "2 - Desempilhar" << endl;
        cout << "3 - Elemento do topo" << endl;
        cout << "4 - Exibir a pilha" << endl;
        cout << "0 - Sair" << endl;

        cout << "\nSelecione: ";
        cin >> opc;

        switch(opc)
        {
        case 0:
            cout << "Fim...." << endl;
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

#include <iostream>
#include <cstdlib>
#include <clocale>
#include "pilhaligada.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    Pilha<int> p;

    int opc, x;
    do{
    cout << "======|Pilha Ligada|======" << endl;
    cout << "1- Empilha" << endl;
    cout << "2- Desempilha" << endl;
    cout << "3- Elemento do Topo" << endl;
    cout << "4- Exibir Pilha" << endl;
    cout << "0- Sair" << endl;
    cout << "Selecione sua Opção -> ";
    cin >> opc;

    switch(opc){
    case 0:
        exit(0);
        break;
    case 1:
        cout << "Digite o valor: ";
        cin >> x;
        if(p.empilha(x)){
            cout << "Empilhado com sucesso!" << endl;
        }else{
            cout << "Pilha Cheia!\a" << endl;
        }
        system("pause");
        break;
    case 2:
        if(p.pilhaVazia()){
            cout << "Pilha Vazia!" << endl;
        }else{
            cout << "Item Desempilhado:" << p.desempilha() << endl;
        }
        system("pause");
        break;
    case 3:
        if(p.pilhaVazia()){
            cout << "Pilha Vazia!" << endl;
        }else{
            cout << "Elemento do Topo:" << p.elementoTopo() << endl;
        }
        system("pause");
        break;
    case 4:
        system("cls");
        cout << "Elementos da Pilha " << endl;
        if (p.pilhaVazia()){
            cout << "Pilha Vazia!" << endl;
        }else{
            Node<int> *aux = p.getTopo();
            while (aux != NULL){
                cout << aux->info << " ";
                aux = aux->prox;
            }
            cout << endl;
        }
        system("pause");
        break;
    default:
        cout << "Opção Inválida, Selecione Outra Opção!\a" << endl;
        system("pause");
        break;
    }

    system("cls");
    }while(opc != 0);

    return 0;
}
#include <iostream>
#include "listaordenada.h"
using namespace std;

int main()
{
    cout << "Lista Ordenada" << endl;
    Lista<int> lista;
    bool teste;
    lista.insere(5);
    lista.insere(3);
    lista.insere(10);
    lista.insere(7);
    lista.insere(15);
    lista.insere(20);
    lista.insere(1);
    lista.insere(50);
    teste = lista.remove(1);
    cout << teste << endl;
    Node<int> *aux = lista.h;
    while (aux != NULL){
        cout << aux->info << " ";
        aux = aux->prox;
    }
    return 0;
}

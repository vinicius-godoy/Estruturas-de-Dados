#include <iostream>
#include "hash.h"

using namespace std;

int main()
{
    cout << "Tabela Hashing" << endl;
    Hash dh;
    dh.insere(54);
    dh.insere(15);
    dh.insere(7);
    dh.insere(78);
    dh.insere(14);
    dh.insere(95);
    dh.insere(21);
    dh.insere(46);
    dh.insere(33);
    dh.insere(9);
    dh.insere(62);
    dh.insere(87);
    dh.remove(95);

    for (int i = 0; i < W; i++){
        Node *aux = dh.h[i];
        cout << "h[" << i << "]->";
        while(aux != NULL){
            cout << aux->info << "->";
            aux = aux->prox;
        }
        cout << endl;
    }
    return 0;
}

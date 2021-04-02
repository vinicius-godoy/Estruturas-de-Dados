#include <iostream>
#include <cstdlib>
#include <clocale>
#include "filaligada.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opc, valor;
    FilaLigada<int> f;

    do{
        cout << "======|Fila Ligada|======" << endl;
        cout << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Primeiro" << endl;
        cout << "4 - Exibir" << endl;
        cout << "0 - Sair" << endl;
        cout << "Seleciona sua opção -> ";
        cin >> opc;

        switch(opc){
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Digite o valor: ";
            cin >> valor;
            if (f.insere(valor)){
                cout << "Valor inserido com sucesso!\a";
            }else{
                cout << "Fila Cheia!";
            }
            system("pause");
            break;
        case 2:
            if (f.filaVazia()){
                cout << "A Fila está Vazia!\a";
            }else{
                cout << "Item Removido: " << f.remover() << endl;
            }
            system("pause");
            break;
        case 3:
            if(f.filaVazia()){
                cout << "Essa fila está vazia!\a" << endl;
            }else{
                cout << "Primeiro Elemento da Fila: " << f.primeiro() << endl; 
            }
            system("pause");
            break;
        case 4:
            system("cls");
            if (f.filaVazia()){
                cout << "Essa fila está vazia!\a" << endl;
            }else{
                cout << "Elementos da Fila: " << endl;
                Node<int> *aux = f.getInicio();
                while(aux != NULL){
                    cout << aux->info << endl;
                    aux = aux->prox;
                }
            }
            system("pause");
            break;
        default:
            cout << "Opção inválida! Selecione outra opção\a" << endl;
            system("pause");
            break;
        }

        system("cls");
    }while(opc != 0);

    return 0;
}
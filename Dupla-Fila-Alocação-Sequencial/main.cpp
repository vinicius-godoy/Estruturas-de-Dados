#include <iostream>
#include <cstdlib>
#include <clocale>
#include "duplafilasequencial.h"

//Namespace
using namespace std;

//Declaração das Funções
void menuInserirFim(DuplaFila<int>&);
void menuRemoverInicio(DuplaFila<int>&);
void menuPrimeiro(DuplaFila<int>&);
void menuInserirInicio(DuplaFila<int>&);
void menuRemoverFim(DuplaFila<int>&);
void menuUltimo(DuplaFila<int>&);
void menuExibir(DuplaFila<int>&); 
//Funções recebem Dupla Fila por Referência para que ao final da função ela não seja deletada

int main()
{
    system("cls");
    setlocale(LC_ALL, "portuguese");
    unsigned tamanho;
    int opc;
    cout << "Dupla Fila em Alocação Sequencial" << endl;
    cout << "Qual será o tamanho da fila: ";
    do{
        cin >> tamanho;
        if(tamanho < 1){cout << "O tamanho deve ser de no mínimo 1!\a Escolha outro número: ";}
    }while(tamanho < 1);
    //Do-while não permite que o tamanho da fila seja 0 ou negativo

    DuplaFila<int> f(tamanho); //Inicialização da fila com o tamanho determinado pelo usuário

    system("cls");
    do{
        cout << "Dupla Fila em Alocação Sequencial" << endl;
        cout << "1 - Inserir no Fim" << endl;
        cout << "2 - Remover no Início" << endl;
        cout << "3 - Primeiro" << endl;
        cout << "4 - Inserir no Início" << endl;
        cout << "5 - Remover no Fim" << endl;
        cout << "6 - Último" << endl;
        cout << "7 - Exibir" << endl;
        cout << "0 - Sair" << endl;

        cout << "Selecione sua opção -> ";
        cin >> opc;

        switch(opc)
        {
        case 0:
            exit(0);
            break;
        case 1:
            menuInserirFim(f);
            break;
        case 2:
            menuRemoverInicio(f);
            break;
        case 3:
            menuPrimeiro(f);
            break;
        case 4:
            menuInserirInicio(f);
            break;
        case 5:
            menuRemoverFim(f);
            break;
        case 6:
            menuUltimo(f);
            break;
        case 7:
            menuExibir(f);
            break;
        default:
            cout << "\aSelecione uma opção válida! ";
            system("pause");
        }

        system("cls");
    }while(opc != 0);

    return 0;
}

//Funções
void menuInserirFim(DuplaFila<int>& f)
{
    int valor;
    if (f.filaCheia()){
        cout << "\aA Fila já está cheia!" << endl;
        system("pause");
    }else{
        cout << "Digite o valor que deseja inserir: ";
        cin >> valor;
        f.insereFim(valor);
        cout << "O valor " << valor << " foi inserido com sucesso! ";
        system("pause");
    }
}
void menuRemoverInicio(DuplaFila<int>& f)
{
    if (f.filaVazia()){
        cout << "\aA Fila está vazia!" << endl;
        system("pause");
    }else{
        cout << "O valor " << f.excluiInicio() << " foi removido com sucesso! ";
        system("pause");
    }
}
void menuPrimeiro(DuplaFila<int>& f)
{
    if (f.filaVazia()){
        cout << "\aA Fila está vazia!" << endl;
        system("pause");
    }else{
        cout << "Primeiro da fila: " << f.getPrimeiro() << endl;
        system("pause");
    }
}
void menuInserirInicio(DuplaFila<int>& f)
{
    int valor;
    if (f.filaCheia()){
        cout << "\aA Fila já está cheia!" << endl;
        system("pause");
    }else{
        cout << "Digite o valor que deseja inserir: ";
        cin >> valor;
        f.insereInicio(valor);
        cout << "O valor " << valor << " foi inserido com sucesso! ";
        system("pause");
    }
}
void menuRemoverFim(DuplaFila<int>& f)
{
    if (f.filaVazia()){
        cout << "\aA Fila está vazia!" << endl;
        system("pause");
    }else{
        cout << "O valor " << f.excluiFim() << " foi removido com sucesso! ";
        system("pause");
    }
}
void menuUltimo(DuplaFila<int>& f)
{
    if (f.filaVazia()){
        cout << "\aA Fila está vazia!" << endl;
        system("pause");
    }else{
        cout << "Último da fila: " << f.getUltimo() << endl;
        system("pause");
    }
}
void menuExibir(DuplaFila<int>& f)
{
    system("cls");
    cout << "======|Elementos da fila|======" << endl;
    if (f.filaVazia()){
        cout << "\aA Fila está vazia!" << endl;
    }else{
        int loop = f.getInicio(); //Inicialização pro laço do-while
        bool fim_maior = (f.getFim() > f.getInicio());
        do{ 
            cout << "[" << f.getPosicao(loop) << "] ";
            loop++; //Incremento do laço do-while
            if(loop == f.getTamanho() && !fim_maior){ //Se chegar no final e fim for menor que inicio, voltar ao começo
                loop = 0;
            }
        }while (loop != f.getFim() + 1);
        cout << endl;
    }
    system("pause");
}
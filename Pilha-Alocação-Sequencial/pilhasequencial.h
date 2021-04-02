#ifndef FILASEQUENCIAL_H_INCLUDED
#define FILASEQUENCIAL_H_INCLUDED

template <typename Tipo>

class Pilha{
private:
    int topo;
    Tipo *v; // Ponteiro do tipo de dado definido na main
    unsigned tamanho;
public:
    //Construtor
    Pilha(unsigned tam){ // Cria um array com o tamanho definido e coloca o topo como -1
        tamanho = tam;
        topo = -1;
        v = new Tipo[tamanho];
    }

    //Destrutor
    ~Pilha(){
        delete[] v;
    }

    //M�todos
    void empilha(Tipo x){
        v[++topo] = x; // Adiciona o dado no pr�ximo ind�ce do array
    }

    Tipo desempilha(){
        Tipo temp = v[topo]; // Vari�vel Tempor�rio que guarda o dado que ser� removido
        topo--; // Decrementa o topo

        return temp; // Retorna o dado removido
    }
    Tipo elemTopo(){
        return v[topo];
    }
    bool pilhaCheia(){
        return topo == tamanho - 1;
    }
    bool pilhaVazia(){
        return topo == -1;
    }

    //M�todos Get
    unsigned getTamanho(){
        return tamanho;
    }
    int getTopo(){
        return topo;
    }
    Tipo getValor(int posicao){
        return v[posicao];
    }
};

#endif // FILASEQUENCIAL_H_INCLUDED

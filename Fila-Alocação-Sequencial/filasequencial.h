#ifndef FILASEQUENCIAL_H_INCLUDED
#define FILASEQUENCIAL_H_INCLUDED

template <typename Tipo>

class Fila{
private:
    Tipo *v;  // Ponteiro de dado do tipo definido pelo main
    int fim;
    int inicio;
    unsigned tamanho;
    unsigned qtd; // Quantidade
public:
    //Construtor
    Fila(unsigned tam){ // Inicia a fila com array de tamanho definido, quantidade 0, inicio 0 e fim -1
        tamanho = tam;
        fim = -1; inicio = 0;
        qtd = 0;
        v = new Tipo[tamanho];
    }

    //Destrutor
    ~Fila(){
        delete[] v;
    }

    //M�todos
    void insere(Tipo x){ 
        fim++; qtd++; // Incrementa o fim e a quantidade
        if(fim == tamanho){fim = 0;} // Se o fim chegar ao final ele circula pro come�o
        v[fim] = x; // Adiciona o dado no array
    }
    Tipo exclui(){
        Tipo temp = v[inicio]; // Vari�vel tempor�ria que salva o dado que vai ser removido
        inicio++; qtd--; // Incrementa o in�cio e diminui a quantidade
        if(inicio == tamanho){inicio = 0;} // Se o in�cio chegar ao final do array de fila ele circula pro come�o

        return temp; // Retorna o dado removido da fila
    }
    bool cheia(){
        return qtd == tamanho;
    }
    bool vazia(){
        return qtd == 0;
    }
    Tipo primeiro(){
        return v[inicio];
    }

    //M�todos Get
    unsigned getTamanho(){
        return tamanho;
    }
    int getQuantidade(){
        return qtd;
    }
    int getFim(){
        return fim;
    }
    unsigned getInicio(){
        return inicio;
    }
    Tipo getPosicao(unsigned posicao){
        return v[posicao];
    }
};


#endif // FILASEQUENCIAL_H_INCLUDED

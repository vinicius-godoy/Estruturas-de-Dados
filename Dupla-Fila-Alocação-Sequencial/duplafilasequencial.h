#ifndef FILASEQUENCIAL_H_INCLUDED
#define FILASEQUENCIAL_H_INCLUDED

template <typename Tipo>

class DuplaFila{
private:
    Tipo *v; // Ponteiro de dado do tipo definido pelo main
    int fim;
    int inicio;
    unsigned tamanho;
    unsigned qtd; // Quantidade

public:
    //Construtor
    DuplaFila(unsigned tam){ // Inicia a fila com array de tamanho definido, quantidade 0, inicio 0 e fim -1
        tamanho = tam;
        fim = -1; inicio = 0;
        qtd = 0;
        v = new Tipo[tamanho];
    }

    //Destrutor
    ~DuplaFila(){
        delete[] v;
    }

    //M�todos
    void insereFim(Tipo x){
        fim++; qtd++; // Incrementa o fim e a quantidade
        if(fim == tamanho){fim = 0;} // Se o fim chegar ao final ele circula pro come�o
        v[fim] = x; // Adiciona o dado no array de fila
    }
    void insereInicio(Tipo x){
        inicio--; qtd++; // Incrementa a quantidade e decrementa o in�cio
        if(inicio == -1){inicio = tamanho - 1;} //Se o in�cio fica abaixo do come�o do array ele circula pro final
        v[inicio] = x; // Adiciona o dado no array de fila
    }
    Tipo excluiInicio(){
        Tipo temp = v[inicio]; // Vari�vel tempor�ria que salva o dado que vai ser removido
        inicio++; qtd--; // Incrementa o in�cio e diminui a quantidade
        if(inicio == tamanho){inicio = 0;} // Se o in�cio chegar ao final do array de fila ele circula pro come�o

        return temp; // Retorna o dado removido da fila
    }
    Tipo excluiFim(){
        Tipo temp = v[fim]; // Vari�vel tempor�ria que salva o dado que vai ser removido
        fim--; qtd--; // Decrementa fim e quantidade
        if(fim == -1){fim = tamanho - 1;} // Se o fim ficar abaixo do come�o do array ele circula pro final

        return temp; // Retorna o dado removido da fila
    }
    bool filaCheia(){
        return qtd == tamanho;
    }
    bool filaVazia(){
        return qtd == 0;
    }

    //M�todos Get
    unsigned getTamanho(){
        return tamanho;
    }
    int getQuantidade(){
        return qtd;
    }
    Tipo getPrimeiro(){
        return v[inicio];
    }
    Tipo getUltimo(){
        return v[fim];
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

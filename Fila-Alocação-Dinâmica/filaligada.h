#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED

template <typename Tipo>
struct Node{ // Estrutura de N� que vai conter o dado e o pr�ximo N�
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
class FilaLigada{
private:
    Node<Tipo> *inicio; // Ponteiro do primeiro item da fila
    Node<Tipo> *fim; // Ponteiro do �ltimo item da fila

public:
    // Construtor
    FilaLigada(){
        inicio = NULL; // Inicia sem primeiro item
        fim = NULL; // Inicia sem �ltimo item
    }

    // M�todos
    bool insere(Tipo x){
        bool v = true; // Vari�vel para checar se a aloca��o din�mica funcionou
        Node<Tipo> *aux = new Node<Tipo>; // Vari�vel auxiliar pro novo n�
        if (aux == NULL){ // Se a aloca��o din�mica falhar o check � falso
            v = false;
        }
        else{ // Sen�o o auxiliar pega a informa��o passada como param�tro e aponta para NULL (Sem pr�ximo item)
            aux->info = x;
            aux->prox = NULL;
            if (inicio == NULL){ // Se n�o existir um item inicial torn�-lo o auxiliar
                inicio = aux;
            }else{ // Sen�o o pr�ximo ser� o auxiliar
                fim->prox = aux;
            }
            fim = aux; // Finalmente o ponteiro do fim vai para o auxiliar
        }

        return v; // Retorna o sucesso da aloca��o
    }
    Tipo remover(){
        Tipo temp = inicio->info; // Vari�vel tempor�ria pra armazenar dado do n� que ser� tirado da fila
        Node<Tipo> *aux = inicio; // Vari�vel auxiliar de n� que � atribu�da com o in�cio
        inicio = inicio->prox; // Transforma o in�cio no pr�ximo da fila
        if(inicio == NULL){ // Se ao desempilhar o �nicio apontar pra NULL o fim tamb�m deve apontar
            fim == NULL;
        }
        delete aux; // Deleta o auxiliar contendo o in�cio
        
        return temp; // Retorna o dado do n� tirado da fila
    }
    Tipo primeiro(){
        return inicio->info;
    }
    bool filaVazia(){
        return inicio == NULL;
    }

    // M�todos Get
    Node<Tipo> *getInicio(){
        return inicio;
    }
};

#endif //FILALIGADA_H_INCLUDED
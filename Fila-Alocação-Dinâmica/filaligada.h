#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED

template <typename Tipo>
struct Node{ // Estrutura de Nó que vai conter o dado e o próximo Nó
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
class FilaLigada{
private:
    Node<Tipo> *inicio; // Ponteiro do primeiro item da fila
    Node<Tipo> *fim; // Ponteiro do último item da fila

public:
    // Construtor
    FilaLigada(){
        inicio = NULL; // Inicia sem primeiro item
        fim = NULL; // Inicia sem último item
    }

    // Métodos
    bool insere(Tipo x){
        bool v = true; // Variável para checar se a alocação dinâmica funcionou
        Node<Tipo> *aux = new Node<Tipo>; // Variável auxiliar pro novo nó
        if (aux == NULL){ // Se a alocação dinâmica falhar o check é falso
            v = false;
        }
        else{ // Senão o auxiliar pega a informação passada como paramêtro e aponta para NULL (Sem próximo item)
            aux->info = x;
            aux->prox = NULL;
            if (inicio == NULL){ // Se não existir um item inicial torná-lo o auxiliar
                inicio = aux;
            }else{ // Senão o próximo será o auxiliar
                fim->prox = aux;
            }
            fim = aux; // Finalmente o ponteiro do fim vai para o auxiliar
        }

        return v; // Retorna o sucesso da alocação
    }
    Tipo remover(){
        Tipo temp = inicio->info; // Variável temporária pra armazenar dado do nó que será tirado da fila
        Node<Tipo> *aux = inicio; // Variável auxiliar de nó que é atribuída com o início
        inicio = inicio->prox; // Transforma o início no próximo da fila
        if(inicio == NULL){ // Se ao desempilhar o ínicio apontar pra NULL o fim também deve apontar
            fim == NULL;
        }
        delete aux; // Deleta o auxiliar contendo o início
        
        return temp; // Retorna o dado do nó tirado da fila
    }
    Tipo primeiro(){
        return inicio->info;
    }
    bool filaVazia(){
        return inicio == NULL;
    }

    // Métodos Get
    Node<Tipo> *getInicio(){
        return inicio;
    }
};

#endif //FILALIGADA_H_INCLUDED
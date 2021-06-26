#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED
template <typename Tipo>

struct Node{
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>

class Fila{
private:
    Node<Tipo> *inic;
    Node<Tipo> *fim;
public:
    Fila(){
        inic = NULL;
        fim = NULL;
    }
    bool inserir(Tipo x){
        bool v = true;
        Node<Tipo> *aux = new Node<Tipo>; //Passo 0: Alocando espa�o

        //Se aux n�o conseguiu alocar
        if(aux == NULL){
            v = false;
        }
        else{
            aux->info = x;// Passo 1: info recebe Valor
            aux->prox = NULL; //Passo 2:prox apontando para NULL

            //Se Fila est� recebendo o 1� Valor
            if(inic == NULL){
                inic = aux; //Passo 3: Inic recebe Valor de aux
                //fim = aux; - Passo 5: inic e fim apontando para o mesmo lugar
            }
            else{
                fim->prox = aux; //Passo 4: fim vai apontar para onde aux est� apontando (Novo Elemento)
                //fim = aux; - Passo 5: fim recebe aux
            }
            fim = aux; //Passo 5
        }
        return v;
    }

    Tipo remover(){
        Tipo temp = inic->info;
        Node<Tipo> *aux = inic; //Passo 1: aux apontar para o atual inic
        inic = inic->prox; //Passo 2: inic agora apontar� ao lugar para o qual o seu prox est� apontando

        //Se inic apontar para NULL
        if(inic == NULL){
            fim = NULL; //fim tamb�m apontar� para NULL
        }

        delete aux; //Passo 3: Libarando espa�o
        return temp;
    }

    bool filaVazia(){
        return inic == NULL;
    }

    Tipo primeiroFila(){
        return inic->info;
    }

    Node<Tipo> *getInic(){
        return inic;
    }
};
#endif

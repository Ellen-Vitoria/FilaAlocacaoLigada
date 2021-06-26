#include <iostream>
#include <stdlib.h>
#include "filaLigada.h"

using namespace std;

int main()
{
    cout << "Fila Ligada" << endl;
    Fila<int> f;
    int opc, valor;
    do{
        cout<< "\n1  -  Inserir" <<endl;
        cout<< "2  -  Remover" <<endl;
        cout<< "3  -  Primeiro" <<endl;
        cout<< "4  -  Exibir" <<endl;
        cout<< "5  -  Fim" <<endl;
        cout<< "\nSelecione: ";
        cin>> opc;

        switch(opc){
            //Inserir
            case 1:
                cout<< "\nDigite o Valor: ";
                cin>> valor;
                f.inserir(valor);
                break;

            //Remover
            case 2:
                if(f.filaVazia()){
                    cout<< "Fila Vazia....." <<endl;
                }
                else{
                    cout<< "\nRemovido: " <<f.remover()<<endl;
                }
                break;

            //Primeiro da Fila
            case 3:
                if(f.filaVazia()){
                    cout<< "Fila Vazia....." <<endl;
                }
                else{
                    cout<< "\nPrimeiro: " <<f.primeiroFila()<<endl;
                }
                break;

            //Exibir a Fila
            case 4:
                if(f.filaVazia()){
                    cout<< "Fila Vazia....." <<endl;
                }
                else{
                    cout<< "\nElementos da Fila: ";
                    Node<int> *aux = f.getInic();
                    while(aux != NULL){
                        cout<< aux->info << "   ";
                        aux = aux->prox;
                    }
                    cout<< endl;
                }
                break;

            //Sair
            case 5:
                return 0;
                break;

            //Se digitado outro valor
            default:
                continue;
                break;
        }
        cout<< "\n\n";
        system("pause");
        system("cls");

    }while(opc != 5);
}

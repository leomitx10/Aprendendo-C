#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa{
    string nome;
    int rg;
    struct pessoa *proximo;
};

void limpatela(){
    system("CLS");
}


int retornaTamanhoListaEncadeada(pessoa *ponteiroEncadeada){
     if(ponteiroEncadeada->nome==""){
        return 0;
    }else{
        int tamanho = 0;
        pessoa *p = ponteiroEncadeada;

        while(p != NULL){
            p = p->proximo;
            tamanho++;
        }
        return tamanho;
    }

}

void imprimeEncadeada(pessoa *ponteiroEncadeada){
    pessoa *p = ponteiroEncadeada;

    while(p!=NULL){
        cout << p->nome << "," << p->rg <<"\n";
        p = p->proximo;

    }
}

void  adcComecoEncadeada(pessoa **ponteiroEncadeada,string nome,int rg){

    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = *ponteiroEncadeada;

    if((*ponteiroEncadeada)->nome== ""){
        novoValor->proximo=NULL;
    }else{
        novoValor->proximo=*ponteiroEncadeada;
    }
    *ponteiroEncadeada = novoValor;
}

void adcFimEncadeada(pessoa *ponteiroEncadeada, string nome, int rg){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeada;
        while(p != NULL){
            if(p->proximo == NULL){
                p->proximo = novoValor;
                return;
            }
            p = p->proximo;
        }
    free(p);
    free(novoValor);

}

void adcPosicaoEncadeada(pessoa *ponteiroEncadeada,string nome,int rg, int posicao){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeada;
    int i = 0;

    while(i <= posicao){
        if(i == posicao-1){
            pessoa *aux = new pessoa;
            aux->proximo = p->proximo;

            p->proximo = novoValor;
            novoValor->proximo = aux->proximo;

            free(aux);
        }
        p = p->proximo;
        i++;
    }
}

void removeInicioEncadeada(pessoa **ponteiroEncadeada){
    if((*ponteiroEncadeada)->proximo==NULL){

        pessoa *novoValor = new pessoa;
        novoValor->nome="";
        novoValor->rg=0;
        novoValor->proximo=NULL;

        *ponteiroEncadeada = novoValor;
    }else{
        *ponteiroEncadeada = (*ponteiroEncadeada)->proximo;
    }


}

void removeFimEncadeada(pessoa **ponteiroEncadeada){
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    p = *ponteiroEncadeada;

    while(p->proximo != NULL){
        aux=p;
        p=p->proximo;
    }
    aux->proximo=NULL;
}

void removePosicaoEncadeada(pessoa **ponteiroEncadeda,int posicao){
    pessoa *p = *ponteiroEncadeda;

    int cont=0;

    while(cont<=posicao){
        if(cont == posicao-1){
            pessoa *aux = new pessoa;
            aux = p->proximo;
            p->proximo=aux->proximo;

        }
   p = p->proximo;
    cont++;
    }

}

string retornaNomeEncadeada(pessoa **ponteiroEncadeada,int rg){
    string nome="Nao encontrado";
    pessoa *p = *ponteiroEncadeada;

    while(p!=NULL){
        if(p->rg==rg){
            nome = p->nome;
            return nome;
        }
        p=p->proximo;
    }
    return nome;
}

int main(){
    int funcaoDesejada = 1;

    pessoa *ponteiroEncadeada = new pessoa;
    ponteiroEncadeada->nome="";
    ponteiroEncadeada->rg=0;
    ponteiroEncadeada->proximo=NULL;

    /*
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "john";
    novoPrimeiroValor->rg = 13;
    novoPrimeiroValor->proximo = NULL;

    ponteiroEncadeada = novoPrimeiroValor;

    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "johnzin";
    novoSegundoValor->rg = 20;
    novoSegundoValor->proximo = NULL;

    novoPrimeiroValor->proximo = novoSegundoValor;
    */
    while(funcaoDesejada < 10 && funcaoDesejada > 0){
        cout << "Tamanho Atual: " << retornaTamanhoListaEncadeada(ponteiroEncadeada) << "\n";
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";

        if(retornaTamanhoListaEncadeada(ponteiroEncadeada)==0){
            cout<<"\nLista vazia";
        }else{
            imprimeEncadeada(ponteiroEncadeada);
        }


        cout << "\nEscolha um numero e pressione ENTER: \n";
        cin >> funcaoDesejada;

        limpatela();

        string nome;
        int rg,posicao;

        switch(funcaoDesejada){

            case 1:
                cout << "Funcao Escolhida: 1- Insere um node no inicio da lista\n";

                cout<<"Digite o nome: \n";
                cin>>nome;
                cout<<"Digite o RG: \n";
                cin>>rg;
                adcComecoEncadeada(&ponteiroEncadeada,nome,rg);
                break;

            case 2:
                cout << "Funcao Escolhida: Insere um node no fim da lista\n";

                cout<<"Digite o nome: \n";
                cin>>nome;
                cout<<"Digite o RG: \n";
                cin>>rg;

                if(retornaTamanhoListaEncadeada(ponteiroEncadeada)==0){
                    adcComecoEncadeada(&ponteiroEncadeada,nome,rg);
                }else{
                    adcFimEncadeada(ponteiroEncadeada,nome,rg);
                }

                break;

            case 3:
                cout << "Funcao Escolhida: 3 - Insercao de um node na posicao N \n";

                cout<<"Digite a posicao: \n";
                cin>>posicao;
                cout<<"Digite o nome: \n";
                cin>>nome;
                cout<<"Digite o RG: \n";
                cin>>rg;

                if(posicao==0){
                    adcComecoEncadeada(&ponteiroEncadeada,nome,rg);
                }else if(posicao==retornaTamanhoListaEncadeada(ponteiroEncadeada)==-1){
                    adcFimEncadeada(ponteiroEncadeada,nome,rg);
                }else{
                    adcPosicaoEncadeada(ponteiroEncadeada,nome,rg,posicao);
                }
                break;
            case 4:
                cout<<"Funcao Escolhida: 4 - Retirar um node do inicio da lista \n";
                removeInicioEncadeada(&ponteiroEncadeada);
                break;
            case 5:
                cout<<"Funcao Escolhida: 5 - Retirar um node no fim da lista \n";

                if(retornaTamanhoListaEncadeada(ponteiroEncadeada)==1){
                    removeInicioEncadeada(&ponteiroEncadeada);
                }else{
                    removeFimEncadeada(&ponteiroEncadeada);
                }
                break;
            case 6:
                cout<<"Funcao Escolhida: 6 - Retirar um node na posicao N \n";
                cout<<"Digite a posicao: \n";
                cin>>posicao;
                if(posicao==0){
                     removeInicioEncadeada(&ponteiroEncadeada);
                }else if(posicao==retornaTamanhoListaEncadeada(ponteiroEncadeada)-1){
                    removeFimEncadeada(&ponteiroEncadeada);
                }else{
                    removePosicaoEncadeada(&ponteiroEncadeada,posicao);
                }

                break;
            case 7:
                cout<<"Funcao escolhida: 7 - Procurar um node com o campo RG\n";
                cout<<"Digite o RG: ";
                cin>>rg;

                cout<<"O nome do rg: "<<rg<<" eh: "<<retornaNomeEncadeada(&ponteiroEncadeada,rg)<<"\n";
        }
    }

    return 0;
}

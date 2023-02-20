#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 3
#include <new>
#include<string>

using namespace std;

void limpatela(){
    system("CLS");
}

struct pessoa{
    string nome;
    int rg;
};

void imprimesequencial(pessoa *ponteirosequencial,int tamanho){
    for(int i=0;i<tamanho;i++){
        cout<<i<<" - "<<ponteirosequencial[i].nome<<","<<ponteirosequencial[i].rg<<"\n";
    }
}

void adccomecosequencial(pessoa *&ponteirosequencial,int *tamanhodalista, string nome,int rg){
    if(*tamanhodalista==0){
        pessoa *novalistasequencial = new pessoa[1];
        novalistasequencial[0].nome=nome;
        novalistasequencial[0].rg=rg;

        ponteirosequencial= novalistasequencial;
    }else{
        pessoa *novalistasequencial = new pessoa[*tamanhodalista+1];

        novalistasequencial[0].nome=nome;
        novalistasequencial[0].rg=rg;

        for(int i=0;i<*tamanhodalista;i++){
            novalistasequencial[i+1].nome = ponteirosequencial[i].nome;
            novalistasequencial[i+1].rg = ponteirosequencial[i].rg;
        }

        ponteirosequencial= novalistasequencial;


    }
    *tamanhodalista = *tamanhodalista + 1;
}

void adcfimsequencial(pessoa *&ponteirosequencial,int *tamanhodalista,string nome,int rg){
    pessoa *novalistasequencial = new pessoa[*tamanhodalista+1];

    for(int i=0;i<*tamanhodalista;i++){
        novalistasequencial[i].nome = ponteirosequencial[i].nome;
        novalistasequencial[i].rg = ponteirosequencial[i].rg;
    }

    novalistasequencial[*tamanhodalista].nome = nome;
    novalistasequencial[*tamanhodalista].rg = rg;

    ponteirosequencial = novalistasequencial;

    *tamanhodalista = *tamanhodalista + 1;

}

void adcposicaosequencial(pessoa *&ponteirosequencial,int *tamanhodalista,string nome,int rg,int posicao){
    pessoa *novalistasequencial = new pessoa[*tamanhodalista+1];

    for(int i=0;i<posicao;i++){
        novalistasequencial[i].nome = ponteirosequencial[i].nome;
        novalistasequencial[i].rg = ponteirosequencial[i].rg;
    }

    novalistasequencial[posicao].nome=nome;
    novalistasequencial[posicao].rg=rg;

    for(int i=posicao+1;i<*tamanhodalista+1;i++){
        novalistasequencial[i].nome = ponteirosequencial[i-1].nome;
        novalistasequencial[i].rg = ponteirosequencial[i-1].rg;
    }

    ponteirosequencial = novalistasequencial;

    * tamanhodalista = *tamanhodalista +1;
}

void removeiniciosequencial(pessoa *&ponteirosequencial,int *tamanhodalista){
    pessoa *novalistasequencial = new pessoa[*tamanhodalista-1];

    for(int i=1;i<*tamanhodalista;i++){
        novalistasequencial[i-1].nome = ponteirosequencial[i].nome;
        novalistasequencial[i-1].rg = ponteirosequencial[i].rg;
    }

    ponteirosequencial = novalistasequencial;

    * tamanhodalista = *tamanhodalista -1;

}

void removefimsequencial(pessoa *&ponteirosequencial,int *tamanhodalista){
    pessoa *novalistasequencial = new pessoa[*tamanhodalista-1];

    for(int i=1;i<*tamanhodalista-1;i++){
        novalistasequencial[i].nome = ponteirosequencial[i].nome;
        novalistasequencial[i].rg = ponteirosequencial[i].rg;
    }
     ponteirosequencial = novalistasequencial;

    * tamanhodalista = *tamanhodalista -1;
}

void removeposicaosequencial(pessoa *&ponteirosequencial,int *tamanhodalista,int posicao){
    pessoa *novalistasequencial = new pessoa[*tamanhodalista-1];

    for(int i=0;i<*tamanhodalista-1;i++){
        if(i<posicao){
            novalistasequencial[i].nome = ponteirosequencial[i].nome;
            novalistasequencial[i].rg = ponteirosequencial[i].rg;
        }else{
            novalistasequencial[i].nome = ponteirosequencial[i+1].nome;
            novalistasequencial[i].rg = ponteirosequencial[i+1].rg;
        }
    }
    ponteirosequencial = novalistasequencial;

    * tamanhodalista = *tamanhodalista -1;
}

string retornaNomeSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaListaSequencial,int rg,int *posicao){

        //Nome a ser retornado
        string nome = "Nao Encontrado";

        //Passa os elementos da lista antiga para a nova ate o elemento desejado
        int cont;
        for(cont = 0; cont < *tamanhoDaListaSequencial; cont++){

            //Se encontrar alguem com o RG procurado
            if(ponteiroSequencial[cont].rg == rg){

                //Faz uma copia dos elementos ate a posicao
                nome = ponteiroSequencial[cont].nome;

                cout << "Encontrado na Posicao:" << cont <<"\n";

            }
        }

        return nome;

}

void imprimeSequencial(pessoa *ponteiroSequencial,int tamanhoDaListaSequencial) {

   //Cabeçaalho da Lista
   cout << "\nLista: \n";

   //Imprime a lista com separacao de virgulas e indices
   int cont;
   for(cont = 0; cont < tamanhoDaListaSequencial ; cont++)
        cout << cont << " - " << ponteiroSequencial[cont].nome << "," << ponteiroSequencial[cont].rg << "\n";

}

int main(){
    int funcaodesejada = 1;

    pessoa *ponteirosequencial;

    int tamanhodalista  = 0;

    pessoa *exemplolistasequencial = new pessoa[1];
    ponteirosequencial = exemplolistasequencial;

    while(funcaodesejada<10&&funcaodesejada>0){

    imprimesequencial(ponteirosequencial,tamanhodalista);

    cout<<"Operacoes: \n";
    cout<<"1 - Insercao de um node no inicio da lista\n";
    cout<<"2 - Insercao de um node no fim da lista\n";
    cout<<"3 - Insercao de um node na posicao N\n";
    cout<<"4 - Retirar um node no inicio da lista\n";
    cout<<"5 - Retirar um node no fim da lista\n";
    cout<<"6 - Retirar um node na posicao N\n";
    cout<<"7 - Procurar um node no campo RG\n";
    cout<<"8 - Imprimir a lista\n";
    cout<<"9 - Escolha um numero e pressione enter\n";

    cout<<"Escolha uma opcao: ";
    cin>>funcaodesejada;

    limpatela();

    string nome;
    int rg, posicao;

    switch(funcaodesejada){
        case 1:
            cout<<"Funcao escolhida: 1 - Insercao de um node no inicio da lista\n";

            cout<<"Digite um nome: ";
            cin>>nome;
            cout<<"Digite um RG: ";
            cin>>rg;

            adccomecosequencial(ponteirosequencial,&tamanhodalista,nome,rg);
        break;
        case 2:
            cout<<"Funcao escolhida: 2 - Insercao de um node no fim da lista\n";

            cout<<"Digite um nome: ";
            cin>>nome;
            cout<<"Digite um RG: ";
            cin>>rg;

            if(tamanhodalista == 0){
                adccomecosequencial(ponteirosequencial,&tamanhodalista,nome,rg);
            }else{
                adcfimsequencial(ponteirosequencial,&tamanhodalista,nome,rg);
            }

        break;
    case 3:
        cout<<"Funcao escolhida: 3 - Insercao de um node na posicao N\n";

            cout<<"Digite uma posicao: ";
            cin>>posicao;
            cout<<"Digite um nome: ";
            cin>>nome;
            cout<<"Digite um RG: ";
            cin>>rg;


            if(posicao==0){
                adccomecosequencial(ponteirosequencial,&tamanhodalista,nome,rg);
            }else if(posicao==tamanhodalista){
                adcfimsequencial(ponteirosequencial,&tamanhodalista,nome,rg);
            }else{
                adcposicaosequencial(ponteirosequencial,&tamanhodalista,nome,rg,posicao);
            }

        break;

    case 4:
        cout<<"Funcao escolhida: 4 - Retirar um node no inicio da lista\n";
        if(tamanhodalista==0){
            cout<<"Lista vazia\n";
        }else{
            removeiniciosequencial(ponteirosequencial,&tamanhodalista);
        }

        break;

    case 5:
        cout<<"Funcao escolhida: 5 - Retirar um node no fim da lista\n";
        if(tamanhodalista==0){
            cout<<"Lista vazia\n";
        }else{
            removefimsequencial(ponteirosequencial,&tamanhodalista);
        }
    break;
    case 6:
        cout<<"Funcao escolhida: 6 - Retirar um node na posicao N\n";
        if(tamanhodalista==0){
            cout<<"\nLista vazia\n";
        }else{
            cout<<"Digite uma posicao";
            cin>>posicao;
            if(posicao==0){
                removeiniciosequencial(ponteirosequencial,&tamanhodalista);
            }else if(posicao==tamanhodalista-1){
                removefimsequencial(ponteirosequencial,&tamanhodalista);
            }else {
                 removeposicaosequencial(ponteirosequencial,&tamanhodalista,posicao);
            }

        }
        break;
     case 7:

                //Cabeçalho da acao
                cout << "Funcao Escolhida: Retorna o nome e posicao pelo RG \n";

                //Lendo valores do usuario
                cout << "Digite um RG: ";
                cin >> rg;

                //Retorna o nome pelo RG
                cout << "Nome:" << retornaNomeSequencial(ponteirosequencial, &tamanhodalista, rg, &posicao);

                break;
    case 8:

                //Cabeçaalho da acao
                cout << "Funcao Escolhida: Imprime a lista\n";

                imprimeSequencial(ponteirosequencial,tamanhodalista);

                break;
        }
    }
}

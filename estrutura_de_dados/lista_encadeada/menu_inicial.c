#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa{
    char nome[50];
    int rg;
    struct pessoa *proximo;
}pessoa;

void LimparTela(){
    system("CLS");
}

int TamanhoLista(pessoa *ponteiroEncadeada){
    int tamanho;
    if(ponteiroEncadeada->rg == 0){
        return 0;
    }else{
        pessoa *x = ponteiroEncadeada;
        while(x != NULL){
            x = x->proximo;
            tamanho=tamanho+1;
        }
        return tamanho;
    }
}

void ImprimeLista(pessoa *ponteiroEncadeada){
    pessoa *x = ponteiroEncadeada;
    if(x->rg==0){
        printf("A lista esta vazia\n");
    }else{
        while(x != NULL){
            printf("Nome: %srg: %d\n",x->nome,x->rg);
            x=x->proximo;
        }
    }
}

void AdcionaEncadeada(pessoa **ponteiroEncadeada,int rg,char *nome){
    pessoa *novaLista = (pessoa*)malloc(sizeof(pessoa));
    strcpy(novaLista->nome,nome);
    novaLista->rg=rg;
    novaLista->proximo=*ponteiroEncadeada;

    if(TamanhoLista(*ponteiroEncadeada)==0){
        novaLista->proximo=NULL;
    }else{
        novaLista->proximo=*ponteiroEncadeada;
    }
    *ponteiroEncadeada = novaLista;
}

void AdcionaFimEncadeada(pessoa **ponteiroEncadeada,int rg,char *nome){
    pessoa *novaLista = (pessoa*)malloc(sizeof(pessoa));
    strcpy(novaLista->nome,nome);
    novaLista->rg = rg;
    novaLista->proximo = NULL;

    pessoa *x = (*ponteiroEncadeada);

    while(x!=NULL){
        if(x->proximo==(NULL)){
            x->proximo=novaLista;
            return;
        }
        x = x->proximo;
    }

}

void adcPosicaoEncadeada(pessoa *ponteiroEncadeada,char *nome,int rg, int posicao){
    pessoa *novoValor = (pessoa*)malloc(sizeof(pessoa));
    strcpy(novoValor->nome, nome);
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeada;
    int i = 0;

    while(i <= posicao){
        if(i == posicao-1){
            pessoa *aux = (pessoa*)malloc(sizeof(pessoa));
            aux->proximo = p->proximo;

            p->proximo = novoValor;
            novoValor->proximo = aux->proximo;

            free(aux);
        }
        p = p->proximo;
        i++;
    }
}

void RemoveInicio(pessoa **ponteiroEncadeada){
    if((*ponteiroEncadeada)->proximo==NULL){
        pessoa *novaLista = (pessoa*)malloc(sizeof(pessoa));
        strcpy(novaLista->nome,"");
        novaLista->rg=0;
        novaLista->proximo = NULL;

        *ponteiroEncadeada = novaLista;
    }else{
        *ponteiroEncadeada = (*ponteiroEncadeada)->proximo;
    }
}

void RemoveFim(pessoa **ponteiroEncadeada){
    pessoa *p = (pessoa*)malloc(sizeof(pessoa));
    pessoa *aux = (pessoa*)malloc(sizeof(pessoa));

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
            pessoa *aux = (pessoa*)malloc(sizeof(pessoa));
            aux = p->proximo;
            p->proximo=aux->proximo;
        }
    p = p->proximo;
    cont++;
    }

}

void retornaNome(pessoa **ponteiroEncadeada,int rg){
    char nome[50]="Nao encontrado";
    pessoa *p = *ponteiroEncadeada;

    while(p!=NULL){
        if(p->rg==rg){
            strcpy(nome , p->nome);
            printf("Encontrei: %s\n",nome);
            return;
        }
        p=p->proximo;
    }
    printf("perdemo\n");
}

void main(){
        int opcao=0;

        pessoa *ponteiroEncadeada = (pessoa*)malloc(sizeof(pessoa));
        strcpy(ponteiroEncadeada->nome,"");
        ponteiroEncadeada->rg = 0;
        ponteiroEncadeada->proximo = NULL;

        while(opcao<10 && opcao>-1){
            ImprimeLista(ponteiroEncadeada);
            printf("Tamanho: %d\n",TamanhoLista(ponteiroEncadeada));
            printf("Operacoes \n");
            printf("1 - Insercao de um node no inicio da lista \n");
            printf("2 - Insercao de um node no fim da lista \n");
            printf("3 - Insercao de um node na posicao N \n");
            printf("4 - Retirar um node do inicio da lista \n");
            printf("5 - Retirar um node no fim da lista \n");
            printf("6 - Retirar um node na posicao N \n");
            printf("7 - Procurar um node com o campo RG \n");
            printf("8 - Imprimir a Lista. \n");
            printf("9 - Sair do sistema. \n");

            printf("Escolha uma opcao: ");
            scanf("%d",&opcao);

            LimparTela();

            int rg,posicao;
            char nome[50];

            switch(opcao){
                case 1:
                    printf("Opcao escolhida: 1 - Insercao de um node no inicio da lista \n");
                    printf("Digite o nome: ");
                    setbuf(stdin,0);
                    fgets(nome,255,stdin);

                    printf("Digite o RG: ");
                    scanf("%d",&rg);

                    AdcionaEncadeada(&ponteiroEncadeada,rg,nome);
                break;
                case 2:
                    printf("Opcao escolhida: 2 - Insercao de um node no fim da lista \n");
                    printf("Digite o nome: ");
                    setbuf(stdin,0);
                    fgets(nome,255,stdin);

                    printf("Digite o RG: ");
                    scanf("%d",&rg);

                    if(TamanhoLista(ponteiroEncadeada)==0){
                        AdcionaEncadeada(&ponteiroEncadeada,rg,nome);
                    }else{
                        AdcionaFimEncadeada(&ponteiroEncadeada,rg,nome);
                    }
                break;
                case 3:
                    printf("Opcao escolhida: 3 - Insercao de um node na posicao N \n");

                    printf("Digite a posicao: ");
                    scanf("%d",&posicao);

                    printf("Digite o nome: ");
                    setbuf(stdin,0);
                    fgets(nome,255,stdin);

                    printf("Digite o RG: ");
                    scanf("%d",&rg);

                    if(TamanhoLista(ponteiroEncadeada)==0){
                        AdcionaEncadeada(&ponteiroEncadeada,rg,nome);
                    }else{
                        adcPosicaoEncadeada(ponteiroEncadeada,nome,rg,posicao);
                    }
                break;
                case 4:
                    printf("Opcao escolhida: 4 - Retirar um node do inicio da lista \n");
                    RemoveInicio(&ponteiroEncadeada);
                break;
                case 5:
                    printf("Opcao escolhida: 5 - Retirar um node no fim da lista \n");
                    if(TamanhoLista(ponteiroEncadeada)==1){
                        RemoveInicio(&ponteiroEncadeada);
                    }else{
                         RemoveFim(&ponteiroEncadeada);
                    }
                break;
                case 6:
                    printf("Opcao escolhida: 6 - Retirar um node na posicao N \n");
                    printf("Digite a posicao: ");
                    scanf("%d",&posicao);
                    if(posicao==0){
                        RemoveInicio(&ponteiroEncadeada);
                    }else if(posicao==TamanhoLista(ponteiroEncadeada)-1){
                        RemoveFim(&ponteiroEncadeada);
                    }else{
                         removePosicaoEncadeada(&ponteiroEncadeada,posicao);
                    }
                    break;
                case 7:
                    printf("Opcao escolhida: 7 - Procurar um node com o campo RG \n");
                    printf("Digite o RG: ");
                    scanf("%d",&rg);

                    retornaNome(&ponteiroEncadeada,rg);
            }
        }


}

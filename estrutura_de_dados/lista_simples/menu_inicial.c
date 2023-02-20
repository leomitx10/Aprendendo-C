#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rg;
    char nome[50];
} pessoa;

void limpatela(){
    system("CLS");
}

void imprimir(int tamanhodalista,pessoa *lista){
    for (int i = 0; i < tamanhodalista; i++) {
        printf("%d - RG: %d, nome: %s", i,lista[i].rg,lista[i].nome);
    }
}

void inserir_inicio(pessoa **lista, int rg, char *nome, int *tamanhodalista) {
    if(*tamanhodalista == 0){
        pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista+1) *sizeof(pessoa));
        nova_lista[0].rg = rg;
        strcpy(nova_lista[0].nome,nome);

        free(*lista);
        *lista = nova_lista;
        (*tamanhodalista)++;
    }else{
        // Alocando mem�ria para um novo elemento
        pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista + 1) *sizeof(pessoa));

        // Inserindo a nova pessoa no in�cio da lista
        nova_lista[0].rg = rg;
        strcpy(nova_lista[0].nome,nome);

        // Movendo as pessoas para a direita
        for (int i=0;i<*tamanhodalista;i++) {
            nova_lista[i+1] = (*lista)[i];
        }

        // Liberando a mem�ria da lista original
        free(*lista);

        // Atualizando a lista original e o tamanho
        *lista = nova_lista;
        (*tamanhodalista)++;
    }
}

void inserir_final(pessoa **lista, int rg, char *nome, int *tamanhodalista){
    if(*tamanhodalista == 0){
        pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista+1) *sizeof(pessoa));
        nova_lista[0].rg = rg;
        strcpy(nova_lista[0].nome,nome);

        free(*lista);
        *lista = nova_lista;

        }else{

            pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista + 1) *sizeof(pessoa));

            for (int i=0;i<*tamanhodalista;i++) {
                nova_lista[i] = (*lista)[i];
            }

            nova_lista[*tamanhodalista].rg = rg;
            strcpy(nova_lista[*tamanhodalista].nome,nome);

            free(*lista);

            *lista = nova_lista;

    }(*tamanhodalista)++;

}

void inserir_posicao(pessoa **lista, int rg, char *nome, int *tamanhodalista,int posicao){
    pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista+1) *sizeof(pessoa));

    for (int i=0;i<posicao;i++) {
                nova_lista[i] = (*lista)[i];
            }
    nova_lista[posicao].rg = rg;
    strcpy(nova_lista[posicao].nome,nome);

    for(int i=posicao+1;i<*tamanhodalista+1;i++){
        nova_lista[i] = (*lista)[i-1];
    }

    free(*lista);
    *lista = nova_lista;

    (*tamanhodalista)++;

}

void retira_inicio(pessoa **lista, int *tamanhodalista){
    pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista-1) *sizeof(pessoa));

    for(int i=1;i<*tamanhodalista;i++){
        nova_lista[i-1] = (*lista)[i];
    }

    *lista = nova_lista;

    *tamanhodalista = *tamanhodalista -1;
}

void retira_fim(pessoa **lista, int *tamanhodalista){
     pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista-1) *sizeof(pessoa));

    for(int i=0; i<*tamanhodalista-1; i++){
        nova_lista[i] = (*lista)[i];
    }

    *lista = nova_lista;

    *tamanhodalista = *tamanhodalista -1;
}

void retira_posicao(pessoa **lista, int *tamanhodalista,int posicao){
    pessoa *nova_lista = (pessoa *) malloc((*tamanhodalista-1) *sizeof(pessoa));

    for(int i=0;i<*tamanhodalista-1;i++){
        if(i<posicao){
            nova_lista[i] = (*lista)[i];
        }else{
            nova_lista[i] = (*lista)[i+1];
        }
    }

    *lista = nova_lista;
    *tamanhodalista = *tamanhodalista -1;
}

void pesquisa(pessoa **lista, int *tamanhodalista,int rg){
    for(int i=0;i<*tamanhodalista;i++){
        if((*lista)[i].rg == rg){
                printf("Encontrado na Posicao: %d\n",i);

            }
    }
}

int main() {
    pessoa *lista = NULL; // Declaracao da lista sequencial (vetor)
    int tamanhodalista = 0;       // Tamanho atual da lista sequencial
    int opcao = 0;

    int rg,posicao;
    char nome[35];

    while(opcao < 10 && opcao > -1){

        imprimir(tamanhodalista,lista);

        printf("Operacoes: \n");
        printf("1 - Insercao de um node no inicio da lista\n");
        printf("2 - Insercao de um node no fim da lista\n");
        printf("3 - Insercao de um node na posicao N\n");
        printf("4 - Retirar um node no inicio da lista\n");
        printf("5 - Retirar um node no fim da lista\n");
        printf("6 - Retirar um node na posicao N\n");
        printf("7 - Procurar um node no campo RG\n");


        printf("Escolha uma opcao: ");
        scanf("%d",&opcao);

        limpatela();

        switch(opcao){
        case 1:
            printf("Escolheu: 1 - Insercao de um node no inicio da lista\n");
            printf("Digite o nome: ");
            setbuf(stdin, 0);
            fgets(nome, 255, stdin);
            printf("Digite o RG: ");
            scanf("%d",&rg);
            inserir_inicio(&lista,rg,nome,&tamanhodalista);
            break;
            free(lista);
        case 2:
            printf("Escolheu: 2 - Insercao de um node no fim da lista\n");
            printf("Digite o nome: ");
            setbuf(stdin, 0);
            fgets(nome, 255, stdin);
            printf("Digite o RG: ");
            scanf("%d",&rg);
            inserir_final(&lista,rg,nome,&tamanhodalista);
            break;
        case 3:
            printf("Escolheu: 3 - Insercao de um node na posicao N\n");
            printf("Digite a posicao: ");
            scanf("%d",&posicao);

            printf("Digite o nome: ");
            setbuf(stdin, 0);
            fgets(nome, 255, stdin);

            printf("Digite o RG: ");
            scanf("%d",&rg);
            inserir_posicao(&lista,rg,nome,&tamanhodalista,posicao);
            break;
        case 4:
            printf("Escolheu: 4 - Retirar um node no inicio da lista!!\n");
            if(tamanhodalista==0){
                printf("A lista esta vazia\n");
            }else{
                retira_inicio(&lista,&tamanhodalista);
            }
        case 5:
            printf("Escolheu: 5 - Retirar um node no fim da lista\n");
            if(tamanhodalista==0){
                printf("A lista esta vazia\n");
            }else{
                retira_fim(&lista,&tamanhodalista);
            }
        case 6:
            printf("Escolheu: 6 - Retirar um node na posicao N\n");
            if(tamanhodalista==0){
                printf("A lista esta vazia\n");
            }else{
                printf("Digite uma posicao: ");
                scanf("%d",&posicao);
                retira_posicao(&lista,&tamanhodalista,posicao);
            }
        case 7:
            printf("Escolheu: 7 - Procurar um node no campo RG\n");
            if(tamanhodalista==0){
                printf("A lista esta vazia\n");
            }else{
                printf("Digite um rg: ");
                scanf("%d",&rg);
                pesquisa(&lista,&tamanhodalista,rg);
            }

        }


    }
    free(lista);
}


#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa {
    int valor;
    struct Caixa* prox;
}caixa;

void Exibe(struct caixa * caixa){
    struct Caixa * aux = caixa; 
    while(aux){
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL");
}

int main(){
        caixa * c1 = (caixa *) malloc(sizeof(caixa));
        caixa * c2 = (caixa *) malloc(sizeof(caixa));
        caixa * c3 = (caixa *) malloc(sizeof(caixa));
        caixa * c4 = (caixa *) malloc(sizeof(caixa));
        caixa * c5 = (caixa *) malloc(sizeof(caixa));

        c1->valor = 1;
        c1->prox = c2;
        c2->valor = 3;
        c2->prox = c3;
        c3->valor = 9;
        c4->prox = c4;
        c5->valor = 7;
        c5->prox = NULL;
}

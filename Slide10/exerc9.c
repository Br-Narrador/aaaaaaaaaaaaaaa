#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa {
    int valor;
    struct Caixa* prox;
}caixa;

struct Caixa * Insere(struct Caixa * cabeca, int valor){
	caixa * novo = malloc(sizeof(caixa));
    novo->valor = valor;
    novo->prox = cabeca;
	cabeca = novo;
	return cabeca;
}

void Exibe(struct Caixa * caixa){
	struct Caixa * aux = caixa;
	while(aux){
		printf("%d -> ", aux->valor);
		aux = aux->prox;
	}
	printf("NULL \n");
}

int main(){
    caixa * cabeca = NULL;
    int valor  = 0;
    while(scanf("%d", &valor)){
        if(valor == -1){
            break;
        }
        cabeca = Insere(cabeca, valor);
    }
    Exibe(cabeca);
}
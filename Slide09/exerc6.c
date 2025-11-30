#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};


struct Caixa * Insere(struct Caixa * cabeca, struct Caixa * novo, int nValor){
	struct Caixa * aux = cabeca;
    novo->valor = nValor;
    novo->prox = NULL;
    
    if(cabeca == NULL || nValor < cabeca->valor){
        novo->prox = cabeca;
        return novo;
    }

    while (aux->prox && aux->prox->valor < nValor){ 
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    aux->prox = novo;
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
	struct Caixa c1, c2, c3, c4, c5, c6;
	c1.valor = 1; c1.prox = &c2;
	c2.valor = 2; c2.prox = &c3;
	c3.valor = 3; c3.prox = &c4;
	c4.valor = 5; c4.prox = &c5;
	c5.valor = 6; c5.prox = NULL;

	struct Caixa * cabeca = &c1;
	Exibe(cabeca);

	cabeca = Insere(cabeca, &c6, 4);

	Exibe(cabeca);

	
    return 0;
}

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void Remove(struct Caixa ** caixa, int index){
	int j = 0;
	struct Caixa * aux = * caixa;
	while(aux){
		if(j == index-1){
			aux->prox = aux->prox->prox;
			break;
		}
		aux = aux->prox;
		j++;
	}
}

void Insere(struct Caixa ** cabeca, struct Caixa * novo){
	novo->prox = *cabeca;
	*cabeca = novo;
}

void Exibe(struct Caixa * caixa){
	struct Caixa * aux = caixa;
	while(aux){
		printf("%d\n", aux->valor);
		aux = aux->prox;
	}
}

int main(){
	struct Caixa c1, c2, c3, c4, c5;
	c1.valor = 1; c1.prox = &c2;
	c2.valor = 3; c2.prox = &c3;
	c3.valor = 9; c3.prox = &c4;
	c4.valor = 7; c4.prox = &c5;
	c5.valor = 5; c5.prox = NULL;
	struct Caixa * cabeca = &c1;
	Remove(&cabeca, 2);
	Insere(&cabeca, &c3);
	Exibe(cabeca);
    return 0;
}


#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

struct Caixa * Remove(struct Caixa * cabeca, int quero){
	int j = 0;
	struct Caixa * ant = NULL;
	struct Caixa * atual = cabeca;
	while(atual){
		if(atual->valor == quero){
			if(ant == NULL){
				struct Caixa * novaC = atual->prox;
				atual->prox = NULL;
				return novaC;
			}
			else{
			ant->prox = atual->prox;
			atual->prox = NULL;
			return cabeca;
			}
		}
		ant = atual;
		atual = atual->prox;
	}
	return cabeca;
}

int Contem(struct Caixa * cabeca, int quero){
	struct Caixa * aux = cabeca;
	while(aux){
		if(aux->valor == quero){
			return quero;
		}
		aux = aux->prox;
	}
	return -1;	
}

void Insere(struct Caixa ** cabeca, struct Caixa * novo){
	novo->prox = *cabeca;
	*cabeca = novo;
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
	struct Caixa c1, c2, c3, c4, c5;
	c1.valor = 1; c1.prox = &c2;
	c2.valor = 3; c2.prox = &c3;
	c3.valor = 9; c3.prox = &c4;
	c4.valor = 7; c4.prox = &c5;
	c5.valor = 5; c5.prox = NULL;

	struct Caixa * cabeca = &c1;
	Exibe(cabeca);

	cabeca = Remove(cabeca, 9);

	Insere(&cabeca, &c3);

	Exibe(cabeca);

	
    return 0;
}

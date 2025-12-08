#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa {
    int valor;
    struct Caixa* prox;
}caixa;

struct Caixa * Remove(struct Caixa * caixa, int valor){
	struct Caixa * ant = NULL;
	struct Caixa * aux = caixa;
	if(caixa->valor == valor){
		caixa = caixa->prox;
		return caixa;
	}
	while(aux)
	{
		if(aux->valor == valor){
			ant->prox = aux->prox;
			aux->prox = NULL; 
			break;
		}
		ant = aux;
		aux = aux->prox;
	}
	return caixa;
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

struct Caixa * Insere(struct Caixa * cabeca, struct Caixa * novo){
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
	printf("NULL\n");
}


int main(){
        caixa * c1 = malloc(sizeof(caixa));
        caixa * c2 = malloc(sizeof(caixa));
        caixa * c3 = malloc(sizeof(caixa));
        caixa * c4 = malloc(sizeof(caixa));
        caixa * c5 = malloc(sizeof(caixa));

		c1->valor = 1;
        c1->prox = c2;
        c2->valor = 3;
        c2->prox = c3;
        c3->valor = 9;
		c3->prox = c4;
		c4->valor = 5;
        c4->prox = c5;
        c5->valor = 7;
        c5->prox = NULL;

		struct Caixa * cabeca = c1;

		Exibe(cabeca);
		if(Contem(cabeca, 5) != -1) cabeca = Remove(cabeca, 5); 
		Exibe(cabeca);

		free(c1);free(c2);free(c3);free(c4);free(c5);
}

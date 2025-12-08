#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa {
    int valor;
    struct Caixa* prox;
}caixa;

void Exibe(struct Caixa * caixa){
	struct Caixa * aux = caixa;
	while(aux){
		printf("%d -> ", aux->valor);
		aux = aux->prox;
	}
	printf("NULL \n");
}
int retira(struct Caixa * cabeca, int quero){
	struct Caixa * aux = cabeca;
    struct Caixa * ant = NULL;
	if(cabeca->valor == quero || cabeca == NULL){
		return 0;
	}
	while(aux)
	{
		if(aux->valor == quero){
			ant->prox = aux->prox;
			aux->prox = NULL; 
			return 1;
		}
		ant = aux;
		aux = aux->prox;
	}	
    return 0;
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
    retira(cabeca, 5);
	Exibe(cabeca);

	free(c1);free(c2);free(c3);free(c4);free(c5);
}

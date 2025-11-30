#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};


struct Caixa * ConcatenaL(struct Caixa * C1, struct Caixa * C2){
    struct Caixa * C3 = C1;
    if(C1 == NULL) return C2;
    else if(C2 == NULL) return C1;

    struct Caixa * p = C3;
    while(p->prox){
        p = p->prox;
    }
    p->prox = C2;
    struct Caixa * atual = C3;
    
    while(atual){
        struct Caixa * corredor = atual->prox;
        struct Caixa * antCorre = atual;
        while(corredor){
            if(atual->valor == corredor->valor){
                    antCorre->prox = corredor->prox;
                    corredor = antCorre->prox; 
                }
            
            else{
                antCorre = corredor;
                corredor = corredor->prox;
            }
        }
        atual = atual->prox;
    }
    return C3;
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
	c3.valor = 3; c3.prox = NULL;
    struct Caixa * cabeca1 = &c1;
	c4.valor = 1; c4.prox = &c5;
	c5.valor = 2; c5.prox = NULL;

	struct Caixa * cabeca2 = &c4;
	Exibe(cabeca1);

    Exibe(cabeca2);

    struct Caixa * cabeca3 = ConcatenaL(cabeca1, cabeca2);

	Exibe(cabeca3);

	
    return 0;
}
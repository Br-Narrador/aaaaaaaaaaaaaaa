#include <stdio.h>
#include <string.h>

int main(void){
	char ganhador[10];
	char perdedor[10];
	int maxPontos = 0, minPontos = 0;
	struct Time {
		char nome[10];
		int vit;	
		int lose;
		int draw;
		int pontos;
	};
	int cancelar = 0;
	while (cancelar != 1)	{
		struct Time timeTemp;
		printf("nome do time:\n ");
		scanf("%s", timeTemp.nome);
		printf("vitorias:\n ");
		scanf("%d", &timeTemp.vit);
		printf("perdas:\n ");
		scanf("%d", &timeTemp.lose);
		printf("empates:\n ");
		scanf("%d", &timeTemp.draw);
		timeTemp.pontos += timeTemp.vit*3;
		timeTemp.pontos += timeTemp.draw;
		printf("total de pontos: %d\n", timeTemp.pontos );
		if (timeTemp.pontos > maxPontos){
			strcpy(perdedor, ganhador);
			strcpy(ganhador, timeTemp.nome);
		}
		else if (minPontos == 0){
			strcpy(perdedor, timeTemp.nome);		
					}
		else if (timeTemp.pontos < minPontos)	{
			strcpy(perdedor, timeTemp.nome);
							}
		printf("cancelar?(0 para nao, 1 para sim)\n");
		scanf("%d", &cancelar);
		timeTemp.pontos = 0;
					} 
	printf("%s\n", ganhador);
	printf("%s\n", perdedor);
}

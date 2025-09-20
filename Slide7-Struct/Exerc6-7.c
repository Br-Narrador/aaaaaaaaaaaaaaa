#include<stdio.h>
struct personagem{
  char[10] nome;
  int eliminacoes;
  int mortes;
  int vit;
  int def;
}
void formatar(struct persona)
{
  printf("O jogador: %s\n", persona.nome);
  printf("Possui uma taxa de eliminacoes por morte igual a: %d/%d\n", persona.eliminacoes, persona.mortes);
  printf("Alem disso, ele possui %d vitorias e %d derrotas\n", persona.vit, persona.def);
}
void preenche(struct* pesona){
  printf("Nome do jogador: ");
  scanf("%s", persona.nome);
  printf("Quantas eliminacoes? E quantas mortes?");
  scanf("%d %d", persona.eliminaceos, persona.mortes);
  printf("Quantas vitorias? E quantas derrotas?");
  scanf("%d %d", persona.vit, persona.def);
}
int main(){
  struct personagem player;
  preenche(&player);
  formatar(player);
  return 0;
}

#include<stdio.h>
struct personagem{
  char nome;
  int eliminacoes;
  int mortes;
  int vit;
  int def;
};
void formatar(struct personagem persona)
{
  printf("\nO jogador: %c\n", persona.nome);
  printf("Possui uma taxa de eliminacoes por morte igual a: %d/%d\n", persona.eliminacoes, persona.mortes);
  printf("Alem disso, ele possui %d vitorias e %d derrotas\n", persona.vit, persona.def);
}
void preenche(struct personagem* persona){
  printf("Nome do jogador: ");
  scanf("%c", &persona -> nome);
  printf("Quantas eliminacoes? E quantas mortes?");
  scanf("%d %d", &persona -> eliminacoes, 
  &persona-> mortes);
  printf("Quantas vitorias? E quantas derrotas?");
  scanf("%d %d", &persona -> vit, &persona -> def);
}
int main(){
  struct personagem player;
  preenche(&player);
  struct personagem player2;
  preenche(&player2);
  struct personagem player3;
  preenche(&player3);
  formatar(player);
  formatar(player2);
  formatar(player3);
  return 0;
}

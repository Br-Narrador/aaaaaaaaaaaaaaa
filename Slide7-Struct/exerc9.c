#include<stdio.h>
struct Ponto{
  int x;
  int y;
};
struct Personagem
{
  int id;
  struct Ponto ponto;
  int pontuacao;
};
int main()
{
  struct Personagem personagens[10];
  for(int i = 0; i < 10; i++)
    {
      personagens[i].id = i;
      scanf("%d",&personagens[i].ponto.x);
      scanf("%d",&personagens[i].ponto.y);
      scanf("%d",&personagens[i].pontuacao);
    }
}

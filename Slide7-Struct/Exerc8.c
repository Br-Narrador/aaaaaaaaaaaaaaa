#include<stdio.h>
#include<math.h>
struct Ponto
{
  int x;
  int y;
};
void RetornaPonto(struct Ponto pontos[])
{
  int ponto[1];
  int maisDistante; int maiorDist = 0;
  for(int i = 0; i < 10; i++)
  {
    int dist = sqrt((pontos[i].x)*(pontos[i].x) + (pontos[i].y)*(pontos[i].y));
    if(dist >= maiorDist)
    {
      maiorDist = dist;
      ponto[0] = pontos[i].x;
      ponto[1] = pontos[i].y;
    }
  }
  printf("O ponto mais distante da origem foi: (%d, %d)\n", ponto[0], ponto[1]);
}
int main()
{
  struct Ponto pontos[10];
  for(int i = 0; i < 10; i++)
    {
      scanf("%d %d",pontos[i].x , pontos[i].y);
    }
  RetornaPonto(pontos);
}

#include<stdio.h>
struct Ponto{
  int x;
  int y;
};
struct Personagem
{
  int id;
  struct Ponto ponto;
};
void DesenhaMapa(int matriz[][10], int linhas, struct Personagem personagens[])
{
    for(int k = 0; k < 10; k++)
    {
        matriz[personagens[k].ponto.y][personagens[k].ponto.x] = personagens[k].id;
    }
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < 10; j++)
            {
                if(matriz[i][j] == 0 && i !=0 && j != 0)
            {
                printf("  ");
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
    printf("\n");
    }
}
void CriaMapa(struct Personagem personagens[])
{
    int k = 0;
    int matriz[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
          {
            if(i == 0)
            {
              matriz[i][j] = j;
            }
            else if(j == 0)
            {
              matriz[i][j] = i;
            }
            else
            {
                matriz[i][j] = 0;
            }
          }
      
    }
  DesenhaMapa(matriz, 10, personagens);
}

int main()
{
  struct Personagem personagens[10];
  for(int i = 0; i < 10; i++)
    {
      personagens[i].id = i+1;
      scanf("%d %d",&personagens[i].ponto.x, &personagens[i].ponto.y);
    }
    
  CriaMapa(personagens);
}

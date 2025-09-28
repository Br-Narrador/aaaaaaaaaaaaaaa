#include<stdio.h>
typedef union Ponto
{
  struct
  {
    int x;
    int y;
    int z;
  };
  int vetor[3];
}Ponto;
int main()
{
  Ponto pt;
  pt.vetor[0] = 1;
  pt.vetor[1] = 2;
  pt.vetor[2] = 3;
  printf("(%d,%d,%d)\n", pt.x, pt.y, pt.z);
}

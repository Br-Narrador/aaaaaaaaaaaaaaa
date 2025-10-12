#include<stdio.h>
void main(void)
{
  struct Personagem{
  int forca;
  int energia;
  int experiencia;
  };
  struct Personagem p1;
  p1.forca = 20; p1.energia = 50; p1.experiencia = 30;
  struct Personagem p2 = {18, 20, 25};

}

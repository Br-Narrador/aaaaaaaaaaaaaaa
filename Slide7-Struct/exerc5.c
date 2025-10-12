#include<stdio.h>
struct pontos{
  int x; int y; int z;
} Ponto;
int main()
{
  Ponto v1 = {1,0,5};
  Ponto v2 = {3,3,3};
  Ponto v3 = {0,10,0};
  printf("%d %d %d\n", v1.y, v2.y,v3.y);
  v1.z += 10;
  v2.z += 10;
  v3.z += 10;
  printf("%d %d %d\n", v1.x, v2.y, v3.z);
  return 0;
}

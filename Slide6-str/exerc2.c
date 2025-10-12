#include<stdio.h>
void Concatena(char* d, char* o1, char* o2)
{ 
  int n = 0;
  n = Tamanho(o1) + Tamanho(o2);
  for(int i = 0; i < n; i++)
    {
       if(i<Tamanho(o1))
       {
         d[i] = o1[i]
       }
      else
       {
         d[i] = o2[i]
       }
    }
}
int Tamanho(char* str)
{
  int tamanho = 0;
  while(str[tamanho] != '\0')
    {
      tamanho += 1;
    }
  return tamanho;
}
int main()
{
  char result[100]; char o1[100]; char o2[100];
  
  scanf("%s", o1);
  scanf("%s", o2);
  Concatena(result, o1, o2);
}

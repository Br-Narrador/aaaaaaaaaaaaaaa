#include<stdio.h>
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
  char string[100];
  scanf("%s", &string);
  printf("%d", Tamanho(string));
}

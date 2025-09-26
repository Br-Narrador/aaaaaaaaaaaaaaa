#include<stdio.h>
typedef union Cidadao{
  int cpf;
  int rg;
  char nome[50];
}carinha;
int main()
{
  union carinha cara;
  int opcao;
  printf("Qual voce deseja usar? 1 = cpf, 2 = rg, 3 = nome")
  scanf("%d", &opcao);
  switch(opcao)
    {
    case 1:
      printf("Fala teu cpf: ");
      scanf("%d", &cara.cpf);
    case 2:
      printf("Fala teu rg: ");
      scanf("%d", &cara.rg);
    case 2:
      printf("Fala teu nome: ");
      scanf("%s", cara.nome);
    default:
      printf("ta errado isso ai")
    }
  return 0;
}

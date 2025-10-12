#include<stdio.h>
typedef enum 
{
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado,
  Domingo
}Dia;
const char* nomeDia[] = {
    "Segunda","Terca", "Quarta", "Quinta",
    "Sexta", "Sabado", "Domingo"
};
char* Nome(Dia* dia)
{  
  int opcao;
  printf("Qual o dia da semana?\n (0 = segunda, 1 = terca, 2 = quarta, 3 = quinta, 4 = sexta, 5 = sabado, 6 = domingo)\n");
  scanf("%d", &opcao);
  *dia = (Dia)opcao;
  return nomeDia[*dia];
}

int main()
{
  Dia dia;
  printf("%s\n", Nome(&dia));
  return 0;
}

#include<stdio.h>
#include<string.h>
enum Iden
{
  iReal,
  iDol,
  iEuro
};
union Moeda
{
  float dol;
  float real;
  float euro;
};
struct Juncao
{
  enum Iden iden;
  union Moeda moeda;
};
void Exibe (struct Juncao* juncao, float valor)
{
  float resultado;
  char nomeMoeda[10];
  switch(juncao -> iden)
    {
      case iDol:
        resultado = valor*5;
        juncao -> moeda.dol = resultado;
        strcpy(nomeMoeda, "Dol");
        break;
      case iReal:
        resultado = valor;
        juncao->moeda.real = resultado;
        strcpy(nomeMoeda, "Real");
        break;
      case iEuro:
        resultado = valor*6;
        juncao -> moeda.euro = resultado;
        strcpy(nomeMoeda, "Euro");
        break;
      default:
        printf("QUE????????");
    }
  printf("A moeda usada foi: %s\n", nomeMoeda);
  printf("O preço foi: %.2f\n", resultado);
  
}
void Altera(struct Juncao* juncao, float valor)
{
  int opcao;
  printf("\nQual a moeda usada? 0 = real, 1 = dol, 2 = euro\n");
  scanf("%d", &opcao);
  if(opcao == iDol || opcao == iReal || opcao == iEuro){
    juncao -> iden = (enum Iden)opcao;
  }
  Exibe(juncao, valor);
}

int main()
{ 
  int opcao;
  float preco = 10;
  struct Juncao juncao;
  printf("Qual a moeda usada? 0 = real, 1 = dol, 2 = euro\n");
  scanf("%d", &opcao);
  if(opcao == iDol || opcao == iReal || opcao == iEuro){
    juncao.iden = (enum Iden)opcao;
  }
  Exibe(&juncao, preco);
  Altera(&juncao, preco);
  return 0;
}

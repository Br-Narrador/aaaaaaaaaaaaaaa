#include<stdio.h>
#include<string.h>
typedef struct Anfibio{
  int numeroPatas;
  int espessuraPele;
  int cauda;
} Anfibio;
typedef struct Aves{
  int compBico;
  int autoVoo;
  int faixaCanto;
}Aves;
typedef struct Mamiferos{
  int qntDente;
  int volCer;
  int vel;
}Mamiferos;
typedef struct Repteis{
  int venenoso;
  int autoAgua;
  int espessuraOvo;
}Repteis;
typedef enum Identificador
{
  iReptil,
  iMamifero,
  iAve,
  iAnfibio
}Iden;
typedef union Animal
{
  Repteis reptil;
  Mamiferos mamifero;
  Aves ave;
  Anfibio anfibio;
} Animal;
typedef struct AnimalIden
{
  Iden iden;
  Animal propriedades;
}AnimalIden;
void Preencher(AnimalIden* animal, int opcao)
{
  animal -> iden = (Iden)opcao;
  switch(animal -> iden){
    case iReptil:
      printf("\nDados para um Reptil: \nEsse reptil é venenoso? (1 = Verdade, 0 = Falso)\n");
      scanf("%d", &(animal -> propriedades.reptil.venenoso));
      printf("Quanto tempo ele consegue ficar submerso? (Em minutos)\n");
      scanf("%d", &(animal -> propriedades.reptil.autoAgua));
      printf("Qual a espessura de seus ovos? (Em Milimetros)\n");
      scanf("%d", &(animal -> propriedades.reptil.venenoso));
      return;
    case iMamifero:
      printf("\nDados para um mamifero: \nQuantos dentes ele tem?\n");
      scanf("%d", &(animal -> propriedades.mamifero.qntDente));
      printf("Qual o volume do seu cerebro? (Em Centimetro cubicos) \n");
      scanf("%d", &(animal -> propriedades.mamifero.volCer));
      printf("Qual sua velocidade? (Em km/h)\n");
      scanf("%d", &(animal -> propriedades.mamifero.vel));
      return;
    case iAve:
      printf("\nDados para uma ave: \nQual o cumprimento do seu bico? (Em Centimetros)\n");
      scanf("%d", &(animal -> propriedades.ave.compBico));
      printf("Quanto tempo ele consegue ficar no ar? (Em minutos)\n");
      scanf("%d", &(animal -> propriedades.ave.autoVoo));
      printf("Frequencia do canto da ave: (Em Hertz)\n");
      scanf("%d", &(animal -> propriedades.reptil.venenoso));
      return;
    case iAnfibio:
      printf("\nDados para um anfibio: \nQuantas patas ele tem?\n");
      scanf("%d", &(animal -> propriedades.anfibio.numeroPatas));
      printf("Qual a espessura de sua pele? (Em Milimetros)\n");
      scanf("%d", &(animal -> propriedades.anfibio.espessuraPele));
      printf("Ele tem cauda? (1 = Verdade, 0 = Falso)\n");
      scanf("%d", &(animal -> propriedades.anfibio.cauda));
      return;
    default:
      printf("\nTa errado isso, nao?\n");
      return;
  }
}
int main()
{
  AnimalIden animais[6];
  for(int i = 0; i < 6; i++)
    {
        int opcao = 0;
        printf("\nEscolha o tipo do animal:\n(0 = Reptil, 1 = Mamifero, 2 = Ave, 3 = Anfibio)\n");
        scanf("%d", &opcao);
        Preencher (&animais[i], opcao);
    }
}

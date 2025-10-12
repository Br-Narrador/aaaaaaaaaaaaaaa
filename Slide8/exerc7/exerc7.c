#include <stdio.h>
#include <string.h>

struct Pes
{
    int idade;
    char nome[64];
    int peso;
};
typedef struct Pes P;

void PreencheP(P *pes, int qtd);
void SalvaP(P *pes, int qtd, FILE *f);
void LeP(int qtd, const char *nomearq);

int main()
{
    const char *nomearq= "arq.bin";
    FILE *f = fopen(nomearq, "wb");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    P pessoas[10];
    int qtd = 2;

    PreencheP(pessoas, qtd);
    SalvaP(pessoas, qtd, f);
    fclose(f);
    LeP(qtd, nomearq);
    return 0;
}

void PreencheP(P *pes, int qtd)
{
    for(int i = 0; i < qtd; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &pes[i].idade);
        getchar();

        printf("Digite o nome: ");
        fgets(pes[i].nome, 64, stdin);
        pes[i].nome[strcspn(pes[i].nome, "\n")] = 0;

        printf("Digite o peso: ");
        scanf("%d", &pes[i].peso);
        getchar();
    }
}
void LeP(int qtd,const char *nomearq)
{
    FILE *f = fopen(nomearq, "rb");
    if(!f) printf("Falha ao ler o arq");
    P temp;
    for(int i = 0; i < qtd; i++)
    {    
        fread(&temp, sizeof(P), 1, f);
        printf("Pessoa %d: Idade=%d, Nome=\"%s\", Peso=%d\n",
               i+1, temp.idade, temp.nome, temp.peso);
    }
    fclose(f);
}
void SalvaP(P *pes, int qtd, FILE *f)
{
        fwrite(pes, sizeof(P), qtd, f);
}
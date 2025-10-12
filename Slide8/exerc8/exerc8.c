#include <stdio.h>
#include <string.h>

struct Pes
{
    int idade;
    int peso;
    char nome[64];
};
typedef struct Pes P;

void PreencheP(P *pes);
void SalvaP(P *pes, FILE *f);
void LeP(int qtd, const char *nomearq);

int main()
{
    const char *nomearq= "arq.bin";
    FILE *f = fopen(nomearq, "wb");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    P pessoa;
    int qtd = 2;
    for(int i = 0; i < qtd; i++)
    {
        PreencheP(&pessoa);
        SalvaP(&pessoa, f);
    }
    fclose(f);
    LeP(qtd, nomearq);
    return 0;
}

void PreencheP(P *pes)
{
    
        printf("Digite a idade: ");
        scanf("%d", &pes->idade);
        getchar();

        printf("Digite o nome: ");
        fgets(pes -> nome, 64, stdin);
        pes -> nome[strcspn(pes -> nome, "\n")] = 0;

        printf("Digite o peso: ");
        scanf("%d", &pes -> peso);
        getchar();
    
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
void SalvaP(P *pes, FILE *f)
{
        fwrite(pes, sizeof(P), 1, f);
}

#include <stdio.h>
#include <string.h>

void EscrevaString(FILE *f, char *str);
int main()
{
    char pal[25];
    FILE *f = fopen("arq.txt","wb");
    scanf("%24s", pal);
    EscrevaString(f, pal);
    fclose(f);
    return 0;
}
void EscrevaString(FILE *f, char *str)
{
    int tamanho = strlen(str);
    for(int i = 0; i < tamanho; i++)
    {
        fputc(str[i], f);
    }
}
#include <stdio.h>
#include <string.h>

int main()
{
    char pal[25];
    FILE* f = fopen("arq.txt","w");
    scanf("%s", pal);
    int tamanho = strlen(pal);
    for(int i = 0; i < tamanho; i++)
    {
        fputc(pal[i], f);
    }
    fclose(f);
    return 0;
}
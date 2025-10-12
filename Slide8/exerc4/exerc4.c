#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][25];
    FILE* f = fopen("arq.txt", "w");
    for(int i = 0; i < 10; i++)
    {
        scanf("%24[^\n]", str[i]);
        getchar();
        int tam = strlen(str[i]);
        for(int j = 0; j < tam; j++)
        {
            fputc(str[i][j],f);
        }
        if(i!=9)
        {
        fputc('\n', f);
        }
    }
    fclose(f);
    return 0;   
}
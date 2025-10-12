#include <stdio.h>
#include <string.h>

void EscreveString(FILE *f, char str[][25]);
int main()
{
    char str[10][25];
    FILE* f = fopen("arq2.txt", "w");
    if(f == NULL)
    {
        printf("F");
        return 1;
    }
    EscreveString(f, str);
    fclose(f);
    return 0;   
}
void EscreveString(FILE *f, char str[][25]){
    for(int i = 0; i < 10; i++)
    {
        int result = scanf("%24[^\n]", str[i]);
        getchar();
        if(result != 1)
        {
            break;
        }
        int tam = strlen(str[i]);
        for(int j = 0; j < tam; j++)
        {
            fputc(str[i][j] ,f);
        }
        if(i<9)
        {
        fputc('\n', f);
        }
    }
}
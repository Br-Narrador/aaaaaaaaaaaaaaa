#include <stdio.h>
#include <string.h>

int main(){
    char c[25];
    int i = 0, aux;
    FILE* f = fopen("../exerc1/arq.txt", "r");
    if(f == NULL)
    {
        printf("nao");
    }
    aux = fgetc(f);
    while(aux != -1)
    {
        c[i] = (char)aux;
        i++;
        aux = fgetc(f);
    }
    c[i] = '\0';
    printf("%s", c);
    fclose(f);
    return 0;
}
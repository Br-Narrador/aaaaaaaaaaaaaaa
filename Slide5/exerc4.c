#include<stdio.h>
void Troca(int* a, int* b);
void main(){
int x = 10; int y = 20;
        Troca(&x,&y);
        printf("%d, %d\n", x, y);
}
void Troca(int* a, int* b)
{
        int aux = *a;
        *a = *b;
        *b = aux;
}

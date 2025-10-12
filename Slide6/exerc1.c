#include<stdio.h>
void preenche(int* xs, int n);
int media(int* xs, int n);
int main()
{
        int vector[100]; int n;
        scanf("%d", &n);
        preenche(vector, n);
        printf("%d",media(vector, n));
}
void preenche(int* xs, int n)
{       
        for(int i =0; i < n; i++)
        {
                int num;
                scanf("%d", &num);
                *(xs+i) = num;
        }
}
int media(int* xs, int n)
{
        int soma = 0;
        for(int i = 0; i < n; i++)
        {
                soma += *(xs+i);
        }
        return soma/n;
}





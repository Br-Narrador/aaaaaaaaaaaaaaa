#include<stdio.h>
void preenche (int arr[100][100], int l, int c)
{
        for (int i = 0; i < l; i++)
        {
                for(int j = 0; j < c; j++)
                {
                        scanf("%d", &arr[i][j]);
                }
        }
}

float media(int arr[100][100], int l, int c)
{
        float soma;
        for (int i = 0; i < l; i++)
                {
                        for(int j = 0; j < c; j++)
                        {
                                soma += arr[i][j];
                        }
                }
        return soma/(l*c);

}

int main()
{
        int arr[100][100];
        int l; int c;
        scanf("%d", &l);
        scanf("%d", &c);
        preenche(arr, l, c);
        printf("%f", media(arr, l, c));
}

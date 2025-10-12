#include<stdio.h>
#include<math.h>
int ehPrimo(int num);
void todosPrimos(int num);
void main(void)
{
        int num = 0;
        printf("Numero: ");
        scanf("%d", &num);
        if(ehPrimo(num) == 1)
        {
                printf("é primo\n");
        }
        else
        {
                printf("nao é primo\n");
        }
        todosPrimos(num);
}

int ehPrimo(int num)
{
        for(int i = 2; i <= sqrt(num); i++)
        {
                if(num % i == 0)
                {
                        return 0;
                }
        }
        return 1;
}
void todosPrimos(int num)
{
        printf("os numeros entre 1 e %d\n são: ", num);
        for (int i = 2; i < num; i++)
        {
                if(ehPrimo(i) == 1)
                { 
                        printf("%d ", i);
                }
        }
}

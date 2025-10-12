#include<stdio.h>
int main()
{
        int vet[5]; int index;
        for(int i = 0; i < 5; i ++)
        {
                scanf("%d", vet+i);
        }
        scanf("%d", &index);
        *(vet+index) = 0;
        for(int i = index; i < 4; i++)
        {
                int aux = *(vet+i+1);
                *(vet+i+1) = *(vet+i);
                *(vet+i) = aux;
        }
        for(int i = 0; i < 5; i ++)
        {
                printf("| %d ", *(vet+i));
        }
}

#include<stdio.h>

int main()
{
        short int size = 10, temp[size], media = 0, overMedia = 0;
        for(int i = 0; i < size; i++)
        {
                scanf("%hd", &temp[i]);
                media+=temp[i];
        }
        printf("Media: %hd\n", media/size);
        for(int i = 0; i < size; i++)
        {
                printf("temp: %hd\n", temp[i]);
                temp[i] > media/size ? overMedia +=1: 0;
        }
        printf("Acima da media: %hd\n]", overMedia);
        return 0;
}

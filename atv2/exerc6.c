#include <stdio.h>
#include <string.h>

int main(void){
    int n, soma = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n ;i++){
        soma += i*i;
    }   
    printf("%d\n", soma);
    return 0;
}

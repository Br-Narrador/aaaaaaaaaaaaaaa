#include <stdio.h>
int main() {
    int preco;
    printf("Digite o preco do produto: ");
    scanf("%i", &preco);
    preco*3.17 > 1000 ? printf("mal negocio\n") : printf("bom negocio\n");
}

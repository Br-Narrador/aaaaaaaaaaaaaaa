#include <stdio.h>
int main() {
    int veloc;
    printf("Digite a velocidade do carro: ");
    scanf("%d", &veloc);
    if (veloc*1.6 > 100) {
        printf("devagar camarada\n");
    } 
    else if(veloc*1.6 < 80) {
        printf("acelera\n");
    }
    else {
        printf("mantem\n");
    }
}

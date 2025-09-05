#include <stdio.h>
int main() {
    int n,sum = 0;
    while (n != 0)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum: %d\n", sum);
    return 0;
}

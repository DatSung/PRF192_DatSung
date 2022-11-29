#include <stdio.h>

int main() {
    int num, i, sum = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n%d", sum);
}
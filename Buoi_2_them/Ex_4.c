#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    for (i = 1; i <= 10; i++)
    {   
        scanf("%d", &num);
        sum += num;
    }
    printf("\n%d", sum);
}
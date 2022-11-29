#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j;

    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("%d x %d = %d\n", j, i, j * i);
        }
    }
}
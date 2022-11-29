#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("Number is : %d and cube of the %d is : %f\n", i, i, pow(i,3));
    }
}
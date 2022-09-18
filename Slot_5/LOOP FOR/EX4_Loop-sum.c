#include <stdio.h>

int main() {
    int number_A, number_B, sum_AtoB = 0;

    printf("Please enter two numbers to caculate: ");
    scanf("%d %d", &number_A, &number_B);

    for (int i = number_A; i <= number_B; i++)
    {
        sum_AtoB += i;
    }

    printf("The sum of number %d to number %d is: %d\n", number_A, number_B, sum_AtoB);

}
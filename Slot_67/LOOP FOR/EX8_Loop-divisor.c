#include <stdio.h>

int main() {
    int number_N, sum_Nn = 0;
    int i;

    printf("Please enter a number to count: ");
    scanf("%d", &number_N);

    printf("The divisor numbers of %d is: ", number_N);

    for (i = 0; i <= number_N; i++)
    {
        if (number_N % i == 0)
        {
            printf("%d ", i);
            sum_Nn += i;
        }  
    }

    printf("\n Sum of divisor numbers is: %d\n", sum_Nn);
    
}
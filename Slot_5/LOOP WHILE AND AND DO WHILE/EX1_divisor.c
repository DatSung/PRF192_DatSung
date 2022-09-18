#include <stdio.h>
int main() {
    int  number_N_clone, number_N, sum_divisors = 0;

    printf("Please enter a number to count: ");
    scanf("%d", &number_N);
    number_N_clone = number_N;

    while (number_N <= 12 && number_N >= 0)
    {
        if (number_N_clone % number_N == 0)
        {
            sum_divisors += 1;
        }
        number_N -= 1;
    }

    printf("%d\n", sum_divisors);
    
}
#include <stdio.h>

int main() {

    int number_N, sum_odd_N = 0;
    
    printf("Please enter a number to count: ");
    scanf("%d", &number_N);

    for (int i = 0; i <= number_N; i++)
    {
        if (i % 2 != 0)
        {
            sum_odd_N += i;
        }
    }

    printf("The sum result of %d is: %d\n", number_N, sum_odd_N);
    
}
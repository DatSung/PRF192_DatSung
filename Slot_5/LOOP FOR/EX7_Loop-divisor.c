#include <stdio.h>

int main() {
    int number_N;

    printf("Please enter a number to count: ");
    scanf("%d", &number_N);

    printf("The divisor numbers of %d is: ", number_N);

    for (int i = 0; i <= number_N; i++)
    {
        if (number_N % i == 0)
        {
            printf("%d ", i);
        }  
    }
    
}
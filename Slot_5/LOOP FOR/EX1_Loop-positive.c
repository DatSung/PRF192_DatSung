#include <stdio.h>

int main() {
    int number_N;
    int i;

    printf("Please enter a number to count: ");

    do
    {
        scanf("%d", &number_N);
        if (number_N < 0)
        {
            printf("Please enter again: ");
        }
        
    } while (number_N < 0);
    
    printf("The string of numbers is: ");
    for (i = 1; i <= number_N; i++)
    {
        printf("%d ", i);
    }
}
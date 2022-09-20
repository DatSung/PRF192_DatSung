#include <stdio.h>

int main() {
    int number_N, number_N_clone;
    const int level_number = 100;

    printf("Please enter a number to count: ");

    scanf("%d", &number_N);   
    printf("Enter again: ");

    number_N_clone = number_N;

    printf("The string of numbers mod 2 equal to 0 is (While): ");

    while (number_N <= level_number)
    {   
        if (number_N % 2 == 0)
        {
            printf("%d ", number_N);
        }
        number_N += 1;
    }
    
    printf("\n");
    printf("The string of numbers mod 2 equal to 0 is (Do_While): ");

    do
    {
        if (number_N_clone % 2 == 0)
        {
            printf("%d ", number_N_clone);
        }
        number_N_clone += 1;

    } while (number_N_clone <= level_number);

}
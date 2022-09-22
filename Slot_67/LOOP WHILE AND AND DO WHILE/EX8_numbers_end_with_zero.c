#include <stdio.h>

int main() {
    int i = 1, number_N;


    printf("Please enter a number to caculate: ");
    scanf("%d", &number_N);
    printf("The sting of numbers divisible by 10 is: ");

    do
    {
        if (i % 10 == 0)
        {
            printf("%d ", i);
        }
        i += 1; 

    } while (i <= number_N);
    
} 
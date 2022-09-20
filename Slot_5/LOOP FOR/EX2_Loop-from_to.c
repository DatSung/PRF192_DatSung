#include <stdio.h>

int main() {
    
    int number_A, number_B;
    int i;
    
    printf("Please enter two numbers to count: ");
    scanf("%d %d", &number_A, &number_B);

    printf("The string of number %d to number %d is: ", number_A, number_B);

    for (i = number_A; i <= number_B; i++)
    {
        printf("%d ", i);
    }
    
}
#include <stdio.h>

int main() {
    int number_N;
    
    printf("Please enter a number to count: ");
    scanf("%d", &number_N);
    
    printf("The string of number is: ");

    for (int i = -number_N; i <= number_N; i++)
    { 
        printf("%d ", i);
    }
    
}
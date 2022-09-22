#include <stdio.h>

int main() {
    int number_N;
    int i;
    
    printf("Please enter a number to count: ");
    scanf("%d", &number_N);
    
    printf("The string of number is: ");

    for (i = number_N; i >= -number_N; i--)
    { 
        printf("%d ", i);
    }
    
}
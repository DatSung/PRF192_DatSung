#include <stdio.h>

int main() {
    int i;
    int stringNumbers[255];
    int numbers_count, sum = 0;

    printf("Please enter a number to get string: ");
    scanf("%d", &numbers_count);

    for (i = 0; i < numbers_count; i++)
    {
        scanf("%d", &stringNumbers[i]);
    }

    for (i = 0; i < numbers_count; i++)
    {
        sum += stringNumbers[i];
    }
    
    printf("The sum of string is: %d", sum);
}
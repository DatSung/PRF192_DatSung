#include <stdio.h>

int main() {
    int number_N, number_Count;

    printf("Please enter a numbers of string: ");
    scanf("%d", &number_N);
    printf("Please enter a number to count: ");
    scanf("%d", &number_Count);

    printf("Even choose numbers is: ");

    for (int i = 1; i <= number_N ; i++)
    {
        
        if (i % 2 == 0)
        {
            printf("%d ", i);
            number_Count--;
        }

        if (number_Count == 0)
        {
            break;
        }
            
    }

}
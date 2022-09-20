#include <stdio.h>

int main() {
    int number_A, multi_A = 1;
    int i;

    printf("Please enter a numbers to caculate: ");
    scanf("%d", &number_A);

    for (i = 1; i <= number_A; i++)
    {
        multi_A *= i;
    }

    printf("The multi of number %d to number is: %d\n", number_A, multi_A);

}
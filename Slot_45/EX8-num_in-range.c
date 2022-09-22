#include <stdio.h>

int main() {
    int number;

    printf("Please enter a number to know it's in range [10;100] or not: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 100) {
        printf("The number %d is in range [10;100]\n", number);
    } else {
        printf("The number %d is not in range [10;100]\n", number);
    }

}
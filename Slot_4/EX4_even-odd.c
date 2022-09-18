#include <stdio.h>

int main() {

    int number;

    printf("Please enter a number to know it's  even or odd: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is Even.\n", number);
    } else { 
        printf("The number %d is Odd.\n", number);
    }

}
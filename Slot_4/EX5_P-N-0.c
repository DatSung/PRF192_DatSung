#include <stdio.h>

int main() {
    int number;

    printf("Please enter a number to know it's P or N or 0: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number %d is a positive number.\n", number);
    } else  if (number < 0) {
        printf("The number %d is a negative number.\n", number);
    } else {
        printf("The number %d is equal to zero.\n", number);
    }
    
}
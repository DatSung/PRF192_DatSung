#include <stdio.h>

int main() {
    int number_A, Sum_A = 0;

    do
    {

    printf("Enter your first number: ");
    scanf("%d", &number_A);
    printf("Sum: %d\n",Sum_A += number_A);

    } while (number_A != 0);
    
}
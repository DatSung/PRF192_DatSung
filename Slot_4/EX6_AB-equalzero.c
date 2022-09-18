#include <stdio.h>

int main() {
    int number_A, number_B;

    printf("Please enter two number A and B to caculate: ");
    scanf("%d %d", &number_A, &number_B);

    if (number_A != 0 && number_B != 0) {
        printf("Number %d and Number %d are not equal to zero.", number_A, number_B);
    } else if (number_A == 0 || number_B == 0) {
        printf("Number %d or Number %d equal to zero", number_A, number_B);
    }
    
}
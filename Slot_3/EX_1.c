#include <stdio.h>

int main() {
    int num_A, num_B, sum_AB;
    printf("Enter num_A: ");
    scanf("%d", &num_A);
    printf("Enter num_B: ");
    scanf("%d", &num_B);
    sum_AB = num_A + num_B;
    printf("Sum of num_A and num_B: %d", sum_AB);
}
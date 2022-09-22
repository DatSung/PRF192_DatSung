#include <stdio.h>

int main() {

    int number_A, number_B, sum_AtoB = 0;
    int i;

    printf("Please enter two numbers to caculate: ");
    scanf("%d %d", &number_A, &number_B); 

    printf("The string of numbers mod 3 = 0 is : ");

    for (i = number_A; i <= number_B; i++)
    {
        if (i % 3 == 0)
        {   
            printf("%d ", i);
            sum_AtoB += i;
        }
    }

    printf("\n");
    
    printf("The sum number mod 3 equal 0 from %d to %d is: %d\n", number_A, number_B, sum_AtoB);
    
}
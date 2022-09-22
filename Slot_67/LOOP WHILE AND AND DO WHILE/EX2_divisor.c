#include <stdio.h>
int main() {
    int  key_control ,number_N_clone, number_N, sum_divisors = 0;

    printf("Please enter a number to count: ");
    scanf("%d", &number_N);
    number_N_clone = number_N;

    printf("Press (1) to use While, press (2) to use Do While: ");
    scanf("%d", &key_control);

    if (key_control == 1)
    {
        while (number_N <= number_N_clone && number_N >= 0)
        {
            if (number_N_clone % number_N == 0)
            {
                sum_divisors += 1;
                printf("%d \n", number_N);
            }
            number_N -= 1;
        }
    }

    if (key_control == 2)
    {
        do
        {
            if (number_N_clone % number_N == 0)
            {
                sum_divisors += 1;
                printf("%d \n", number_N);
            }
            number_N -= 1;
        } while (number_N <= number_N_clone && number_N >= 0);
        
    }
    
    printf("The sum of divisor numbers is: %d\n", sum_divisors);
    
}
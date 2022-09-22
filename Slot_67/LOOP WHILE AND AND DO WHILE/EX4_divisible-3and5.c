#include <stdio.h>

int main() {

    int key_control, number_A, number_B;
    
    printf("Please enter two numbers to caculate: ");
    scanf("%d %d", &number_A, &number_B);

    printf("Press (1) to use While, press (2) to use Do While: ");
    scanf("%d", &key_control);

    printf("The string of number from %d to %d divisible by 3 and 5 is: ", number_A, number_B);

    if (key_control == 1)
    {
        while (number_A < number_B)
        {
            if (number_A % 3 == 0 && number_A % 5 == 0)
            {
                printf("%d ", number_A);
            }
            number_A += 1;
        }
        
    }

    if (key_control == 2)
    {
        do
        {
            if (number_A % 3 == 0 && number_A % 5 == 0)
            {
                printf("%d ", number_A);
            }
            number_A += 1;
        } while (number_A < number_B);
        
    }
    
}
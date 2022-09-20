#include <stdio.h>

int main() {

    int key_control, number_A, exponent_number, exponent_number_clone;
    double exponential_result = 1;

    printf("Please enter the number: ");
    scanf("%d", &number_A);
    printf("please enter the exponent of the number: ");
    scanf("%d", &exponent_number);

    exponent_number_clone = exponent_number;

    if (exponent_number > 0)
    {
        printf("Press (1) to use While, press (2) to use Do While: ");
        scanf("%d", &key_control);

        if (key_control == 1)
        {   
            while (exponent_number <= exponent_number_clone && exponent_number >= 1)
            {
                exponential_result *= number_A;
                exponent_number -= 1;
            }
        
        }

        if (key_control == 2)
        {
            do
            {
                exponential_result *= number_A;
                exponent_number -= 1;
            } while (exponent_number <= exponent_number_clone && exponent_number >= 1);
        
        }
    }

    if (exponent_number_clone == 0)
    {
        if (number_A > 0)
        {
            exponential_result = 1;
        } else if (number_A < 0)
        {
            exponential_result = -1;
        } else
        {
            printf("Indeterminate\n");
        }
        
    }

    if (exponent_number_clone < 0)
    {   
        exponent_number = -exponent_number;
        exponent_number_clone = exponent_number;
        printf("Press (1) to use While, press (2) to use Do While: ");
        scanf("%d", &key_control);

        if (key_control == 1)
        {   
            while (exponent_number <= exponent_number_clone && exponent_number >= 1)
            {
                exponential_result *= number_A;
                exponent_number -= 1;
            }
        }

        if (key_control == 2)
        {
            do
            {
                exponential_result *= number_A;
                exponent_number -= 1;
            } while (exponent_number <= exponent_number_clone && exponent_number >= 1);
        
        }

        exponential_result = 1 / exponential_result;
    }
        
    printf("The result of is: %lf\n", exponential_result);

}
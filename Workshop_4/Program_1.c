#include <stdio.h>
#include <math.h>

int primeChecker();
int max();
int min();


// MAIN FUNCTION
int main() {

    int key_control;
    int number_check;
    
    printf("Please choos your options: \n");
    printf("(1) Check prime number\n");
    printf("(2) Find min and max of many numbers\n");

    scanf("%d", &key_control);
    
    switch (key_control)
    {
    case 1: 
        
        printf("You choose check prime number\n");
        printf("PLease enter a number to check: ");
        scanf("%d", &number_check);

        if (primeChecker(number_check) == 1)
        {
            printf("The number is a prime number\n");
        } else
        {
            printf("The number is not a prime number\n");
        }

        break;

    case 2:

        printf("You choose find min and max of many numbers");
        printf("Please enter the number: \n");
        scanf("%d", &number_check);

        printf("The max number is: %d\n", max(number_check));




    default:
        break;
    }

}

// MAX NUMBER CHECKER FUNCTION
int max(int number_check){
    
    int number_mod_A, number_mod_B, result;

    do
    {       
        number_mod_A = number_check % 10;
        number_check = number_check / 10;
        number_mod_B = number_check % 10;
        number_check = number_check / 10;

        if (number_mod_A > number_mod_B)
        {
            result = number_mod_A;

        } else if (number_mod_A < number_mod_B)
        {
            result = number_mod_B;

        } else
        {
            result = number_mod_A;
        }

    } while (number_check != 0);

    return result;        

}

// MIN NUMBER CHECKER FUNCTION
int min(int number_A, int number_B) {
    
    if (number_A < number_B)
    {
        return number_A;

    } else if (number_B < number_A)
    {
        return number_B;

    } else
    {
        return number_A;
    }
    
}

// PRIME CHECKER FUNCTION
int primeChecker(int number_check) {

    int halfnumber = sqrt(number_check);
    int i;

    if (number_check < 2)
    {
        return 0;
    }
    for (i = 2; i <= halfnumber; i++)
    {
        if (number_check % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}
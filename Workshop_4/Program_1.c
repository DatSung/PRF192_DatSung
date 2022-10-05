#include <stdio.h>
#include <math.h>

int primeChecker();
int max();
int min();


// MAIN FUNCTION
int main() {

    int key_control = 0;
    int number_check = 0;
    
    printf("Please choos your options: \n");
    printf("(1) Check prime number\n");
    printf("(2) Find min and max of many numbers\n");
    printf("Press any key except 1 and 2 to quit\n");

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

        printf("You choose find min and max of many numbers\n");
        printf("Please enter the number: ");
        scanf("%d", &number_check);

        printf("The max number is: %d\n", max(number_check));

        printf("The min number is : %d\n", min(number_check));

    default:
        printf("QUIT\n");
        break;
    }

}

// MAX NUMBER CHECKER FUNCTION
int max(int number_check) {
    
    int max_Number = 0;

    
    while (number_check > 0)
    {       
        if (max_Number < (number_check % 10))
        {
            max_Number = (number_check % 10);
        }
        
        number_check = number_check / 10;
        printf("%d\n", number_check % 10);

        if (max_Number < (number_check % 10))
        {
            max_Number = number_check % 10;
        }
        
        number_check = number_check / 10;
        printf("%d\n", number_check % 10);

    }

    return max_Number;        

}

// MIN NUMBER CHECKER FUNCTION
int min(int number_check) {
    
    int min_Number = (number_check % 10);
    
    while (number_check > 0)
    {       
        if (min_Number > (number_check % 10))
        {
            min_Number = number_check % 10;
        }

        number_check = number_check / 10;
        printf("%d\n", number_check % 10);

        if ( (min_Number > (number_check % 10)) && (number_check / 10 != 0) )
        {
            min_Number = number_check % 10;
        }
            
        number_check = number_check / 10;
        printf("%d\n", number_check % 10);

    }

    return min_Number;        

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
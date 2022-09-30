#include <stdio.h>
#include <math.h>

int checkPrime();
void printPrime();

// MAIN PROGRAM
int main() {
    int number_enter;

    printf("Enter a number: ");
    scanf("%d", &number_enter);

    printPrime(checkPrime(number_enter));

    getchar();
    return 0;
}

int checkPrime(int number_check) {

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

void printPrime(int number_print) {

    if (number_print == 0)
    {
        printf("The number is not  prime number.\n");
    } else
    {
        printf("The number is prime number.\n");
    }
       
}
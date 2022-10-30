#include <stdio.h>
#include <math.h> 

int primeChecker();

int main() {

    int num_enter;

    printf("Please enter a prime number: ");
    scanf("%d", &num_enter);
    
    if (primeChecker(num_enter) == 1)
    {
        printf("%X", num_enter);
    } 
    else
    {
        printf("%d is not a prime number.", num_enter);
    }
}

int primeChecker(int num_enter) {

    int halfnumber = sqrt(num_enter);
    int i;

    if (num_enter < 2)
    {
        return 0;
    }
    for (i = 2; i <= halfnumber; i++)
    {
        if (num_enter % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

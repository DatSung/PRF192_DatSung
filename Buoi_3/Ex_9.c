#include <stdio.h>

void perfectNumber(int number) {
    int S, i;
    for(i = 1; i <=number-1; i++)
    {
        if(number%i==0)
        {
            S+=i;
        }
    }
    if(S==number)
    {
        printf("%d is a perfect number",number);
    } else
    {
        printf("%d is not a perfect number",number);
    }
}

int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    perfectNumber(number);
}
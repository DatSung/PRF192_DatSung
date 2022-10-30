#include <stdio.h>

void palindromesChecker();

int main() {
    int num_enter;

    scanf("%d", &num_enter);
    palindromesChecker(num_enter);
}

void palindromesChecker(int num_enter) {

    int num_enter_clone, i, ram, sum;
    
    sum = 0;
    num_enter_clone = num_enter;

    while (num_enter_clone > 0)
    {
        ram = num_enter_clone % 10;
        sum = (sum * 10) + ram;
        num_enter_clone = num_enter_clone / 10;
    }   

    if (num_enter == sum)
    {
        printf("%d is a palindrome number.", num_enter);
    } 
    else
    {
        printf("%d is not a palindrome number.", num_enter);
    }     
}
#include <stdio.h>

int sumDigits();

int main() {

    int n, sum;

    do
    {
        scanf("%d", &n);
        
        if (n >= 0)
        {
            
            printf("%d\n", sumDigits(n));
        }
        
    } while (n >= 0);
    
}

int sumDigits(int n_enter) {

    int sum = 0, remainder;

    do
    {
        remainder = n_enter % 10;

        n_enter = n_enter / 10;
        
        sum += remainder;

    } while (n_enter > 0);
    
    return sum;
}
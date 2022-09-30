#include <stdio.h>

int fibona_check();

int main() {
    int n;

    printf("Please enter a number to know that belong in Fibonacci or not: ");
    scanf("%d", &n);

    if (fibona_check(n) == 1)
    {
        printf("The number is belong to Fibonacci");
        
    } else
    {
        printf("The number is not belong to Fibonacci");
    }
    
    

}

int fibona_check(int n_enter) {

    int t1 = 1, t2 = 1, f = 1;

    if (n_enter == 1)
    {
        return 1;

    }

    while (f < n_enter)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;

        if (n_enter == f)
        {
            return 1;
        }

    }

    return 0;

}
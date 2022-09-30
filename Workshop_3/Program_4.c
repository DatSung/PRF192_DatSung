#include <stdio.h>

int factoria_caculate();

int main() {

    int n;
    
    printf("Please enter a number to caculate factorial: ");
    scanf("%d", &n);
    printf("%d", factoria_caculate(n));

}

int factoria_caculate(int n_enter) {
    
    int i, multiply = 1;

    for (i = 2; i <= n_enter; i++)
    {
        multiply *= i;
    }

    return multiply;

}
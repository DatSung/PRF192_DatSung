#include <stdio.h>

double fibo();

int main() {

    int n;

    printf("Enter a number to print out Fibonacci: ");
    scanf("%d", &n);

    printf("%lf", fibo(n));

    getchar();
    return 0;
}

double fibo(int n_enter) {

    int t1 = 1, t2 = 1, f = 1, i;   

    for (i = 3; i <= n_enter; i++)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
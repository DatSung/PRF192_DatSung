#include <stdio.h>
int gcd(int a, int b) {
    while(a != b) {
        if(a>b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int lcm(int a, int b) {
    return a*b/gcd(a,b);
}

int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %d", lcm(a, b));

    getchar(); getchar();
}

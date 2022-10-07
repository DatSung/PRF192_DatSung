#include <stdio.h>
int main() {
    double a, b;
    printf("Integer Part = ");
    scanf("%lf", &a);
    printf("Fraction Part = ");
    scanf("%lf", &b);

    while (b > 1) {
        b = b * 0.1;   
    } 
    double fullNumber = a + b;
    printf("%lf", fullNumber);
    
    getchar(); getchar();
}
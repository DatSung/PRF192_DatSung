#include <stdio.h>

double square();

int main() {
    int num;
    scanf("%d", &num);
    printf("%.2f", square(num));
}

double square(int num) {
    double result;
    result = num * num;
    return result;
}

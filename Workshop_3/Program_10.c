#include <stdio.h>
void findMaxMin(int n) {
    int remainder, min, max;
    remainder = n % 10;
    n = n / 10;
    min = max = remainder;
    while(n>0) {
        remainder = n % 10;
        n = n / 10;
        if(min > remainder) min = remainder;
        if(max < remainder) max = remainder;
    }
    printf("Lowest Number = %d, Highest Number = %d", min, max);
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    findMaxMin(n);
    getchar(); getchar();
}
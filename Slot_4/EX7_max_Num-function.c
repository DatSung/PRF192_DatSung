#include <stdio.h>

int maxNumber(int a, int b) {
    return(a >= b) ? a : b;
}
int main() {
    int x, y, z, resultMaxNumber;

    printf("Please enter three numbers to know which ones is the biggest: ");
    scanf("%d %d %d", &x, &y, &z);

    resultMaxNumber = maxNumber(x, maxNumber(y, z));
    printf("The biggest number is: %d\n", resultMaxNumber);
    getchar();
    return 0;
}
#include <stdio.h>


int main() {
    int x, y, z, resultMaxNumber;

    printf("Please enter three numbers to know which ones is the biggest: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {
        resultMaxNumber = x;
    } else if (y >= z) {
        resultMaxNumber = y;
    } else {
        resultMaxNumber = z;
    }
    
    
    printf("The biggest number is: %d\n", resultMaxNumber);
    getchar();
    return 0;
}
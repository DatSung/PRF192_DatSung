#include <stdio.h>

void checkOddEven();

int main() {
    int num;
    scanf("%d", &num);
    checkOddEven(num);  
}

void checkOddEven(int num) {
   if (num % 2 == 0)
   {
        printf("%d is Even", num);
   } else
   {
        printf("%d is Odd", num);
   }
}

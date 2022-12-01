#include <stdio.h>

double functionEx_6();

int main() {
    int num;
    printf("Enter number ");
    scanf("%d", &num);
    printf("%.2f", functionEx_6(num));
}   

double functionEx_6(int num) {
   int i, j;
   double rec, result;
   rec = 1;
   result = 0;
   for (i = 1; i <= num; i++)
   {    
        for (j = 1; j <= i; j++)
        {   
            rec *= j;
        }
        result += rec/i;
        rec = 1;
   }
    return result;
}

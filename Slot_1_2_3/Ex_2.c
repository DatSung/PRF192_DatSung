#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    const int x = 51;

    if (num > x)
    {
        printf("%d", (num - x)*3); 
    } else
        printf("%d", x - num);
}
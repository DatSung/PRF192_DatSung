#include <stdio.h>

void printNum();

int main() {
    int num;
    scanf("%d", &num);
    printNum(num);
}

void printNum(int num) {
    int i;
    for (i = 0; i <= num; i++)
    {
        printf("%d ", i);
    }    
}
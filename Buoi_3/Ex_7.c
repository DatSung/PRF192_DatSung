#include <stdio.h>

void convert();

int main() {
    int num;
    scanf("%d", &num);
    convert(num);
}
void convert(int num) {
    
    if (num > 1) {
        convert(num / 2);
    }     
    printf("%d", num % 2);
}
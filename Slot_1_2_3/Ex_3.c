#include <stdio.h>

int main() {
    int num_a, num_b;

    scanf("%d", &num_a);
    scanf("%d", &num_b);

    if ((num_a == 30 || num_b == 30) || (num_a + num_b == 30))
    {
        printf("True");
    } 
}
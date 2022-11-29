#include <stdio.h>

int main() {
    int num_a, num_b;

    scanf("%d", &num_a);
    scanf("%d", &num_b);
    
    if (num_a == num_b)
    {
        printf("%d", num_a  * 3);
    } else
    {
        printf("%d", num_a + num_b);
    }
} 
#include <stdio.h>
#include <stdlib.h> 

int main() {

    int *ptr, num_enter, i, square;
    square = 1;

    printf("Please enter amount of number: ");
    scanf("%d", &num_enter);

    ptr = (int *) malloc(num_enter * sizeof(int));

    for (i = 0; i < num_enter; i++)
    {
        scanf("%d", ptr + i);
    }
    
    for (i = 0; i < num_enter; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            square = square * *(ptr + i);
        }
    }

    printf("%d", square);
}
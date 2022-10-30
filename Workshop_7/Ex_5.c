#include <stdio.h>

int arr[];

int main() {
    int i, num_count, max;
    
    printf("Please enter number of string: ");
    scanf("%d", &num_count);

    for (i = 0; i < num_count; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < num_count - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (int j = 1; j < num_count; j++)
            {
                if (arr[i] > arr[j])
                {
                    max = arr[i];
                }
            }
        }
    }
    printf(" Max even number in array is: %d", max);
}

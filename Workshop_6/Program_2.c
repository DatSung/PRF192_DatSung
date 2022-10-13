#include <stdio.h>


int main() {
    int string_Number[255];
    int i, j, num_count, max, min;

    printf("Enter a number digit in string to find min and max: ");
    scanf("%d", &num_count);
    printf("Enter a string: ");

    for (i = 0; i < num_count; i++)
    {   
        scanf("%d", &string_Number[i]);
    }  


    // Find Min & Max
    max = string_Number[0], min = string_Number[0];

    for (i = 1; i < num_count; i++)
    {   
        // Find Max
        if (max < string_Number[i])    
        {
            max = string_Number[i];   
        } 
    
        // Find Min    
        if (string_Number[i] < min)
        {
            min = string_Number[i];
        }         
    }

    printf("The max number of string is: %d\n", max);
    printf("The min number of string is: %d\n", min);

}
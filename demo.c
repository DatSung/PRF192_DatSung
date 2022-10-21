#include <stdio.h>

int main() {
    int arr[] = {3,6,5,9,7,1,8};

    int i, j, trade;

    for(i = 0; i < 7 - 1; i = i + 2)
    {
        for( j = i + 2; j < 7; j = j + 2)
        {
            if(arr[i] < arr[j])
            {
                trade = arr[i];
                arr[i] = arr[j];
                arr[j] = trade;        
            }
        }
    }   

    for (i = 0; i < 7; i++)
    {
        printf("%4d", arr[i]);
    }
    
}
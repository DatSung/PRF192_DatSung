#include <stdio.h>

int main() {
    int row, column;
    int i, j;

    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);

    for ( i = 1; i <= row ; i++)
    {   
        for ( j = 1; j <= column; j++)
        {
           printf("*"); 
        }
        printf("\n");
        
    }
    
}
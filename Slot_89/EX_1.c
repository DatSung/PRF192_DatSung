#include <stdio.h>

int main() {
    int row, column, K = 1;
    int i, j;

    printf("\n");

    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);

    // Example_1

    for ( i = 1; i <= row ; i++)
    {   
        for ( j = 1; j <= column; j++)
        {
           printf("*"); 
        }
        printf("\n");
        
    }

    printf("\n");

    // Example_2

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    printf("\n");

    // Example_3
    
    for (i = 1; i <= row; i++)
    {
		for (j = row;j >= i; j--)
        {
			printf("*");
		}
		printf("\n");	
	}

    printf("\n");

    // Example_4

    for (i = 1; i <= row; i++)
    {
		for (j = 1; j <= i; j++)
        {
			printf("*");
		}
		printf("\n");	
	}
	
	for (i = 1; i <= row; i++)
    {
		for (j = row; j >= i; j--)
        {
			printf("*");
		}
		printf("\n");	
	}
    printf("\n");

    // Example_5

    for (i = 1; i <= row; i++)
    {
		for ( j = 1; j < i; j++)
        {
			printf(" ");
		}
		
		for (j = row; j >= i; j--)
        {
			printf("*");
		}
		printf("\n");	
	}
    printf("\n");

    // Example_6

    for (i = 1; i <= row; i++)
    {	
		for ( j = row; j > i; j--)
        {
			printf(" ");
		}
		
		for (j = 1; j <= i; j++)
        {
			printf("*");
		}
		
		printf("\n");	
	}
    printf("\n");

    // Example_7

    for (i = 1; i <= row; i++)
    {
		for (j = row; j > i; j--)
        {
			printf(" ");
		}
		for ( j = 1; j <= i; j++)
        {
			printf("* ");
		}
		printf("\n");
	}
    printf("\n");

    // Example_8

    for (i = 1; i <= row; i++)
    {	
		for (j = 1; j < i; j++)
        {
			printf(" ");
		}
		
		for (j = row; j >= i; j--){
			printf("* ");
		}
			
		printf("\n");
	}
    printf("\n");

    // Example_9

    for (i = 1; i <= row; i++){
		for (j = 1; j <= i; j++){
			printf(" %2d ", K++);
		}
		printf("\n");	
	}
    printf("\n");
    
}
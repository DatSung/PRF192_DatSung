#include <stdio.h>

int storage[255];

void stringInput();
int stringSum();

int main() {

    int i, storage_rows, storage_columns, first_count = 1, clone;

    printf("Please enter row and column of string: ");
    scanf("%d %d", &storage_rows, &storage_columns);

    clone = storage_columns;

    for (i = 1; i <= storage_rows; i++)
    {   
        printf("Please enter row %d: ", i);
        stringInput(first_count ,storage_columns);
        first_count = storage_columns;
        storage_columns += (clone - 1);
    }

    printf("%d", stringSum(storage_rows, storage_columns));    
}

void stringInput(int first_count, int storage_columns) {

    int i;

    for (i = first_count; i <= storage_columns; i++)
    {   
        scanf("%d", &storage[i]);
    } 
}

int stringSum(int storage_rows, int storage_columns) {

    int i, sum = 0;

    for (i = 0; i < (storage_columns * storage_rows); i++)
    {
        sum += storage[i];
    }
    return sum;
}
#include <stdio.h>

int storage[100];
int key_control, digit_string, i, j;
int digit_string_clone_begin = 0;
int total_digit_string;
int key_search;
int min_Value, max_Value;

void menu();
void stringInput();
void stringSearch();
void stringShow();
void stringFrto();
void stringSort();

int main() {

    do
    {   
        menu();
        scanf("%d", &key_control);
        
        switch (key_control)
        {
            case 1:

                printf("\n");
                printf("Enter digit of string: ");
                scanf("%d", &digit_string);
                printf("Enter %d values in string: ", digit_string);
                stringInput(digit_string);
                printf("\n");

            break;

            case 2:
                
                printf("\n");
                printf("Please enter a key word to search: ");
                scanf("%d", &key_search);
                stringSearch(key_search);
                printf("\n");

            break;
    
            case 3:

                printf("\n");
                printf("Print out all values of string: ");
                stringShow(total_digit_string);
                printf("\n");

            break;

            case 4:
                
                printf("\n");
                printf("Please enter min value and max value: ");
                scanf("%d %d", &min_Value, &max_Value);
                printf("The values of string between %d and %d is: ", min_Value, max_Value);
                stringFrto(min_Value, max_Value);
                printf("\n");

                break;

            case 5:
                
                printf("The string after sort is: ");
                stringSort(total_digit_string, storage);

            break;

            default:

            break;
        }

    } while (key_control < 5);
}

void menu() {

    printf("\n");
    printf("WELCOME TO ARRAY SIMULATION\n");
    printf("Option (1) Add values\n");
    printf("Option (2) Search value\n");
    printf("Option (3) Add values\n");
    printf("Option (4) Add values\n");
    printf("Option (5) Sort string\n");
    printf("Press other key to quit\n");
    printf("Please choose your option: ");

}

void stringInput(int digit_string) {

    int digit_string_clone_end = digit_string + digit_string_clone_begin;

    for (i = digit_string_clone_begin; i < digit_string_clone_end; i++)
    {
        scanf("%d", &storage[i]);
    }
    digit_string_clone_begin = digit_string_clone_end;
    total_digit_string = digit_string_clone_end;
}

void stringSearch(int key_search) {

    int total_found = 0;

    for (i = 0; i < total_digit_string; i++)
    {
        if (storage[i] == key_search)
        {
            printf("Found: %d\n",storage[i]);
            total_found++;
        }
    }
    printf("Total values found: %d", total_found);
}

void stringShow(int total_digit_string) {
    
    for (i = 0; i < total_digit_string; i++)
    {
        printf("%d ", storage[i]);
    }
}

void stringFrto(int min_Value, int max_Value) {

    for (i = 0; i < total_digit_string; i++)
    {
        if (storage[i] >= min_Value && storage[i] <= max_Value)
        {
            printf("%d ", storage[i]);
        } 
    }
}

void stringSort(int n, int* ptr)
{
    int t;
 
    // Sort the numbers using pointers
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++) {
 
            if (*(ptr + j) < *(ptr + i)) {
 
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
 
    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
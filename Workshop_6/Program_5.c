#include <stdio.h>

int storage[255];

void stringInput();
void searchString();

int main() {

    int key_search, digit_string;
    int i;

    printf("Please enter the digit of string: ");
    scanf("%d", &digit_string);
    printf("Please enter string of number: ");

    stringInput(digit_string);

    printf("Please enter key word to search: ");
    scanf("%d", &key_search);

    searchString(key_search, digit_string);
}

void stringInput(int digit_string) {

    int i;

    for (i = 0; i < digit_string; i++)
    {
        scanf("%d", &storage[i]);
    }
}

void searchString(int key_search, int digit_string) {

    int i, count = 0;

    for (i = 0; i < digit_string; i++)
    {
        if (storage[i] == key_search)
        {
            printf("Found: %d\n", storage[i]);
            count++;
        }
    }
    printf("\nNumber of result is: %d", count);
}
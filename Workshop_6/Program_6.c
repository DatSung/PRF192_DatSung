#include <stdio.h>

int storage[255];

void stringInput();
void stringSearch();

int main() {

    int digit_string;
    
    printf("Please enter digit of string: ");
    scanf("%d", &digit_string);

    stringInput(digit_string);
    stringSearch(digit_string);

}

void stringInput(int digit_sting) {

    int i;
    for (i = 0; i < digit_sting; i++)
    {
        scanf("%d", &storage[i]);
    }
}

void stringSearch(int digit_string) {

    int i;

    printf("Even numbers are: ");

    for (i = 0; i < digit_string; i++)
    {
        if (storage[i] % 2 == 0)
        {
            printf("%d ", storage[i]);
        } 
    }

    printf("\n");

    printf("Odd numbers are: ");
    for (i = 0; i < digit_string; i++)
    {
        if (storage[i] % 2 != 0)
        {
            printf("%d ", storage[i]);
        }
    }
    
}
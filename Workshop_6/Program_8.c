#include <stdio.h>

int storage[255];

void stringInput();
void stringSoft();
void stringPrint();

int main() {    

    int digit_string;
    printf("Please enter digit of string: ");
    scanf("%d", &digit_string);
    printf("Please enter string of number: ");
    stringInput(digit_string);
    stringSoft(digit_string);
    printf("String after soft is: ");
    stringPrint(digit_string);

}

void stringInput(int digit_string) {

    int i;

    for (i = 0; i < digit_string; i++)
    {
        scanf("%d", &storage[i]);
    }
}

void stringSoft(int digit_string) {

    int i, j, trade;

    for(i = 0; i < digit_string - 1; i++)
    {
        for( j = i + 1; j < digit_string; j++)
        {
            if(storage[i] > storage[j])
            {
                trade = storage[i];
                storage[i] = storage[j];
                storage[j] = trade;        
            }
        }
    }   
}

void stringPrint(int digit_string) {
    
    int i;

    for (i = 0; i < digit_string; i++)
    {
        printf("%d ", storage[i]);
    }  
}
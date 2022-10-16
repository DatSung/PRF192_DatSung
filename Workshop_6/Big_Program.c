#include <stdio.h>

int storage[100];
int key_control, digit_string, i;
int digit_string_clone_begin = 0;
int total_digit_string;

void menu();
void stringInput();
void stringSearch();
void stringShow();

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

                break;

            case 2:

                break;
    
            case 3:

                printf("\n");
                printf("Print out all values of string: ");
                stringShow(total_digit_string);

                break;

            case 4:

                break;

            case 5:

                break;

            default:

                break;
        }

    } while (key_control <= 5 );
    

}

void menu() {

    printf("\n");
    printf("WELCOME TO ARRAY SIMULATION\n");
    printf("Please choose your option:\n");
    printf("Option (1) Add values\n");
    printf("Option (2) Add values\n");
    printf("Option (3) Add values\n");
    printf("Option (4) Add values\n");
    printf("Option (5) Add values\n");
    printf("Press other key to quit\n");

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

void stringSearch() {

}

void stringShow(int total_digit_string) {
    
    for (i = 0; i < total_digit_string; i++)
    {
        printf("%d ", storage[i]);
    }
}
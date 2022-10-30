#include <stdio.h>
#include <string.h>

char arrNames [255][255];

void inputArr();
void addSpace();

// MAIN
int main() {

    int num_names;

    printf("Please enter numbers of name: ");
    scanf("%d", &num_names);

    inputArr(arrNames, num_names);
    addSpace(num_names);
}
// MAIN

void inputArr(char arrNames [255][255], int num_names) {

    int i;

    for (i = 0; i < num_names; i++)
    {
        printf("Enter name %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]", arrNames[i]);
    }
}

void addSpace(int num_names) {
    int i;
    for (i = 0; i < num_names; i++)
    {
        printf("%s", arrNames[i]);
        printf(" ");
    }
}
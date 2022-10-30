#include <stdio.h>

void lbTriangle();
void luTriangle();
void rbTriangle();
void ruTriangle();

int main() {

    int size;

    printf("Please enter size of triangle: ");
    scanf("%d", &size);

    lbTriangle(size);
    printf("\n");
    luTriangle(size);
}

void lbTriangle(int size) {

    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void luTriangle(int size) {

    int i, j;

    for (i = size; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void rbTriangle() {
    
}

void ruTriangle() {

}
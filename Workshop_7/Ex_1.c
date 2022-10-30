#include <stdio.h>
#include <string.h>

char arrOfNames[255];

void arrInput();

int main() {

    int num_names, i;

    printf("Please enter number of name to enter");
    scanf("%d", &num_names);
    
    for ( i = 0; i < num_names; i++)
    {
        arrInput();
    }
}

void arrInput() {

    int i;

    for (i = 0; i < 255; i++)
    {   
        scanf("%[^\n]", arrOfNames[i]);
        
        if (arrOfNames[i] == '\n')
        {
            break;
        }
    }
    
    
    
}

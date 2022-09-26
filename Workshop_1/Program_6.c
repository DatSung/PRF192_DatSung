#include <stdio.h>  
int main()  
{  

    int caps;  
  
    for ( caps = 33; caps < 127; caps++)  
    {  
        printf (" \n| %c | %d | %o | %x | ", caps, caps, caps, caps);  
    }  
    return 0;  
}  
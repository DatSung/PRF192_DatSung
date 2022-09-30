#include <stdio.h>
#include <time.h>

int checkDate();

int main() {

    int dd, mm, yy;

    printf("Enter date form dd/mm/yy: ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    if (checkDate(dd,mm,yy) == 0)
    {
        printf("Date is valid\n");

    } else if (checkDate(dd,mm,yy) == 1)
    {
        printf("Day is invalid\n");
        
    } else if (checkDate(dd,mm,yy) == 2)
    {
        printf("Month is in valid\n");

    }else if (checkDate(dd,mm,yy) == 3)
    {
        printf("Year is invalid\n");
    }
    
}

int checkDate(int dd_enter, int mm_enter, int yy_enter) {

    // Check year
    if (yy_enter >= 1900 && yy_enter <= 9999)
    {   
        // Check month
        if (mm_enter >= 1 && mm_enter <= 12)
        {   
            // Check day
            if ((dd_enter >= 1 && dd_enter <= 31) && (mm_enter == 1 || mm_enter == 3 || mm_enter == 5 

                || mm_enter == 7 || mm_enter == 8 || mm_enter == 10 || mm_enter == 12))
            {

                return 0;
                
            } else if ((dd_enter >= 1 && dd_enter <= 30) && (mm_enter == 4 

                || mm_enter == 6 || mm_enter == 9 || mm_enter == 11))
            {
                
                return 0;

            } else if ((dd_enter >= 1 && dd_enter <= 28)  && (mm_enter == 2))
            {
                
                return 0;

            } else if ((dd_enter == 29 && mm_enter == 2) && (yy_enter % 400 == 0 

                || (yy_enter % 4 == 0 && yy_enter && 100 != 0)))
            {
                
                return 0;

            } else
            {

                return 1;

            }
            
        } else 
        {

            return 2;

        }
        
    } else
    {

        return 3;

    }
    
}
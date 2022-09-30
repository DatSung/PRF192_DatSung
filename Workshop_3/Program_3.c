#include <stdio.h>
#include <math.h>

int getRelPos();

int main() {   

    double x, y, r;

    printf("Please enter the point (x;y) and r: ");
    scanf("(%lf;%lf)", &x, &y);

    fflush(stdin);

    do
    {
        scanf("%lf", &r);

    } while (r < 0);
    

    if (getRelPos(x,y,r) == 1)
    {
        printf("The pont is in the circle\n");

    } else if (getRelPos(x,y,r) == 0)
    {
        printf("The point is on the circle\n");

    } else
    {
        printf("The point is out the circle\n");
    }
    
}

int getRelPos(double x_enter, double y_enter, double r_enter) {

    double d2 = (x_enter * x_enter) + (y_enter * y_enter);
    double r2 = (r_enter * r_enter);

    if (d2 < r2)
    {
        return 1;

    } else if (d2 == r2)
    {
        return 0;

    } else
    {
        return -1;
    }
    
}
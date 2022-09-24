#include <stdio.h>
#include <math.h>

int main() {
    int dependent, tF = 0, tI = 0, income, income_Tax = 0;
    const int PA = 9000000, PD = 3600000;

    printf("Enter your income value: ");
    scanf("%d", &income);
    printf("Enter your number of dependent: ");
    scanf("%d", &dependent);

    tF = 12 * (PA + (dependent * PD));
    tI = sqrt(income - tF);

    if (tI <= 0)
    {
        printf("Your income tax is 0\n");
    } else if (tI <= 5000000)
    {
        printf("Your income tax is: %.2f\n", tI * 0.05);
    } else if (tI <= 10000000)
    {
        printf("Your income tax is: %.2f\n", tI * 0.1);
    } else if (tI <= 18000000)
    {
        printf("Your income tax is: %.2f\n", tI * 0.15);
    } else
    {
        printf("Your income tax is: %.2f\n", tI * 0.2);
    }
}
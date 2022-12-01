#include <stdio.h>
#include <math.h>

void menuTable();

int sumOddSeries();
double sumDivideSeries();
int sumPowSeries();
int checkPrime();
int checkDate();
int fibona_check();
void findMaxMin();
void printASCII();
void printSumPos();
int factoria_caculate();

int main()
{
    int choice, number_enter;
    int number_A, number_B, i;
    int dd, mm, yy;
    menuTable();
    do
    {
        printf("Make a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInput n number: ");
            scanf("%d", &number_enter);
            printf("The sum of series number is: %d\n \n", sumOddSeries(number_enter));
            break;

        case 2:
            printf("\nInput n number: ");
            scanf("%d", &number_enter);
            printf("The sum of series number is: %.2f\n \n", sumDivideSeries(number_enter));
            break;

        case 3:
            printf("\nInput two numbers: ");
            scanf("%d^%d", &number_A, &number_B);
            printf("The sum of series number is: %d\n \n", sumPowSeries(number_A, number_B));
            break;

        case 4:
            printf("\nInput n numbers: ");
            scanf("%d", &number_enter);
            printf("Prime numbers are: ");
            for (i = 0; i <= number_enter; i++)
            {
                if (checkPrime(i) == 1)
                {
                    printf("%d ", i);
                }
            }
            printf("\n \n");
            break;

        case 5:
            printf("Enter date form dd/mm/yy: ");
            scanf("%d/%d/%d", &dd, &mm, &yy);

            if (checkDate(dd, mm, yy) == 0)
            {
                printf("Date is valid\n");
            }
            else if (checkDate(dd, mm, yy) == 1)
            {
                printf("Day is invalid\n");
            }
            else if (checkDate(dd, mm, yy) == 2)
            {
                printf("Month is invalid\n");
            }
            else if (checkDate(dd, mm, yy) == 3)
            {
                printf("Year is invalid\n");
            }
            printf("\n \n");
            break;

        case 6:
            printf("\nInput a numbers: ");
            scanf("%d", &number_enter);
            if (fibona_check(number_enter) == 1)
            {
                printf("The number is belong to Fibonacci\n \n");
            }
            else
            {
                printf("The number is not belong to Fibonacci\n \n");
            }
            break;

        case 7:
            printASCII();
            break;

        case 8:
            printSumPos();
            break;

        case 9:
            printf("\nInput a numbers: ");
            scanf("%d", &number_enter);
            findMaxMin(number_enter);
            printf("\n \n");
            break;

        case 10:
            printf("\nInput n numbers: ");
            scanf("%d", &number_enter);
            printf("%d\n \n", factoria_caculate(number_enter));
            break;

        case 0:
            printf("\n----- PROGRAM ENDED -----\n");
            break;

        default:
            break;
        }
    } while (choice != 0);
}

void menuTable()
{   
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("[1] Find the sum of the series 1+3+5+7+...\n");
    printf("[2] Find the sum of the series 1+1/2+1/3+1/4+...\n");
    printf("[3] Find the sum of the series x+x2+x3+x4+...\n");
    printf("[4] Print out primes between 2 and n.\n");
    printf("[5] Accept data of a day then print out whether they are valid or not.\n");
    printf("[6] Accept a positive integer then print out whether it is an element of the Fibonacci sequence or not.\n");
    printf("[7] Print out the ASCII code table.\n");
    printf("[8] A nonnegative integer is accepted then print out the sum of its decimal digits.\n");
    printf("[9] Accept a non-negative integer then print out its minimum and maximum digits.\n");
    printf("[10] Accept a positive integer then print out its factorial.\n");
}

int sumOddSeries(int number_count)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < number_count; i++)
    {
        sum += 2 * i + 1;
    }
    return sum;
}

double sumDivideSeries(int number_count)
{
    int i;
    double sum = 0;
    for (i = 1; i <= number_count; i++)
    {
        sum += 1 / (float)i;
    }
    return sum;
}

int sumPowSeries(int number_A, int number_B)
{
    int i, sum;
    sum = 0;
    for (i = 1; i <= number_B; i++)
    {
        sum += pow(number_A, i);
    }
    return sum;
}

int checkPrime(int number_check)
{

    int halfnumber = sqrt(number_check);
    int i;

    if (number_check < 2)
    {
        return 0;
    }
    for (i = 2; i <= halfnumber; i++)
    {
        if (number_check % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int checkDate(int dd_enter, int mm_enter, int yy_enter)
{

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
            }
            else if ((dd_enter >= 1 && dd_enter <= 30) && (mm_enter == 4

                                                           || mm_enter == 6 || mm_enter == 9 || mm_enter == 11))
            {

                return 0;
            }
            else if ((dd_enter >= 1 && dd_enter <= 28) && (mm_enter == 2))
            {

                return 0;
            }
            else if ((dd_enter == 29 && mm_enter == 2) && (yy_enter % 400 == 0

                                                           || (yy_enter % 4 == 0 && yy_enter && 100 != 0)))
            {

                return 0;
            }
            else
            {

                return 1;
            }
        }
        else
        {

            return 2;
        }
    }
    else
    {
        return 3;
    }
}

int fibona_check(int n_enter)
{

    int t1 = 1, t2 = 1, f = 1;

    if (n_enter == 1)
    {
        return 1;
    }

    while (f < n_enter)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;

        if (n_enter == f)
        {
            return 1;
        }
    }

    return 0;
}

void findMaxMin(int n)
{
    int remainder, min, max;
    remainder = n % 10;
    n = n / 10;
    min = max = remainder;
    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        if (min > remainder)
            min = remainder;
        if (max < remainder)
            max = remainder;
    }
    printf("Lowest Number = %d, Highest Number = %d", min, max);
}

void printASCII()
{

    int caps;

    for (caps = 33; caps < 127; caps++)
    {
        printf(" \n|| %c | %d || ", caps, caps);
    }
    printf("\n \n");
}

void printSumPos() {
    int number_enter, sum;
    sum = 0;
    do
    {   
        printf("\nInput a number: ");
        scanf("%d", &number_enter);
        sum += number_enter;
        printf("Sum: %d", sum);
        if (number_enter < 0)
        {
            printf("\n--- END --- \n \n");
        }
    } while (number_enter >= 0);
}

int factoria_caculate(int n_enter)
{

    int i, multiply = 1;

    for (i = 2; i <= n_enter; i++)
    {
        multiply *= i;
    }

    return multiply;
}
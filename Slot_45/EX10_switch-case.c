#include <stdio.h>

int main(){
    double  numberFirst, numberSecond, resultNumber = 0;
    char operator;

    printf("Enter a calculation to caculate: ");
    scanf("%lf %c %lf", &numberFirst, &operator, &numberSecond);

    printf("\nnumberFirst: %.2lf\n", numberFirst);
    printf("operator: %c\n", operator);
    printf("numberSecond: %.2lf\n", numberSecond);

    switch (operator) {
    case '+':
        resultNumber = numberFirst + numberSecond;
        printf("\n%.2lf %c %.2lf = %.2lf\n", numberFirst, operator, numberSecond, resultNumber);
        break;

    case '-':
        resultNumber = numberFirst - numberSecond;
        printf("\n%.2lf %c %.2lf = %.2lf\n", numberFirst, operator, numberSecond, resultNumber);
        break;

    case '*':
    case 'x':
        resultNumber = numberFirst * numberSecond;
        printf("\n%.2lf %c %.2lf = %.2lf\n", numberFirst, operator, numberSecond, resultNumber);
        break;

    case '/':
    case ':':

        if (numberSecond == 0 || numberFirst == 0) {
            printf("You enter 0");
        } else {
            resultNumber = numberFirst / numberSecond;
            printf("\n%.2lf %c %.2lf = %.2lf\n", numberFirst, operator, numberSecond, resultNumber);
        }
        break;
        
    default:
        printf("Operator is not available!!!\n");
        break;
    }

    getchar();
    return 0;
}
#include <stdio.h>
#include <math.h>

int primeChecker();
int max();
int min();

int main() {

}

int max(int number_A, int number_B){
    
    if (number_A > number_B)
    {
        return number_A;

    } else if (number_A < number_B)
    {
        return number_B;
        
    } else
    {
        return number_A;
    }
    
    
    

}


// PRIME CHECKER FUNCTION
int primeChecker(int number_check) {

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
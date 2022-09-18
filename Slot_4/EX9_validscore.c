#include <stdio.h>

int main() {

    double number_score;

    do {
        
        printf("Please enter the score: ");
        scanf("%lf", &number_score);

        if (number_score >= 0 && number_score <= 10) {
            printf("The score is valid: %.2lf", number_score);
        } else { 
            printf("The score %.2lf is not valid please try again !", number_score);
        }
        
    } while (number_score < 0 && number_score > 10);
    
}
#include <stdio.h>

int main() {
    int Num_A, Num_B;

    do
    {
        printf("Enter number A and number B: ");
        scanf("%d %d", &Num_A ,&Num_B);

        Num_A = Num_A + Num_B;
        Num_B = Num_A - Num_B;
        Num_A = Num_A - Num_B;
        
        printf("Num_A = %d, Num_B = %d\n", Num_A, Num_B);

        printf("\n");

    } while (Num_A != 0 && Num_B != 0);
    
}
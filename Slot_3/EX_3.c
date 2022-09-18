#include <stdio.h>

int main() {
    int Num_1, Num_2;

    printf("Enter Num_1: ");
    scanf("%d", &Num_1);
    printf("Enter Num_2: ");
    scanf("%d", &Num_2);

    Num_1 = Num_1 + Num_2;
    Num_2 = Num_1 - Num_2;
    Num_1 = Num_1 - Num_2;

    printf("Num_1: %d, Num_2: %d", Num_1, Num_2);
    
    getchar();
    return 0;
}
#include <stdio.h>

int main() {
    int Num_1 = 10, Num_2 = 20, trade_vari = 0;

    trade_vari = Num_1;
    Num_1 = Num_2;
    Num_2 = trade_vari;

    printf("\n");
    printf("Num_1 = %d, Num_2 = %d", Num_1, Num_2);

    getchar();
    return 0;
}
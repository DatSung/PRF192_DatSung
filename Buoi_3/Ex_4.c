#include <stdio.h>

void swap();

int main() {
    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);
    swap(num_1, num_2);
}

void swap(int num_1, int num_2) {
    int temp;
    temp = num_1;
    num_1 = num_2;
    num_2 = temp;
    printf("%d ", num_1);
    printf("%d", num_2);
}

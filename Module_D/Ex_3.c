#include <stdio.h>

int main() {
    int nguyen_a = 125, nguyen_b = 600;
    float thuc_a = 10.5, thuc_b = 7.3;
    float dai_a = 7.8, rong_b = 3.6;
    char ki_tu = 'd';

    printf("Tong hai so nguyen a&b la: %d\n", nguyen_a + nguyen_b);
    printf("Tong hai so thuc a&b la: %.2f\n", thuc_a / thuc_b);
    printf("Dien tich hinh chu nhat la: %.2f\n", dai_a * rong_b);
    printf("Ki tu la: %c", ki_tu);

    getchar();
    return 0;
}

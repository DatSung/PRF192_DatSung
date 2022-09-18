#include <stdio.h>

int main() {

    // Variables
    int num_One_int, num_Two_int;
    float num_One_float, num_Two_float;
    double num_One_double, num_Two_double;

    // Scan

    printf("\n");

    printf("Nhap hai so Int: ");
    scanf("%d%d\n", &num_One_int, &num_Two_int);
    printf("Nhap hai so Float: ");
    scanf("%f%f\n", &num_One_float, &num_Two_float);
    printf("Nhap hai so Double: ");
    scanf("%lf%lf\n", &num_One_double, &num_Two_double);

    printf("\n");

    // Memmory map
    printf("%d %d %u %u\n", num_One_int, num_Two_int, &num_One_int, &num_Two_int);
    printf("%f %f %u %u\n", num_One_float, num_Two_float, &num_One_float, &num_Two_float);
    printf("%lf %lf %u %u\n", num_One_double, num_Two_double, &num_One_double, &num_Two_double);

    printf("\n");

    getchar();
}
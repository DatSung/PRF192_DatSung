#include <stdio.h>
 int main() {
    int so_nguyen = 21;
    int sum;
    char ten[] ="DatSung";
    char ki_tu = 'D';
    float so_thuc = 2.1;
    double so_thuc_x2 = 20772777.7238648723643;

    sum = 7 + 9;

    printf("\n");
    printf("So nguyen la: %d     || Dia chi la: %u    || Kich thuoc la : %d\n", so_nguyen, &so_nguyen, sizeof(so_nguyen));
    printf("\n");
    printf("Ki tu la: %s         || Dia chi la: %u    || Kich thuoc la: %d\n", ten, &ten, sizeof(ten));
    printf("\n");
    printf("Ki tu la: %c         || Dia chi la: %u    || Kich thuoc la: %d\n", ki_tu, &ki_tu, sizeof(ki_tu));
    printf("\n");
    printf("So thuc la: %f       || Dia chi la: %u    || Kich thuoc la: %d\n", so_thuc, &so_thuc, sizeof(so_thuc));
    printf("\n");
    printf("So thuc x2 la: %lf   || Dia chi la: %u    || Kich thuoc la: %d\n", so_thuc_x2, &so_thuc_x2, sizeof(so_thuc_x2));  
    
    getchar();
    return 0;
 }
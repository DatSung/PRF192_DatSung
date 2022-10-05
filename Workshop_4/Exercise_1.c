#include <stdio.h>

int main() {

    // Exercise 1

        // EX 1
    int n = 7, m = 6;
    int *pn = &n;
    int *pm = &m;

    *pn = *pm + 2*m - 3*n;
    *pm -= *pn;

    printf("%d\n", m + n);

        // EX 2
    char c1 = 'A', c2 = 'F';
    char *p1 = &c1;
    char *p2 = &c2;

    *p1 += 3;
    *p2 -= 5;

    printf("%d\n", c1 - c2);

        // EX 3
    double x = 3.2, y = 5.1;
    double *pp1 = &x;
    double *pp2 = &y;

    *pp1 += 3 - 2 * (*p2);
    *pp2 -= 3 * (*p1);

    printf("%lf", x + y);

    
    // Exercise 2

        // EX 1
    int nn = 7, mm = 8;
    int *ppp1 = &nn;
    int *ppp2 = &mm;

    *ppp1 += 12 - mm + (*ppp2);
    *ppp2 = mm + nn - 2 * (*ppp1);

    printf("%d\n", mm + nn);

        // EX 2
    int nnn = 7, mmm = 8;
    int *pppp1 = &nnn, *pppp2 = &mmm;

    *pppp1 += 12 - mmm + (*pppp2);
    *pppp2 = mmm + nnn - 2 * (*pppp2);

    printf("%d\n", m + n);

    getchar();
    return 0;

}
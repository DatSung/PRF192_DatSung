#include <stdio.h>
#include <stdlib.h>
//-----------------Bai1----------------------------------------
/*
void Nhap(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}
//---------------------------------------
void Print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
}
//-----------------------------------
int Sum( int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        s += a[i];
    }
    return s;
}
//---------------------------------------
int demTanSuat( int a[],int n, int x)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            count++;
        }
    }
    return count;
}
//-----------------------------------------
int sapXep(int a[])
{
	int i,j;
	for( i = 1; i < 7 ; i = i +2 )
	{
		for( j = i + 2; j < 7 ; j = j +2)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for( i = 0; i < 7 ; i = i+2)
    {   
        
        for(j = i + 2; j < 7; j= j+2)
        {
            if(a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    } 
}
//-----------------------------------------
int main()
{
    int a[1000], n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    Nhap(a, n);
    Print(a,n);
    printf("\n");
    printf("\nTong: %d", Sum(a,n));

    int x;
    printf("\nNhap so ban can tim: ");
    scanf("%d", &x);
    printf("\nso lan x xuat hien: %d ", demTanSuat(a,n,x));

    sapXep(a);
    printf("\nSau khi sap xep:");
    for(int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
   
}
*/
//-----------------------Bai2----------------------------------
int a[100][100];
int b[100];
int m,n,k;
void _nhapMaTran(int a[100][100], int n, int m)
{


	for( int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i,j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMaTran(int a[100][100], int n, int m)
{
	printf("\nMang: \n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void SapXepMang2ChieuTangDan(int a[][100], int SoDong, int SoCot)
{
	int n = SoDong * SoCot;

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i / SoCot][i % SoCot] > a[j / SoCot][j % SoCot])
			{
				int tmp = a[i / SoCot][i % SoCot];
				a[i / SoCot][i % SoCot] = a[j / SoCot][j % SoCot];
				a[j / SoCot][j % SoCot] = tmp;
			}
		}
	}
}
int main()
{
	int a[100][100],n,m;
    do {
		printf("Nhap n va m: ");
		scanf("%d%d", &n, &m);
	} while(m <= 0 || n < 0);
	_nhapMaTran(a,n,m);
	xuatMaTran(a,n,m);
	SapXepMang2ChieuTangDan(a,n,m);
	printf("Sau khi sap xep: \n");
	xuatMaTran(a,n,m);
}
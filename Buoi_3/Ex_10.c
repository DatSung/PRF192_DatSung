#include<stdio.h>

int numLen(int num)
{
	int count = 0;
	while(num > 0) {
		num /= 10;
		count++;
	}
	return count;
}

int power(int num, int exp)
{
	int product = 1;
    int i;
	for(i = 0; i < exp; i++) {
		product *= num;
	}
	return product;
}

int isArmstrong(int num)
{
	int length = numLen(num), sum = 0;
    int clone_num = num;
	while(num>0) {
		sum += power(num%10, length);
		num /= 10;
	}
	if (sum == clone_num) return 1;
    return 0;
}

int main()
{
	int num;
	scanf("%d", &num);
    if (isArmstrong(num) == 1)
    {
	    printf("%d is armstrong number", num);        
    } else 
    {
        printf("%d is not armstrong number", num);    
    }   
}

#include<stdio.h>
#include<math.h>
void menu();
int countelments();
int sumelments();
int invertarray();

int main()
{
   int choice;
   int mark;
   do
   {
   	printf("\n Choses a number:");
   	menu();
   	printf("\n Number enterd:");
   	scanf("%d",&choice);
   	switch(choice)
   	{
	 case 1:
	 printf("Enter the number:");
	 countelments();
	 break;
	}
   }
   while(choice!=0);
   return 0;
}
void menu()
{
    printf("------------------------------------------------------------------------------------------------------------\n");
	printf("\n1 Count elements that are primes in an array");	
	printf("\n2 Sum the elements that are primes in the array");
	printf("\n3 Invert array");
	printf("\n4 Searching for an element in an array using the linear search algorithm");
	printf("\n5 Search for an element in an array using binary search algorithm");
	printf("\n6 Sort the array in descending order using the Selection sort algorithm");
	printf("\n7 Sort the array in descending order using the Bubble sort algorithm");
	printf("\n8 Add 1 element to array");
	printf("\n9 Delete an element in an array");
	
}
int countelments()
{
	int i, n;
	int a[1000];
	int count;
    scanf("%d", &n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 1)
		{
		  count++;
		}	
	}
	printf("\nThe digit of odd numbers is: %d ",count);
return 0;
}
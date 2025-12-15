#include<stdio.h>
#include<conio.h>

void main()
{

	int n,i,sum=0;
	
	printf("Enter how many number you want to store : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d number : ",n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	   sum+=arr[i];
	}
	
	printf("The sum of all elements are : %d",sum);

	getch();
}
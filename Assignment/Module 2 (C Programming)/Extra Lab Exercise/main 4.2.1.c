#include<stdio.h>
#include<conio.h>

void main()
{

	int A[2][2],B[2][2],Sum[2][2],i,j;

	printf("Enter matrix A : \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter matrix B : \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			Sum[i][j] = A[i][j] + B[i][j];
		}
	}
	
    printf("Sum of both matrix are : \n");
    for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		printf("%d ",Sum[i][j]);
		}
		printf("\n");
	}

	getch();
}
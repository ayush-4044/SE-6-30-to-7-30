#include<stdio.h>
#include<conio.h>

void main()
{

	int A[3][3],B[3][3],i,j;
	int Sum[3][3],Mul[3][3];

	printf("Enter matrix A : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}

	printf("Enter matrix B : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			Sum[i][j] = A[i][j] + B[i][j];
		}
	}
	
    printf("Sum of both matrix are : \n");
    for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		printf("%d ",Sum[i][j]);
		}
		printf("\n");
	}
	
	 for (i = 0; i < 3; i++)
	 {
        for (j = 0; j < 3; j++)
        {
           Mul[i][j] = A[i][j] * B[i][j];
        }
    }
    
    printf("\nMultiplication of matrix : \n");
    for (i=0; i<3; i++) 
    {
        for (j=0; j<3; j++) 
        {
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }

	getch();
}
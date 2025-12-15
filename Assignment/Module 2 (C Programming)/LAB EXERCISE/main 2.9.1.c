#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    
  int arr[5],a;
  
  
  for(a=0;a<5;a++)
  {
    printf("Enter 5 integer : ");
    scanf("%d",&arr[a]);
  }
  for(a=0;a<5;a++)
  {
    printf("\n%d",arr[a]);
    
  }
  
    int arr1[3][3];
    int i,j,sum = 0; 
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter 9 elements for 3*3 matrix : ");
            scanf("%d",&arr1[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
            sum+=arr1[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum of all elements at matrix : %d",sum);
    getch();
}


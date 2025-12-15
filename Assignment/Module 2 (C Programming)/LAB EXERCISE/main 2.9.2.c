#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    
  int arr[5],i;
  
  
  for(i=0;i<5;i++)
  {
    printf("Enter 5 integer : ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("\n%d",arr[i]);
    
  }

    getch();
}


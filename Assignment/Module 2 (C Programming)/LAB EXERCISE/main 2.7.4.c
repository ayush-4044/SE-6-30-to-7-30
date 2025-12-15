#include<stdio.h>
#include<conio.h>

void main()
{
    int num[5];
    int i;
    
    printf("Enter five number : ");
    for(i=0;i<5;i++)
    {
        scanf("\n %d",&num[i]);
    }
    
    printf("Number in revers : ");
    for(i=4;i>=0;i--)
    {
        printf("\n %d",num[i]);
    }
  
    getch();
}
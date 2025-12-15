#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,i,range;
    
    printf("Enter number : ");
    scanf("%d",&num);
   
   printf("Enter range (e.g., 1 to N) : ");
   scanf("%d",&range);
   
    for(i=1;i<=range;i++)
    {
        printf("\n%d * %d = %d",num,i,num*i);
    }
    getch();
}

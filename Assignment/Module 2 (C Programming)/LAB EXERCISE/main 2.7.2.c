#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i=1,sum = 0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    while(i<=num)
    {
        sum = sum + i;
        i++;
    }
    printf("sum of natural number is : %d",sum);
    getch();
}
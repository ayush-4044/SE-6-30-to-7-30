#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num,sum=0;
    
    printf("Enter any number : ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num%10;
        sum+=rem;
        num = num/10;
    }
    
    printf("The sum of all number is : %d",sum);
    getch();
}
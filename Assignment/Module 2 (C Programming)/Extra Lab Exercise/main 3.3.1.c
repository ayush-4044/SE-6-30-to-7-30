#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,sum=0,digit;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        digit = num%10;
        sum+=digit;
        num = num/10;
    }
    
    printf("The sum of digit is : %d",sum);
    
    getch();
}

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,digit,max=0;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(num<0)
    {
        num = -num;
    }
    
    while(num > 0)
    {
        digit = num % 10;
        
        if(digit>max)
        {
            max = digit;
        }
        
        num = num / 10;
    }
    
    printf("The maximum digit is : %d",max);
  
   getch();
}
#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
    int i,fact=1;
    
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    
    int num;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("\nFactorial of negative number is not possible!");
    }
    else
    {
        printf("\nFactorial of this number is : %d",factorial(num));
    }
  
   getch();
}
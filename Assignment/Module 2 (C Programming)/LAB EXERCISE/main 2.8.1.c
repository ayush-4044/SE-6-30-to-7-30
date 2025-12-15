#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main ()
{
    int num,result;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    result = fact(num);
    printf("%d",result);
    
    getch();
}



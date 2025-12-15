#include<stdio.h>
#include<conio.h>
void main()
{
    
    int a;
    
    printf("Enter the number : ");
    scanf("%d",&a);
    
    if(a>0)
    {
        printf("The number is positive");
    }
    else if(a<0)
    {
        printf("The number is negative");
    }
    else if(a==0)
    {
        printf("The number is zero");
    }
    getch();
}

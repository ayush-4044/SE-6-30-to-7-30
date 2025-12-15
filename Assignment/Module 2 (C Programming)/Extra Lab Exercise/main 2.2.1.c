#include<stdio.h>
#include<conio.h>
void main()
{
    
    int a,b,c;
    
    printf("Enter first number : ");
    scanf("%d",&a);
    
    printf("Enter second number : ");
    scanf("%d",&b);
    
    printf("Enter third number : ");
    scanf("%d",&c);
    
    
    //maximum number
    if(a>b && a>c)
    {
        printf("\nThe maximum number is : %d",a);
    }
    else if(b>a && b>c)
    {
        printf("\nThe maximum number is : %d",b);
    }
    else
    {
        printf("\nThe maximum number is : %d",c);
    }
    
    //small number
     if(a<b && a<c)
    {
        printf("\nThe smallest number is : %d",a);
    }
    else if(b<a && b<c)
    {
        printf("\nThe smallest number is : %d",b);
    }
    else
    {
        printf("\nThe smallest number is : %d",c);
    }
    getch();
}

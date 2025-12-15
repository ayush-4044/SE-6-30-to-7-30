#include<stdio.h>
#include<conio.h>
void main()
{
    
    int a,b,c,large,small;
    
    printf("Enter first number : ");
    scanf("%d",&a);
    
    printf("Enter second number : ");
    scanf("%d",&b);
    
    printf("Enter third number : ");
    scanf("%d",&c);
    
    
    //maximum number
    if(a>b && a>c)
        large = 1;
    else if(b>a && b>c)
        large = 2;
    else
        large = 3;
    
    //small number
     if(a<b && a<c)
        small = 1;
    else if(b<a && b<c)
        small = 2;
    else    
        small = 3;
        
        switch(large)
        {
            case 1 : printf("\nThe maximum number is : %d",a);
            break;
            case 2 : printf("\nThe maximum number is : %d",b);
            break;
            case 3 : printf("\nThe maximum number is : %d",c);
            break;
        }
        
        switch(small)
        {
            case 1 : printf("\nThe smallest number is : %d",a);
            break;
            case 2 : printf("\nThe smallest number is : %d",b);
            break;
            case 3 : printf("\nThe smallest number is : %d",c);
            break;
        }
    getch();
}

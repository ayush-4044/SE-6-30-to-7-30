#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(num%3==0 && num%5==0)
    {
        printf("%d The number is a multiple of both 3 and 5",num);
    }
    else
    {
        printf("%d is not multiple of both 3 and 5",num);
    }
    getch();
   
}

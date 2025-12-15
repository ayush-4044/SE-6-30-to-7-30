#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,reverse=0,digit;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        digit = num%10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }
    
    printf("The reverse of digit is : %d",reverse);
    
    getch();
}

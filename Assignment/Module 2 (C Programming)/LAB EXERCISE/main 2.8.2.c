#include<stdio.h>
#include<conio.h>

int fact(int n);
void main()
{
    int num,result;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negavtive number is not possible");
    }
    else
    {
    printf("Your result is : %d",fact(num));
    }
    getch();
}

int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
    
}
#include<stdio.h>
#include<conio.h>

int palindrome(int num)
{
    int orignal = num;
    int reverse = 0;
    
   while(num>0)
   {
       int digit = num % 10;
       reverse = reverse * 10 + digit;
       num = num/10;
   }
    
    if(orignal == reverse)
        return 1;
    else
        return 0;
}


void main() {
    
    int num;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    if(palindrome(num))
    {
        printf("\nThe number is palindrome");
    }
    else
    {
        printf("\nThe number is not palindrome");
    }
    getch();
}

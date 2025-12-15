#include<stdio.h>
#include<conio.h>

void main()
{
    int num,origanlnum,rem,result=0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    origanlnum = num;
    
    for(; num!=0; num = num/10){
        rem = num%10;
        result = result + (rem * rem * rem);
    }
 
    if(result==origanlnum)
    {
        printf("The number is an armstrong number");
    }
    else
    {
         printf("The number is not an armstrong number");
    }
    getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>

int fact(int n){
    
    int factorial = 1,i;
    for(i=1;i<=n;i++)
    {
        factorial = factorial * i;
        printf("\n Your answer is %d = %d",i,factorial);
    }
    return factorial;
}

void main ()
{
    
   int num,result;
   
   printf("Enter number : ");
   scanf("%d",&num);
   
   result = fact(num);
   
     getch();   
}
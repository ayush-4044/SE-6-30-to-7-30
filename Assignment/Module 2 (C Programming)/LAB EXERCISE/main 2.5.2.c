#include<stdio.h>
#include<conio.h>

void main(){

   int a,b,c,result;
   
   printf("Enter a number : ");
   scanf("%d",&a);
   
   printf("Enter a number : ");
   scanf("%d",&b);
   
   printf("Enter a number : ");
   scanf("%d",&c);
   
   result = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
   printf("The maximum number is %d",result);
   
   getch();
    
}
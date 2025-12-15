#include<stdio.h>
#include<conio.h>

void main(){

   int number,ascii; 

   printf("Enter a number : ");
   scanf("%d",&number);
   
   ascii = number + '0';
   printf("The ascii value of given number is %d",ascii);
   
   getch();
    
}
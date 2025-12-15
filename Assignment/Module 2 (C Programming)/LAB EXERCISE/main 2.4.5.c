#include<stdio.h>
#include<conio.h>

void main(){

   int ascii; 
   char character;

   printf("Enter a ascii value : ");
   scanf("%d",&ascii);
   
   character = (char)ascii;
   printf("The character value from ascii is %c ",character);
   
   getch();
    
}
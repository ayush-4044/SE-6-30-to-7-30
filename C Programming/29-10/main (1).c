#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    
   char ch[50];
   
   
   printf("Enter your password : ");
   scanf("%s",&ch);
   
    printf("%s",strrev(ch));
   
     getch();   
}
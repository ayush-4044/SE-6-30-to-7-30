#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    
   char ch[50];
   char ch1[50] = "ayush123";
   
   printf("Enter your password : ");
   scanf("%s",&ch);
   
   do
   {
        printf("Enter your password : ");
        scanf("%s",&ch);
   }
   while(strcmp(ch1,ch)!=0);
   printf("Congratulations!!");
   
     getch();   
}
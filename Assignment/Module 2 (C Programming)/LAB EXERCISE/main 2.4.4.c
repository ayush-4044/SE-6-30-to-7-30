#include<stdio.h>
#include<conio.h>

void main(){

   int student, apples = 5;
   
   printf("Enter a number of student : ");
   scanf("%d",&student);
   
   int total = student * apples;
   printf("Total %d apples are required",total);
   
   getch();
    
}
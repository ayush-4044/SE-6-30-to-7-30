#include<stdio.h>
#include<conio.h>

void main(){

   int r;
   float PI = 3.14;
   
   printf("Enter a radius : ");
   scanf("%d",&r);
   
   //area of circle
   float area = PI * r * r;
   printf("\n The area of circle is : %f", area);
   
   //Circumference of circle
   float Circumference = 2 * PI * r;
   printf("\n The Circumference of circle is : %f", Circumference);
    
    getch();
    
}
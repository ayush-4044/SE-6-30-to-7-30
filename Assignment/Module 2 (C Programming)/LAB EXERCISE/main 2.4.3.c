#include<stdio.h>
#include<conio.h>

void main(){

   int a,b;
   
   printf("Enter a value : ");
   scanf("%d",&a);
   
   //area of squre
   b = a * a;
   printf("\n The area of squre is : %d", b);
   
   //area of cube
   b = 6 * a * a;
   printf("\n The area of cube is : %d", b);
   
   //area of triangle
   float base,height,area;
   
   printf("\n\n Enter a base : ");
   scanf("%f",&base);
   
   printf("\n Enter a height : ");
   scanf("%f",&height);
   
   area = 0.5 * base * height;
   printf("\n The area of triangle is : %f",area);
   
   getch();
    
}
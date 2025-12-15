#include <stdio.h>
#include<conio.h>

int main()
{
    
  float length,width,area;
  
  printf("Enter length : ");
  scanf("%f",&length);
  
  printf("Enter width : ");
  scanf("%f",&width);
  
  area = length * width;
  
  printf("The are of rectangle is : %f",area);
  
  return 0;
}
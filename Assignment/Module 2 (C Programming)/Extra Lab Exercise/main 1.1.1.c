#include<stdio.h>
#include<conio.h>
void main()
{
    int a , b;
    
    printf("Enter a value of a : ");
    scanf("%d",&a);
    
    printf("Enter a value of b : ");
    scanf("%d",&b);
    
    int add = a + b;
    printf("\nThe sum of a and b is : %d",add);
    
    int sub = a - b;
    printf("\nThe subtraction of a and b is : %d",sub);
    
    int mul = a * b;
    printf("\nThe multiplication of a and b is : %d",mul);
    
    float divi = a / b;
    printf("\nThe division of a and b is : %f",divi);
    
    float mod = a % b;
    printf("\nb The modulas of a and b is : %f",mod);
}

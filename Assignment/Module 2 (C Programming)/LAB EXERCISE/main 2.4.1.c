#include<stdio.h>
#include<conio.h>

void main(){

    int a,b,c;
    
    printf("\n Enter a value of a : ");
    scanf("%d",&a);
    
    printf("\n Enter a value of b : ");
    scanf("%d",&b);
    
    //arithmetic operators
    
    //addition
    c = a+b;
    printf("\n The addition is %d",c);
    
    //subtraction
    c = a-b;
    printf("\n The subtraction is %d",c);
    
    //multiplication
    c = a*b;
    printf("\n The multiplication is %d",c);
    
    //division
    c = a/b;
    printf("\n The division is %d",c);
    
    //modulas
    c = a%b;
    printf("\n The modulas is %d",c);
    
    //relational operators
    
    c = a>b;
    printf("\n The answer is %d",c);
     
    c = a<b;
    printf("\n The answer is %d",c);
     
    c = a>=b;
    printf("\n The answer is %d",c);
     
    c = a<=b;
    printf("\n The answer is %d",c);
    
    c = a==b;
    printf("\n The answer is %d",c);
     
    c = a!=b;
    printf("\n The answer is %d",c);
    
    //logical operators
    
    c = a && b;
    printf("\n The answer is %d",c);
    
    c = a || b;
    printf("\n The answer is %d",c);
    
    c = !a;
    printf("\n The answer is %d",c);
    
    c = !b;
    printf("\n The answer is %d",c);
    
    
    
    getch();
    
}
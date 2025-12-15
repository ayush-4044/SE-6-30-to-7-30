#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,result;
    char op;
    
    printf("Enter a value of a : ");
    scanf("%f",&a);
    
    printf("Enter operator(+,-,*,/,%%) : ");
    scanf(" %c",&op);
    
    printf("Enter a value of b : ");
    scanf("%f",&b);
    
    switch(op)
    {
        case '+' : 
        result = a+b;
        printf("Sum is : %f",result);
        break;
        
        case '-' : 
        result = a-b;
        printf("Subtraction is : %f",result);
        break;
        
        case '*' : 
        result = a*b;
        printf("Multiplication is : %f",result);
        break;
        
        case '/' : 
        result = a/b;
        printf("Division is : %f",result);
        break;
        
        case '%' : 
        printf("Modulas is : %d",(int)result);
        break;
        
        default : printf("Invalid operator! Please use +, -, *, /, %%\n");
    }
   
}

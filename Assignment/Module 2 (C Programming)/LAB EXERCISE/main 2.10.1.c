#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int num = 10;
    int *ptr;
    
    ptr = &num;
    
    printf("\nBefore modification : %d",num);
    
    *ptr = 25;
    
    printf("\nAfter modification : %d",num);
    
    getch();
}
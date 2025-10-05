#include<stdio.h>
#include<conio.h>

void main ()
{
    
    int age;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("\n You are eligible to vote");
        if(age>60)
        {
            printf("\n You are under senior citizen");
        }
        else
        {
            printf("\n You are young");
        }
    }
    else
    {
          printf("\n You are not eligible to vote");
    }
    getch();
    
    
}
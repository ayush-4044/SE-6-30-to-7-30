#include<stdio.h>
#include<conio.h>

void main ()
{
    int i,j,space;
    
    for(i=1;i<=5;i++)
    {
       
       for(j=i;j<=5;j++)
       {
           printf("*");
           
       }
       
       for(space=1;space<i*2-1;space++)
       {
           printf(" ");
       }
        for(j=i;j<=5;j++)
       {
           printf("*");
           
       }
       
        printf("\n");
    }
    getch();
}
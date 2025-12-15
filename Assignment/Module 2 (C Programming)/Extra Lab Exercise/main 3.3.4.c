#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    char k ='A';
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%c ",k);
           k++;
        }
        printf("\n");
    }
  
   getch();
}
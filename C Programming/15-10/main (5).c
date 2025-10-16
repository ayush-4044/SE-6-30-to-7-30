#include<stdio.h>
#include<conio.h>
void main ()
{
    
    int i,j,space = 0,num;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(space=1;space<=num-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    getch();
}

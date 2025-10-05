#include<stdio.h>
#include<conio.h>

void main ()
{
    
    int num;
    
    printf("\n Enter a number \n Press 1 for English \n Press 2 for Hindi \n Press 2 for Gujrati");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1 : printf("\n Your language is English");
        break;
        case 2 : printf("\n Your language is Hindi");
        break;
        case 3 : printf("\n Your language is Gujrati");
        break;
        default : printf("\n Your number is invalid");
        break;
    }
     getch();
    
}
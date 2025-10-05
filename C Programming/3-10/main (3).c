#include<stdio.h>
#include<conio.h>

void main ()
{
    
    char c;
    
    printf("Enter any alphabet : ");
    scanf("%c",&c);
    
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("It is vowel");
    }
    else
    {
         printf("It is consonant");
    }
     getch();
    
}
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    
    char name[50];
    char surname[50];
    char email1[50];
    char password1[50];
    char email2[50];
    char password2[50];
    
    printf("\nUser registration");
    
    printf("\n\n Enter your name : ");
    scanf("%s",&name);
    
    printf("\n Enter your surnname : ");
    scanf("%s",&surname);
    
    printf("\n Enter your email : ");
    scanf("%s",&email1);
    
    printf("\n Enter your password : ");
    scanf("%s",&password1);
    
    printf("\nUser Login");
    
    printf("\n \n Enter your email : ");
    scanf("%s",&email2);
    
    printf("\n Enter your password : ");
    scanf("%s",&password2);
    
    if(strcmp(email2,email1)==0 && strcmp(password2,password1)==0) 
    {
        printf("\nLogin successfully");
    }
    else
    {
        printf("\nLogin fail");
    }

     getch();   
}
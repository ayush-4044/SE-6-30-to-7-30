#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    
    char str1[50],str2[50];
    
    printf("Enter first string : ");
    scanf("%s",&str1);
    
    printf("Enter second string : ");
    scanf("%s",&str2);
    
    strcat(str1,str2);
    
    printf("The Concatenated string is : %s",str1);
    printf("\nThe length of string is : %d", strlen(str1));
    getch();
}
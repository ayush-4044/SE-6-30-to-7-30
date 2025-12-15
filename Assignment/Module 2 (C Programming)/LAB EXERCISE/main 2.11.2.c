#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    
    char str[50];
    int i,length = 0;
    printf("Enter String : ");
    scanf("%s",&str);
    
    for(i=0;str[i]!=0;i++)
    {
        length++;
    }
    printf("The length of sting is : %d",length);
    getch();
}
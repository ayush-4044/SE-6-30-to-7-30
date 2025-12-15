#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[50];
    int len,i,flage = 0;
    
    printf("Enter string : ");
    scanf("%s",&str);
    
    len = strlen(str);
    
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flage = 1;
            break;
        }
    }
    if(flage==0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    getch();
}
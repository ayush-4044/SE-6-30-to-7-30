#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    
    char str[50],rev[50];
    int i,len,flag=0;
    
    printf("Enter a string : ");
    scanf("%s",&str);
    
    len = strlen(str);
    
    for(i=0;i<len;i++)
    {
        rev[i] = str[len - i - 1];
          
    }
    printf("Reversed string is %s",rev);
    
    for(i=0;i<len;i++)
    {
        if(str[i]!=rev[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\nThe string is Palindrome");
    }
    else
    {
        printf("\nThe string is not Palindrome");
    }
    
    getch();
}


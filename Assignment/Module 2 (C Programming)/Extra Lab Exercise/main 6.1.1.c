#include <stdio.h>
#include <conio.h>
#include <string.h>

void revers(char str[])
{
    int len,i;
    char temp;
    
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
       temp = str[i];
       str[i] = str[len-1-i];
       str[len-1-i] = temp;
    }
    
}

void main()
{
    char str[100];
    
    printf("Enter string : ");
    scanf("%s",&str);
    
    revers(str);
    
    printf("The revers string is : %s",str);

    getch();
}

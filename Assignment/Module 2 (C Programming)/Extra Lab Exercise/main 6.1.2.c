#include <stdio.h>
#include <conio.h>

void revers(char str[])
{
    int len = 0,i;
    char temp;
    
    while(str[len] != '\0' )
    {
        len++;
    }
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
    int i = 0;
    char ch;
    
    printf("Enter string : ");
    
    while((ch = getchar()) != '\n' && ch != EOF)
    {
        str[i] = ch;
        i++;
    }
    
    str[i] = '\0';
    
    revers(str);
    
    printf("The revers string is : %s",str);

    getch();
}

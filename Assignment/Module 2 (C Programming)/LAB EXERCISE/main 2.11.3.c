#include<stdio.h>
#include<conio.h>
#include<string.h>

void joinstring(char str1[],char str2[])
{
    int i = 0;
    int j = 0;
    while(str1[i]!=0)
    {
        i++;
    }
    while(str2[j]!=0)
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
}
void main()
{
    char str1[100],str2[100];
       
       printf("Enter first string : ");
       scanf("%s",&str1);
       
       printf("Enter second string : ");
       scanf("%s",&str2);
       
       joinstring(str1,str2);
       
       printf("The joined string is : %s",str1);
    
    getch();
}
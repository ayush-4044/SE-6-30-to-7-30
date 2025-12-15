#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char str[50],rev[50];
   int i, len,flage=0;
   
   cout<<"Enter string : ";
   cin>>str;
   
   len = strlen(str);
   
   for(i=0;i<len;i++)
   {
       rev[i] = str[len-i-1];
   }
   rev[len] = '\0';
   cout<<"The reverse string is : "<<rev<<endl;
   
   for(i=0;i<len;i++)
   {
       if(str[i]!=rev[i])
       {
            flage = 1;
            break;
       }
   }
   
   if(flage == 0)
   {
       cout<<"The string is palindrome";
   }
   else
   {
        cout<<"The string is not palindrome";
   }
   
   
   return 0;
}
#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i,vowel = 0,consonant = 0,digit = 0,spacial = 0;
    
    
    printf("Enter string : ");
    scanf("%[^\n]s",&str);// read full line including space
    
    i=0;
    
    while(str[i] != '\0')
    {
        char ch = str[i];
  
    
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if(ch >= '0' && ch <='9')
        {
            digit++;
        }
        else if(ch >= 'a' && ch <= 'z' || ch >='A' && ch <='Z')
        {
            consonant++;
        }
        else
        {
            spacial++;
        }
      
    
      i++;
    }
    
    printf("\nThe vowel is : %d",vowel);
    printf("\nThe consonant is : %d",consonant);
    printf("\nThe digit is : %d",digit);
    printf("\nThe spacial characters is : %d",spacial);
    
    getch();
}

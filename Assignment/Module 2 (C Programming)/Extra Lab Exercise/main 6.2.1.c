#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i = 0,vowel = 0,consonant = 0;
    
    
    printf("Enter string : ");
    scanf("%[^\n]s",&str); // read full line including space
    
    while(str[i] != '\0')
    {
        char ch = str[i];
  
    
    if(ch >='a' && ch<='z' || ch >='A' && ch<='Z')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
      
    }
      i++;
    }
    
    printf("\nThe vowel is : %d",vowel);
    printf("\nThe consonant is : %d",consonant);
    
    getch();
}

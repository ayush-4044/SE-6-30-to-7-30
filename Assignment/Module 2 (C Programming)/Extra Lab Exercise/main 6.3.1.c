#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i,word=0;
    
    
    printf("Enter string : ");
    scanf("%[^\n]s",&str);// read full line including space
    
   for (i = 0; str[i] != '\0'; i++) {
       
        if ((str[i] != ' ' && str[i] != '\n') &&
            (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1] == '\n')) {
            word++;
        }
    }
    printf("The word count is : %d",word);
    
    getch();
}

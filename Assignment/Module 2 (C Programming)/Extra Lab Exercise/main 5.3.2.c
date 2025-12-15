#include<stdio.h>
#include<conio.h>
#include<string.h>

int palindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;  
        i++;
        j--;
    }
    return 1; 
}


void main() {
    
    char str[100];
    
    printf("Enter string : ");
    scanf("%s",&str);
    
    if(palindrome(str))
    {
        printf("\nThe string is palindrome");
    }
    else
    {
        printf("\nThe string is not palindrome");
    }
    getch();
}

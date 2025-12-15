#include<stdio.h>
#include<conio.h>

int main ()
{
    FILE *fp;
    char str[50];
    
    fp = fopen("data.txt","w");
    
    printf("Enter a string : ");
    fgets(str,50,stdin);
    
    fprintf(fp,"%s",str);
    fclose(fp);
    
    fp = fopen("data.txt","r");
    printf("\nData inside the file is :\n");
    printf("%s",str);
    fclose(fp);
    
    
    return  0;
}
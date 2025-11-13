#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *fp;
    int choice;
    char username[10],pass[10];
    char u[10],p[10];
    
    printf("Enter choice\n1 for Signup\n2 for Login\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1 : fp = fopen("file.txt","w");
        printf("\nEnter username : ");
        scanf("%s",&username);
        printf("\nEnter password : ");
        scanf("%s",&pass);
        fprintf(fp,"%s %s",username,pass);
        fclose(fp);
        
        printf("\nSignup successful! You can now login");
        break;
        
        case 2 : fp = fopen("file.txt","r");
         printf("\nEnter username : ");
        scanf("%s",&username);
        printf("\nEnter password : ");
        scanf("%s",&pass);
        fscanf(fp,"%s %s",u,p);
        fclose(fp);
        
       if(strcmp(username,u)==0 && strcmp(pass,p)==0)
       {
           printf("Login successful! Access granted.");
       }
       else
       {
           printf("Inavlid username or password! Access denied.");
       }
        break;
        
        default : printf("Inavlid choice");
        break;
    }
    
    getch();
}
#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[50];
}s1;

void main()
{
    
    FILE *fp;
    fp = fopen("file.txt","w");
    
    printf("Enter id : ");
    scanf("%d",&s1.id);
    
    printf("Enter name : ");
    scanf("%s",&s1.name);
    
    fprintf(fp,s1.name);
    fclose(fp);
    

    getch();
}
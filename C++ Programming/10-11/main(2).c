#include<stdio.h>
#include<conio.h>

struct Address
{
    char city[50];
    int zip;
};

struct student
{
    int id;
    char name[50];
    struct Address add;
    
}s1;

void main()
{
    
     printf("Enter id : ");
     scanf("%d",&s1.id);
    
     printf("Enter name : ");
     scanf("%s",&s1.name);
     
     printf("Enter address : ");
     scanf("%s",&s1.add.city);
     
     printf("Enter zip : ");
     scanf("%d",&s1.add.zip);
   
     printf("\nYour id is %d",s1.id);
     printf("\nYour name is %s",s1.name);
     printf("\nYour city is %s",s1.add.city);
     printf("\nYour zip is %d",s1.add.zip);
 
    getch();
}
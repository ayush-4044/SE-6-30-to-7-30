#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[50];
}s1[50];

void main()
{
    
    int i,num;
    
    
    
    printf("Enter total number of student : ");
    scanf("%d",&num);
    
    
    for(i=0;i<num;i++)
    {
        
     printf("Enter id : ");
     scanf("%d",&s1[i].id);
    
     printf("Enter name : ");
     scanf("%s",&s1[i].name);
    }
    
    for(i=0;i<num;i++)
    {
        printf("\nYour id is %d",s1[i].id);
        printf("\nYour name is %s",s1[i].name);
    }
  
    getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int marks,roll;
    char name[50];
    
}s1[50];

void main()
{
    int i,student = 3;
    
    for(i=0;i<student;i++)
    {
        printf("Enter name of student %d : ",i+1);
        scanf("%s",&s1[i].name);
        
        printf("Enter roll number of student %d: ",i+1);
        scanf("%d",&s1[i].roll);
        
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&s1[i].marks);
        
        printf("\n");
    }
    for(i=0;i<student;i++)
    {
        printf("\nThe name of student %d is : %s",i+1,s1[i].name);
        printf("\nThe roll number of student %d is : %d",i+1,s1[i].roll);
        printf("\nThe marks of student %d is : %d",i+1,s1[i].marks);
        
        printf("\n");
    }
    getch();
}
#include<stdio.h>
#include<conio.h>

struct Address
{
  char city[50];
  int zip;
};
struct student
{
    char name[50];
    int age;
    struct Address add;
}s1;

void main()
{
    
  printf("Enter name : ");
  scanf("%s",&s1.name);
  
  printf("Enter age : ");
  scanf("%d",&s1.age);
  
  printf("Enter city : ");
  scanf("%s",&s1.add.city);
  
  printf("Enter zip : ");
  scanf("%d",&s1.add.zip);
  
  printf("\nYour name is %s",s1.name);
  printf("\nYour age is %d",s1.age);
  printf("\nYour city %s",s1.add.city);
  printf("\nYour zip is %d",s1.add.zip);
  
  if(s1.age>18)
  {
      printf("\nEligible to vote");
  }
  else
  {
      printf("\nNot Eligible to vote");
  }
    
   getch();
}
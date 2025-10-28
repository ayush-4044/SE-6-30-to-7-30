#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

  char name[50];
  char surname[50];
  
  printf("Enter your name : ");
  scanf("%s",&name);
  
  printf("Enter your surname : ");
  scanf("%s",&surname);
  
  printf("%s",strcat(name,surname));
   
  getch();

}


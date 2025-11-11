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
    
   struct student s1 = {"Ayush",22,{"Rajkot",360004}};
    
   getch();
}
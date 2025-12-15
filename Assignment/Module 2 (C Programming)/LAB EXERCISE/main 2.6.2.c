#include<stdio.h>
#include<conio.h>


void main()
{

  int num,i,evennum=0,oddnum=0,evensum=0,oddsum=0;
  
  
  printf("\n Enter 10 numbers");
  
  for(i=1;i<=10;i++)
  {
    printf("\n Enter number %d : ",i);
    scanf("%d",&num);
    
    if(num%2==0)
    {
        evennum++;
        evensum+=num;
        
    }
    else
    {
        oddnum++;
        oddsum+=num;
    }
  }
  
  printf("\n Total even numbers are %d : ",evennum);
  printf("\n Total odd numbers are %d : ",oddnum);
  printf("\n The sum of even numbers are %d : ",evensum);
  printf("\n The sum of odd numbers are %d : ",oddsum);
  
  getch();

}


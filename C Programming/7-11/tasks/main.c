#include<stdio.h>
#include<conio.h>
void main()
{
    
    int i,marks[5];
    for(i=0;i<5;i++)
    {
        printf("Enter a marks for subject : %d ->",i+1);
        scanf("%d",&marks[i]);
    }
 
        for (i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(marks[i]>marks[j])
            {
               marks[i] = marks[i] + marks[j];
               marks[j] = marks[i] - marks[j];
               marks[i] = marks[i] - marks[j];
            }
        }
    }
    printf("\nThe ascending order is : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",marks[i]);
    }
    
    printf("\nThe descending order is : ");
    for(i=4;i>=0;i--)
    {
        printf("%d ",marks[i]);
    }
    getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
    
    int i,marks[5],choice;
    for(i=0;i<5;i++)
    {
        printf("Enter a marks for subject : %d ->",i+1);
        scanf("%d",&marks[i]);
    }
    printf("Select 1 for Ascending order or 2 for Descending order:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("Press 1 for ascending order : ");
        for (i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(marks[j]>marks[j+1])
            {
                int tem = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = tem;
            }
        }
    }
    printf("The ascending order is : ");
    for(i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
    printf("\n");
    break;
    
    case 2 : printf("Press 2 for descending order : ");
    for (i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(marks[j]<marks[j+1])
            {
                int tem = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = tem;
            }
        }
    }
    printf("The descending order is : ");
    for(i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
    printf("\n");
    break;
    
    default : printf("Invalid choice");
    break;
        
    }

    getch();
}
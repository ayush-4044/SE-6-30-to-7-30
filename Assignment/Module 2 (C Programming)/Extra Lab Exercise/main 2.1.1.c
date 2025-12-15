#include<stdio.h>
#include<conio.h>
void main()
{
    
    int marks;
    
    printf("Enter the number : ");
    scanf("%d",&marks);
    
    if(marks>90)
    {
        printf("Grade A");
    }
        if(marks>75 && marks<=90)
    {
        printf("Grade B");
    }
        if(marks>50 && marks<=75)
    {
        printf("Grade C");
    }
        if(marks<=50)
        {
            printf("Grade D");
        }
    getch();
}

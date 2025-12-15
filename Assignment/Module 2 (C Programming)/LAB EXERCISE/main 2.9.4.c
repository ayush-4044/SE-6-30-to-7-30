#include<stdio.h>
#include<conio.h>
void main()
{
    
    int arr[5],i,max = 0;
    
    for(i=0;i<5;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    
    for(i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    printf("\nThe maximum number is : %d",max);
    getch();
}
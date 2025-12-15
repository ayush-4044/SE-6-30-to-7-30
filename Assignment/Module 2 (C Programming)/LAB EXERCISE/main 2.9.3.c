#include<stdio.h>
#include<conio.h>
void main()
{
    
    int arr[5],i,j,temp;
    
    for(i=0;i<5;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("\nThe Ascending Order is : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\nThe Decscending Order is : ");
    for(i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
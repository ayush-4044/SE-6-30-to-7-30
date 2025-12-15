#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10],i,j,max,min,temp;
    
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max = min = arr[0];
    
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
            max = arr[i];
        
        if(arr[i]<min)
            min = arr[i];
    }
    
    printf("\nThe maximum number is : %d",max);
    printf("\nThe minimum number is : %d",min);
    
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\n\nThe asecending order is : ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
  
   getch();
}
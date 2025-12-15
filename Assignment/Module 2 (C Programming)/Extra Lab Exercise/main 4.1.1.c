#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10],i,max,min;
    
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
  
   getch();
}
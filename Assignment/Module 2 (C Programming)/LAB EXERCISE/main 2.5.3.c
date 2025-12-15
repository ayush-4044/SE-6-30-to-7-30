#include<stdio.h>
#include<conio.h>

void main ()
{
    
    int cost,sell,profit,loss;
    
    printf("\n Enter cost price : ");
    scanf("%d",&cost);
    
    printf("\n Enter sell price : ");
    scanf("%d",&sell);
    
    if(sell>cost)
    {
        profit = sell - cost;
        printf("\n Your profit is : %d",profit);
        
    }
    else if(cost>sell)
    {
        loss = cost - sell;
        printf("\n Your loss is : %d",loss);
    }
    else
    {
        printf("\n No profit, No loss ");
    }
    getch();
    
    
}
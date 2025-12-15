#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,i,j,prime;
    
    printf("Enter number : ");
    scanf("%d",&num);
    
    printf("\nThe prime number between 1 to %d are : \n",num);
    
    for(i=2;i<=num;i++)
    {
        prime = 1;
        
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("%d ", i);
    }
    
    
    getch();
}

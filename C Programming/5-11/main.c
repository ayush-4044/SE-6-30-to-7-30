#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,i,sum=0;
    float per=0;
    
    printf("Enter size of subject : ");
    scanf("%d",&num);
    
    int mark[num];
    
    for(i=0;i<num;i++)
    {
        printf("Enter your mark for subject : %d -> ",i+1);
        scanf("%d",&mark[i]);
    }
     for(i=0;i<num;i++)
    {
        printf("\n Marks of subject is : %d -> ",mark[i]);
    }
    for(i=0;i<num;i++)
    {
        sum+=mark[i];
    }
    printf("\n your total is : %d",sum);
    per = sum/num;
    printf("\n Your percentage is : %f",per);
    
    getch();
}
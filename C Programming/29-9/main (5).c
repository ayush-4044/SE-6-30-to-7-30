#include<stdio.h>
#include<conio.h>
void main()
{
    int math = 78;
    int sci = 88;
    int hindi = 68;
    int eng = 58;
    int guj = 79;
    
    int total = math+sci+hindi+eng+guj;
    printf("\n Total is  %d ",total);
    
    float per = total/5;
    printf("\n Percentage is %f ",per);
    
    getch();
}
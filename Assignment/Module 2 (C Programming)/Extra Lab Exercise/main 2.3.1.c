#include<stdio.h>
#include<conio.h>
void main()
{
    
    float temp;
    
    if(temp<0)
    {
        printf("\nFreezing weather");
    }
    else if(temp>=0 && temp<10)
    {
        printf("\nVery Cold weather");
    }
    else if(temp>=10 && temp<=20)
    {
        printf("\nCold weather");
    }
    else if (temp >= 20 && temp < 30) {
        printf("\nNormal in Temp");
    }
    else if (temp >= 30 && temp < 40) {
        printf("\nIt's Hot");
    }
    else {   
        printf("\nIt's Very Hot");
    }
    getch();
}

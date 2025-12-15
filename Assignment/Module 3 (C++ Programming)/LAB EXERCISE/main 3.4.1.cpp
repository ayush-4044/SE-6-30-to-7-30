#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
float divi(float a, float b)
{
    return a/b;
}


int main()
{
    int choice,x,y;
    
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    
    cout<<"1 for addition"<<" "<<"2 for subtraction"<<" "<<"3 for multiplication"<<" "<<"4 for division"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 : cout<<"addition : "<<add(x,y)<<endl;
        break;
        case 2 : cout<<"subtraction : "<<sub(x,y)<<endl;
        break;
        case 3 : cout<<"multiplication : "<<mul(x,y)<<endl;
        break;
        case 4 : cout<<"division : "<<divi(x,y)<<endl;
        break;
        default : cout<<"Invalid choice";
        break;
    }



    return 0;
}
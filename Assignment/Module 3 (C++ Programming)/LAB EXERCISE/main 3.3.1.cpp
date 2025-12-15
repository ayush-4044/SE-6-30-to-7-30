#include <iostream>
using namespace std;

int main()
{
    int mark;
    
    cout<<"Enter mark : ";
    cin>>mark;
    
    if(mark>=75)
    {
        cout<<"A grade"<<endl;
    }
    else if(mark>=65)
    {
        cout<<"B grade"<<endl;
    }
    else if(mark>=55)
    {
        cout<<"C grade"<<endl;
    }
    else if (mark>=35)
    {
        cout<<"D grade"<<endl;
    }
    else
    {
         cout<<"You are fail"<<endl;
    }
        

    return 0;
}
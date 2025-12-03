#include <iostream>
#include<cstring>
using namespace std;

float division(int x, int y)
{
    if(y==0)
    {
        throw "Attempted to divided by zero!";
    }
    return(x/y);
}


int main()
{
 
    int i = 50;
    int j = 10;
    float k = 0;

    try
    {
        k = division(i,j);
        cout<<k<<endl;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }

    return 0;
}
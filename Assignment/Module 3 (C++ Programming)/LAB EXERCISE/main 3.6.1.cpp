#include <iostream>
#include<string.h>
using namespace std;

class Calculator
{
    public:
    
    int add(int a,int b)
    {
    return a+b;    
    }
    int sub(int a,int b)
    {
    return a-b;    
    }
    int mul(int a,int b)
    {
    return a*b;    
    }
    int divi(int a,int b)
    {
    return a/b;    
    }

};


int main()
{
   Calculator cal;
   
   cout<<cal.add(10,20)<<endl;
   cout<<cal.sub(20,10)<<endl;
   cout<<cal.mul(10,20)<<endl;
   cout<<cal.divi(20,10)<<endl;
   
    return 0;
}
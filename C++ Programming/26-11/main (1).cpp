#include <iostream>
using namespace std;

class Calculation
{
    public:
    
    int cal(int a,int b)
    {
        return a+b;
    }
    double cal(double a,double b)
    {
        return a*b;
    }
};

int main()
{
    Calculation c;
    cout<<c.cal(6.0,5.0)<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Calculation
{
    public:
    
    int cal(int a,int b)
    {
        return a+b;
    }
    int cal(int a,int b, int c)
    {
        return a*b*c;
    }
};

int main()
{
    Calculation c;
    cout<<c.cal(6,5,2)<<endl;
    return 0;
}
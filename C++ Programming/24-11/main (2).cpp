#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    
    public:
    void get_a(int n)
    {
        a=n;
        
    }
    
    
};
class B
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
        b=n;
    }
    
    
};
class C :public A,public B
{
    public:
    void get_ans(){
     cout<<"The value of a : "<<a<<endl;
     cout<<"The value of b : "<<b<<endl;
     cout<<"The multiplication of two value is : "<<a*b;
    }
    
    
};

int main()
{
    C c;
    
    c.get_a(10);
    c.get_b(20);
    c.get_ans();
    
    return 0;
}
#include <iostream>
using namespace std;

class A
{
    public:
    int a;
    void get_a(int n)
    {
        a = n;
    }
};

class B : public A
{
    public:
    int b;
    void get_b(int n)
    {
        b = n;
    }
};
class C
{
    public:
    int c;
    void get_c(int n)
    {
        c = n;
    }
};
class D : public B,public C
{
    public:
    
    void get_d()
    {
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
      cout<<a*b*c<<endl;
    }
};

int main()
{
    D d;
    
    d.get_a(15);
    d.get_b(6);
    d.get_c(45);
    
    d.get_d();
    

    return 0;
}
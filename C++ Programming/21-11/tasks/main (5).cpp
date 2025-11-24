#include <iostream>
using  namespace std;

class Shape
{
    public:
    int a,b;
    
    void detail(int a1,int b1)
    {
     a = a1;
     b = b1;
    }
};

class Rec : public Shape
{
    public:
    void rec()
    {
        float area;
        area = a * b;
        cout<<"The area of rectangle is : "<<area<<endl;
    }
};

class Tri : public Shape
{
    public:
   void tri()
    {
        float area;
        area = 0.5 * a * b;
        cout<<"The area of triangle is : "<<area<<endl;
    }
};

int main()
{
    int a,b;
    
    cout<<"Enter value of a : ";
    cin>>a;
    
    cout<<"Enter value of b : ";
    cin>>b;
    
    Rec rec;
    Tri tri;
    
    rec.detail(a,b);
    rec.rec();
    tri.detail(a,b);
    tri.tri();

    return 0;
}
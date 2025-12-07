#include <iostream>
using namespace std;

class A
{
  public:
  int x,y;
  
  A()
  {
      cout<<"Default constructor called";
  }
  A(int a, int b)
  {
     x = a;
     y = b;
  }
  A(const A &old)
  {
      x = old.x;
      y = old.y;
      
      cout<<"Copy constructor called!\n";
  }
  
  void display()
  {
      cout<<x<<" "<<y<<"\n";
  }
      
  
  
};

int main()
{
    A obj = A(10,20);
    A obj2 = A(obj);
    obj2.display();

    return 0;
}
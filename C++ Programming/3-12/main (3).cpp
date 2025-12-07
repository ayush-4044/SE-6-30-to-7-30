#include <iostream>
using namespace std;

class A
{
   public:
   
   A()
   {
       cout<<"Default constructor called\n";
       
   }
   ~A()
   {
       cout<<"Distructor called\n";
   }
   
};

int main()
{
    
    A a = A();
    
    return 0;
}
#include <iostream>
using namespace std;

class A
{
   public:
   
   int num;
   string name;
   
   void display()
   {
       cout<<num<<" "<<name<<endl;
   }
   
};

int main()
{
    
    A a;
    
    a.num=101;
    a.name = "Ayush";
    
    a.display();
    return 0;
}
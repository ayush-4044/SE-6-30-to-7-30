#include <iostream>
#include<cstring>
using namespace std;

class Sum
{
   private:
   int x,y,z;
   
   public:
   void add()
   {
    cout<<"Enter two numbers : ";
   
   cin>>x>>y;
   
   z=x+y;
   cout<<"The answer is : "<<z<<endl;
   }
   
};


int main()
{
    Sum sm;
    sm.add();
    
    return 0;
}
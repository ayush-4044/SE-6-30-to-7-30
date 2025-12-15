#include <iostream>
using namespace std;

int main()
{
   int a = 5;
   float b = a;
   cout<<"The implicit type conversion is : "<<b<<endl;
   
   float x = 7.25;
   int y = (int)x;
   cout<<"The explicit type conversion is : "<<y<<endl;
    
    return 0;
}
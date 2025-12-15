#include <iostream>
using namespace std;

int main()
{
   int a = 10, b = 5;
   
   cout<<"Arithmetic operator : "<<endl; 
   cout<<"a + b = "<<a+b<<endl;
   cout<<"a - b = "<<a-b<<endl;
   cout<<"a * b = "<<a*b<<endl;
   cout<<"a / b = "<<a/b<<endl;
   cout<<"a % b = "<<a%b<<endl << endl;;
   
   cout<<"Relational operator : "<<endl;
   cout<<"a > b = "<<(a>b)<<endl;
   cout<<"a < b = "<<(a<b)<<endl;
   cout<<"a >= b = "<<(a>=b)<<endl;
   cout<<"a <= b = "<<(a<=b)<<endl;
   cout<<"a == b = "<<(a==b)<<endl;
   cout<<"a != b = "<<(a!=b)<<endl << endl;;
   
   cout<<"Logical operator : "<<endl;
   cout<<"(a>b & b>0) = "<<(a>b & b>0)<<endl;
   cout<<"(a>b || b==5) = "<<(a>b || b==5)<<endl;
   cout << "!(a > b) = " << !(a > b) << endl << endl;
   
   cout << "Bitwise Operators : " << endl;
   cout << "a & b = " << (a & b) << endl;
   cout << "a | b = " << (a | b) << endl;
   cout << "a ^ b = " << (a ^ b) << endl;
   cout << "a << 1 = " << (a << 1) << endl;
   cout << "a >> 1 = " << (a >> 1) << endl;
   
    
    return 0; 
}
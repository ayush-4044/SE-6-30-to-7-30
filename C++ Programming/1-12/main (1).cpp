#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   
  string s1 = "Hello world";
  char ch[] = {'c','+','+'};
  string s2 = string(ch);
  
  cout<<s1<<endl;
  cout<<s2<<endl;

    return 0;
}
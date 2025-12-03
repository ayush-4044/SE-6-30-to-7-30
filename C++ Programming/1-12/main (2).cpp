#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   
    char c1[50];
    char c2[50];
    
    cout<<"Enter first string : ";
    cin>>c1;
    
    cout<<"Enter second string : ";
    cin>>c2;
    
    cout<<strcat(c1,c2)<<endl;
  

    return 0;
}
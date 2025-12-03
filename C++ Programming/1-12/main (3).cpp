#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   
    char c1[50];
    char c2[50];
    
    cout<<"Enter first string : ";
    cin>>c1;
    
    strcpy(c2,c1);
    
    cout<<c2<<endl;
  

    return 0;
}
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   
   char c1[]="mango";
   char c2[50];
    
    do
    {
      cout<<"What is your favourite fruite : ";
      cin>>c2;
    }
    while(strcmp(c1,c2)!=0);
    
    cout<<"Answer is correct";
    

    return 0;
}
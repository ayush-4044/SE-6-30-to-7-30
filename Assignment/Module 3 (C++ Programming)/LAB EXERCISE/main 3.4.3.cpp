#include <iostream>
using namespace std;

int global = 10;

void show()
{
    int local = 20;
    cout<<"Global variable is : "<<global<<endl;
    cout<<"Local variable is : "<<local<<endl;
}


int main()
{
    int local1 = 30;
    
    cout<<"Global variable is : "<<global<<endl;
    cout<<"Local variable is : "<<local1<<endl<<endl;;
    
    show();
    
    return 0;
}
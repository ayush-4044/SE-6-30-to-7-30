#include <iostream>
using namespace std;

class Rectangle
{
    public:
    
    float length,width,area;
     
     void display()
     {
             
        cout<<"Enter length : ";
        cin>>length;
  
        cout<<"Enter width : ";
        cin>>width;
  
        area = length * width;
    
        cout<<"The area of rectangle is : "<<area<<endl;
     
     }
};

int main()
{

    Rectangle r;
    
    r.display();
    
    
  return 0;
}
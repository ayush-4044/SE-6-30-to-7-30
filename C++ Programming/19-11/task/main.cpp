#include <iostream>
using namespace std;

class User
{
    public:
    string name,surname,tech;
    
    User(string n,string s,string t)
    {
        name = n;
        surname = s;
        tech = t;
    }
    
    void display()
    {
        cout<<name<<" "<<surname<<" "<<tech<<endl;
    }
    
};

int main()
{
   
   string name1,surname1,tech1,name2,surname2,tech2;
   
   cout<<"Enter name : ";
   cin>>name1;
   
   cout<<"Enter surname : ";
   cin>>surname1;
   
   cout<<"Enter technology : ";
   cin>>tech1;
   
   cout<<"Enter name : ";
   cin>>name2;
   
   cout<<"Enter surname : ";
   cin>>surname2;
   
   cout<<"Enter technology : ";
   cin>>tech2;
   
   User s1 = User(name1,surname1,tech1);
   User s2 = User(name2,surname2,tech2);
   
   s1.display();
   s2.display();
 
    return 0;
}
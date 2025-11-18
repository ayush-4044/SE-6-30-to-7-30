#include <iostream>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    string surname;
    string email;
    string pass;
    
    void show()
    {
        cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<pass<<endl;
    }
};

int main()
{
  
  Student s1;
  Student s2;
  
  s1.id = 101;
  s1.name = "Ayush";
  s1.surname = "Hirpra";
  s1.email = "Ayush@gmail.com";
  s1.pass = "1234";
  
  
  s2.id = 102;
  s2.name = "Dhaval";
  s2.surname = "Jethva";
  s2.email = "Dhaval@gmail.com";
  s2.pass = "5678";
  
  s1.show();
  s2.show();
  

    return 0;
}
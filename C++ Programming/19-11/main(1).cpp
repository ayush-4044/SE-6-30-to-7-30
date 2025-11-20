#include <iostream>
using namespace std;

class Student
{
  public:
  
  int id;
  string name,surname,email,pass;
  
  Student(int i,string n,string s,string e,string p)
  {
      id = i;
      name = n;
      surname = s;
      email = e;
      pass = p;
  }
  
  void display()
  {
      cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<pass<<endl;
  }
  
};


int main()
{
    Student s1 = Student(101,"Ayush","Hirpara","ayush@gmail.com","1234");
    Student s2 = Student(102,"Dhaval","Jethva","dhaval@gmail.com","5678");
    
    s1.display();
    s2.display();
    
    return 0;
}
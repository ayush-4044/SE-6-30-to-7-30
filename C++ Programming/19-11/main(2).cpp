#include <iostream>
using namespace std;

class Student
{
  public:
  
  int id=101;
  string name="Ayush";
  
  Student(int id,string name)
  {
      this->id = id;
      this->name = name;
  
  }
  
  void display()
  {
      cout<<id<<" "<<name<<" "<<endl;
  }
  
};


int main()
{
    Student s1 = Student(201,"Dhaval");
    s1.display();
 
    return 0;
}
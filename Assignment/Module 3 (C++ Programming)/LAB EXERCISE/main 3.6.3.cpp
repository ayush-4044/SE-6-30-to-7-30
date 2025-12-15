#include <iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    
    void inputperson()
    {
    cout<<"Enter name : ";
    cin>>name;
    
    cout<<"Enter age : ";
    cin>>age;
    }
    
    void displayPerson()
    {
        cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl; 
    }
};

class Student : public Person
{
    public:
     
    int grade;
    
    void inputstudent()
    {
        inputperson();
        cout<<"Enter Total : ";
        cin>>grade;
    }
    
    void displayStudent()
    {
        displayPerson();
        cout<<"Total : "<<grade<<endl;
    }
     
};

class Teacher : public Person
{
  public:  
  double salary;
  
  void inputteacher()
  {
      inputperson();
      cout<<"Enter salary : ";
      cin>>salary;
   }
   
   void displayTeacher()
   {
    displayPerson();
    cout<<"Salary : "<<salary<<endl;
   }
};
int main()
{
    Student s;
    Teacher t;
    
    cout<<"Student details"<<endl;
    s.inputstudent();
    s.displayStudent();
    
    cout<<endl;
    cout<<"Teacher details"<<endl;
    t.inputteacher();
    t.displayTeacher();

    return 0;
}

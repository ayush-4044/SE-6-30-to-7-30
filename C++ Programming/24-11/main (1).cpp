#include <iostream>
using namespace std;

class Account
{
  
  public :
  int accno;
  string name;
  static float roi;
  
  Account(int an,string n)
  {
      accno = an;
      name = n;
  }
  
  void display()
  {
      cout<<accno<<" "<<name<<" "<<roi<<endl;
  }
  
};

float Account :: roi = 6.5;


int main()
{
    
    Account a1 = Account(101,"Ayush");
    Account a2 = Account(102,"Dhaval");
    
    a1.display();
    a2.display();

    return 0;
}
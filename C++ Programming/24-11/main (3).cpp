#include <iostream>
using namespace std;

class Account
{
    public:
    int accno;
    string name;
    static int count;
    
    Account(int a,string n)
    {
        count++;
        accno = a;
        name = n;
        cout<<count;
    };
    
    void display()
    {
        cout<<accno<<" "<<name<<" "<<count<<endl;
    }
};

int Account :: count = 0;

int main()
{
    
    Account a1 = Account(101,"ayush");
    Account a2 = Account(102,"dhaval");
     Account a3 = Account(103,"jay");
    Account a4 = Account(104,"meet");
    
    // a1.display();
    // a2.display();
    // a3.display();
    // a4.display();
}
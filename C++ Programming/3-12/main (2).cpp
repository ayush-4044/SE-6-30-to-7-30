#include <iostream>
using namespace std;

class Account
{
   private:
   int account_no;
   int balance;
   
   public:
   Account(int a , int b)
   {
       account_no = a;
       balance = b;
   }
   void display()
   {
       cout<<"\nAccount_no is : "<<account_no;
       cout<<"\nBalance is : "<<balance;
   }
   
};

int main()
{
    
    int an,bal;
    
    cout<<"Enter account_no : ";
    cin>>an;
    
    cout<<"Enter balance : ";
    cin>>bal;
    
    Account *acc=new Account(an,bal);
    acc->display();
    
    return 0;
}
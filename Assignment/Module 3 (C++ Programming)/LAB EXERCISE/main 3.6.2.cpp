#include <iostream>
using namespace std;

class BankAccount
{
    private:
    double balance;
    
    public:
    
     BankAccount(double b)
    {
        balance = b;
    }
    
    void Diposite(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Deposited : "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid amount!"<<endl;
        }
    }
    
    void Withdraw(double amount)
    {
        if(amount <= balance && amount>0)
        {
            balance-=amount;
            cout<<"Withdrawn : "<<amount<<endl;
        }
        else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    
    void display()
    {
        cout<<"Current Balance : "<<balance<<endl;
    }
    
};

int main()
{
   BankAccount acc(2000);
   
   acc.display();
   acc.Diposite(1000);
   acc.Withdraw(500);
   acc.display();
    return 0;
}

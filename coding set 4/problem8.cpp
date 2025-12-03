#include <iostream>
using namespace std;

class Account
{
	double balance;
   
    public:
    Account(double b = 0)
    {
        balance = b;
        
    }

    void transfer(Account *acc, int amount)
    {
       if (balance >= amount)
       {
        cout<<"Amount Transferred Successfully"<<'\n';
        balance -= amount;
        acc->balance = acc->balance + amount;
       }
       else
       {
        cout<<"Insufficient Balance";
       }
       
    }

    void display()
    {
        cout<<balance<<'\n';
        
    }

};

int main()
{
    Account a1(3000);
    Account a2(1000);
    a1.transfer(&a2, 500);
    cout<<"Balance of account 1:"<<'\n';
    a1.display();
    cout<<"Balance of account 2:"<<'\n';
    a2.display();
    
    return 0;
}
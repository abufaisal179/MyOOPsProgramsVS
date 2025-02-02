// Hey guys , its Faisal's Program : TITLE >> {}
int n;
#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number, balance;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->balance = balance;
        if (balance > 0)
        {
            this->account_number = account_number;
        }
        else
        {
            cout << "Invalid balance !!";
        }
    }
    void Deposite(int n)
    {
        balance += n;
    }
    void Withdraw(int n)
    {
        balance -= n;
    }
    void Display(string name)
    {
        cout << "the balance of " << name << " A/C is :" << this->balance;
    }
};

int main(void)
{

    Customer A1("Abu Faisal", 1, 5000);
    Customer A2("Peter", 2, 2700);
    A1.Deposite(200);
    A1.Withdraw(150);
    A1.Display("Abu Faisal");
    return 0;
}
